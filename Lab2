
开启gdb模式
一个窗口执行make qemu-gdb
一个窗口执行gdb-multiarch

如果设置断点没反应，检查一下是否存在报错信息：auto-loading has been declined

按照提示路径在 /home/xxx/.gdbinit中新增内容：

add-auto-load-safe-path /home/xuanqian/xv6-labs-2022/.gdbinit
set auto-load safe-path /

重新启动gdb即可
