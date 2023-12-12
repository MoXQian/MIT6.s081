# Prepare

# Step0
检查准备环境
折腾了几次，最后都没成功，找到这个帖子，是用镜像来做的

https://zhuanlan.zhihu.com/p/442656932?utm_id=0

# 记录一下使用这个镜像的具体步骤

## 1.使用的是2021年的教程
https://pdos.csail.mit.edu/6.S081/2021/tools.html

LInux CentOS7机器
安装了docker镜像，ubuntu 20.04，

对了做一切之前记得update or upgrade（update和upgrade的简单区别是：一个保存一切，一个旧的不保留了）

update or upgrade 这个话还不理解

# 镜像的使用
docker images 来列出本地主机上的镜像。
![image](https://github.com/MoXQian/MIT6.s081/assets/62004141/99dc8a68-a2e2-429d-9400-14dbc0b1822c)

各个选项说明:
REPOSITORY：表示镜像的仓库源
TAG：镜像的标签
IMAGE ID：镜像ID
CREATED：镜像创建时间
SIZE：镜像大小

要使用该镜像来运行容器时
docker run -t -i REPOSITORY:TAG /bin/bash

docker run -t -i lebronlambert/ubuntu20.04-mit6.s801-2021-initenv:latest /bin/bash
