
第一步根据课程知识了解一下整个系统调用的流程

user/user.h:		用户态程序调用跳板函数 trace()
user/usys.S:		跳板函数 trace() 使用 CPU 提供的 ecall 指令，调用到内核态
kernel/syscall.c	到达内核态统一系统调用处理函数 syscall()，所有系统调用都会跳到这里来处理。
kernel/syscall.c	syscall() 根据跳板传进来的系统调用编号，查询 syscalls[] 表，找到对应的内核函数并调用。
kernel/sysproc.c	到达 sys_trace() 函数，执行具体内核操作

注意：user/usys.S是由user/usys.pl在运行后生成的汇编文件
里面定义了每个 system call 的用户态跳板函数：

.global trace
 trace:             # 定义用户态跳板函数
 li a7, SYS_trace   # 将系统调用 id 存入 a7 寄存器
 ecall              # ecall，调用 system call ，跳到内核态的统一系统调用处理函数 syscall()  (syscall.c)
 ret

这么繁琐的调用流程的主要目的是实现用户态和内核态的良好隔离。

并且由于内核与用户进程的页表不同，寄存器也不互通，所以参数无法直接通过 C 语言参数的形式传过来，而是需要使用 argaddr、argint、argstr 等系列函数，从进程的 trapframe 中读取用户进程寄存器中的参数。

同时由于页表不同，指针也不能直接互通访问（也就是内核不能直接对用户态传进来的指针进行解引用），而是需要使用 copyin、copyout 方法结合进程的页表，才能顺利找到用户态指针（逻辑地址）对应的物理内存地址。


struct proc *p = myproc(); // 获取调用该 system call 的进程的 proc 结构
copyout(p->pagetable, addr, (char *)&data, sizeof(data)); // 将内核态的 data 变量（常为struct），结合进程的页表，写到进程内存空间内的 addr 地址处。
