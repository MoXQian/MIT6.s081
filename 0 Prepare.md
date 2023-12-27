# Prepare

# Step0 准备
折腾了很久，最后发现是自己的电脑不能连外网，所以重新找了能连外网的物理机，开了账号。

## 1.使用的是2022年的教程
[https://pdos.csail.mit.edu/6.S081/2021/tools.html](https://pdos.csail.mit.edu/6.828/2022/schedule.html)https://pdos.csail.mit.edu/6.828/2022/schedule.html

1.按照教程配置环境
<img width="1215" alt="image" src="https://github.com/MoXQian/MIT6.s081/assets/62004141/91dba527-9a85-458b-bd1c-eb8305f18eeb">

我的环境：Linux ubuntu 20.04
2.配置命令：

`sudo apt-get install git build-essential gdb-multiarch qemu-system-misc gcc-riscv64-linux-gnu binutils-riscv64-linux-gnu`

3.安装xv6
<img width="1102" alt="image" src="https://github.com/MoXQian/MIT6.s081/assets/62004141/b11a1fb1-89c2-456a-a637-8d563e17d0ca">

`git clone git://g.csail.mit.edu/xv6-labs-2022`

4.验证安装
`cd xv6-labs-2022`

```
# in the xv6 directory
$ make qemu
# ... lots of output ...
init: starting sh
$
```

ls 查看

<img width="254" alt="image" src="https://github.com/MoXQian/MIT6.s081/assets/62004141/2d907455-6a88-4bd2-b283-f7b96135d270">

mac电脑
control + p 查看正在运行的进程

<img width="216" alt="image" src="https://github.com/MoXQian/MIT6.s081/assets/62004141/a6b66e87-a001-4dd2-9655-fb9eaf227431">

退出：control + a 输入 x

<img width="584" alt="image" src="https://github.com/MoXQian/MIT6.s081/assets/62004141/79e12061-9446-42bf-b580-f4bff31d43b0">

