#include "open_window.h"
#include <QDialog>
#include <QMainWindow>
#include <QString>
#include <QPushButton>
#include "widget.h"
Open_Window :: Open_Window(QWidget *parent):QMainWindow(parent)
{
//	open_slot();
}

Open_Window :: ~Open_Window()
{}


void Open_Window :: open_slot()
{	sort_window = new Sort_Window(this);
//	sort_window->hide();
//	Open_Window *current_window;
	int x = 20,y = 40,width = 200,height = 40,i = 0,h_space = 80;
//	d_open = new QDialog(this);
	this->showFullScreen();
	QString buttonName = sender()->objectName();
	this->setWindowTitle(buttonName);
	if(buttonName.compare("sort") == 0){
		QPushButton *button_sortBubble = new QPushButton(this);
		button_sortBubble->setText("冒泡排序");
		button_sortBubble->setGeometry(x,y+((i++)*h_space),width,height);
		button_sortBubble->show();
		connect(button_sortBubble,&QPushButton::clicked,sort_window,&Sort_Window::sort_bubble);

		QPushButton *button_sortQuick = new QPushButton(this);
		button_sortQuick->setText("快速排序");
		button_sortQuick->setGeometry(x,y+(i++)*h_space,width,height);
		button_sortQuick->show();

		QPushButton *button_sortBucket = new QPushButton(this);
		button_sortBucket->setText("桶排序");
		button_sortBucket->setGeometry(x,y+(i++)*h_space,width,height);
		button_sortBucket->show();

		QPushButton *button_sortBase = new QPushButton(this);
		button_sortBase->setText("基数排序");
		button_sortBase->setGeometry(x,y+(i++)*h_space,width,height);
		button_sortBase->show();

		QPushButton *button_sortExit = new QPushButton(this);
		button_sortExit->setText("返回");
		button_sortExit->setGeometry(x,y+(i++)*h_space,width/2,height/2);
		connect(button_sortExit,&QPushButton::clicked,this,&QMainWindow::close);
		button_sortExit->show();
	}
	else if(buttonName.compare("stack") == 0){
		QPushButton *button_stack = new QPushButton(this);
		button_stack->setText("栈结构");
		button_stack->setGeometry(20,40,200,40);
		button_stack->show();
	}
	else if(buttonName.compare("link") == 0){
		QPushButton *button_link = new QPushButton(this);
		button_link->setText("链表");
		button_link->setGeometry(20,40,200,40);
		button_link->show();
	}
	
}
