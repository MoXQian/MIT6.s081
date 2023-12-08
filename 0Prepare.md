# Prepare

# Step0
检查准备环境

克隆实验代码
"git clone https://pdos.csail.mit.edu/6.828/2018/jos.git lab"

编译工具链
gcc -m32 -print-libgcc-file-name
# 输出 /usr/lib/gcc/x86_64-redhat-linux/4.8.5/32/libgcc.a 则正常

QEMU模拟器
# GitHub可能访问速度慢，需要挂梯子
git clone https://github.com/mit-pdos/6.828-qemu.git qemu
