#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int main(int argc, char *argv[]){
    int parent2child[2], child2parent[2];
    pipe(parent2child);
    pipe(child2parent);

    if(fork() > 0) {    //parent process
        write(parent2child[1], "!!", 1);
        char buff;
        read(child2parent[0], &buff, 1);
        printf("%d, received pong\n", getpid());
    } else {            //child process
        char buff;
        read(parent2child[0], &buff, 1);
        printf("%d, received ping\n", getpid());
        write(child2parent[1], "??", 1);
    }
    exit(0);

}
