#include "widget.h"
#include <QApplication>
#include <QMenuBar>
#include <QWidget>
#include "button.h"
#include "open_window.h"
#include <QPushButton>
//运行的主界面

Widget :: Widget(QWidget *parent):QWidget(parent)
{
	setWindowTitle("基于Qt的算法可视化在线系统");
	adjustSize();
	Open_Window *openwindow = new Open_Window(this);
	button_sort = new Pushbutton(this);
	button_sort->setText("排序");
	button_sort->setObjectName("sort");
	button_sort->setGeometry(100,100,100,50);
	connect(button_sort,&Pushbutton::clicked,openwindow,&Open_Window::open_slot);
	button_sort->show();

	button_stack = new Pushbutton(this);
	button_stack->setText("栈结构");
	button_stack->setObjectName("stack");
	button_stack->setGeometry(100,200,100,50);
//	connect(button_stack,&Pushbutton::clicked,openwindow,&Open_Window::open_slot);
	button_stack->show();

	button_link = new Pushbutton(this);
	button_link ->setText("链表");
	button_link->setObjectName("link");
	button_link->setGeometry(100,300,100,50);
//	connect(button_link,&Pushbutton::clicked,openwindow,&Open_Window::open_slot);
	button_link->show();

	button_exit = new Pushbutton(this);
	button_exit->setText("退出");
	button_exit->setObjectName("exit");
	button_exit->setGeometry(100,600,50,25);
	connect(button_exit,&Pushbutton::clicked,this,&Widget::close);
	button_exit->show();
}
Widget :: ~Widget()
{}
