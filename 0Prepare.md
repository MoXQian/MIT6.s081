# Prepare

# Step0
检查准备环境

克隆实验代码

```git clone https://pdos.csail.mit.edu/6.828/2018/jos.git lab```

编译工具链

```
gcc -m32 -print-libgcc-file-name
#输出 /usr/lib/gcc/x86_64-redhat-linux/4.8.5/32/libgcc.a 则正常
```

QEMU模拟器

#GitHub可能访问速度慢，需要挂梯子

```git clone https://github.com/mit-pdos/6.828-qemu.git qemu```

这里暂时报错：

```
[root@xuanqian xuanqian]# git clone https://pdos.csail.mit.edu/6.828/2018/jos.git lab
Cloning into 'lab'...
[root@xuanqian xuanqian]#
[root@xuanqian xuanqian]#
[root@xuanqian xuanqian]# 作者: 扎克蕉
bash: 作者:: command not found
[root@xuanqian xuanqian]# 链接: https://www.515code.com/posts/r1eiw7kt/
bash: 链接:: command not found
[root@xuanqian xuanqian]# 来源: 515code-实验室
bash: 来源:: command not found
[root@xuanqian xuanqian]# 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。
bash: 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。: command not found
```
