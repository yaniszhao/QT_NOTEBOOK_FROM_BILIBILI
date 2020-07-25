1）mysql-installer-community-5.6.26.0.msi 为windows sql 服务器
2) mysql-connector-odbc-5.3.4-win32.msi 为 mysql 的 odbc 驱动 - 32位的

注意：先按 mysql 服务器
1）安装 mysql 服务器的时候 选择自定义安装, 装x86（32位，尽管电脑系统为64位，也选择 x86）的, 不要默认安装, 默认会安装x64。后面需要vs操作数据库，vs中只能使用32位的odbc驱动操作mysql数据库。

2）mysql的odbc驱动默认配置安装即可