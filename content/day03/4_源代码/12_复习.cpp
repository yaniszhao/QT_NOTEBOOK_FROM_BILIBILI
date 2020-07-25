1)常用控件
Qt ui
ui->
ui_xxx.h
1)按钮类
QPushButton
QToolButton
QRadioButton
2)item
QListWidget
3)容器类
QStackWidget
QWidget
QFrame
4)编辑类
QComboBox
QLineEdit
QTextEdit
5)显示类
QLabel
QLcdNumber
QProgressBar

2)布局
水平
垂直
网格
布局属性
大小策略
最小大小
最大大小
容器（分类）
弹簧

3）自定义控件（提升）
a)ui的控件和自定义控件的父类（基类）要一样
b)选中ui控件 -> 提升

4）常用事件处理
事件处理器：
1）都是虚函数（基类中定义QWidget QObject）
2)我们派生类（子类）只是重写这些虚函数（虚函数必须和基类中的虚函数一致）



