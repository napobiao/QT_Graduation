#include "sort_window.h"
#include <QPushButton>
#include <QTime>
#include <QCoreApplication>
Sort_Window :: Sort_Window(QWidget *parent):QMainWindow(parent)
{
	x = 50,y = 50,width = 150,height = 50;
}

Sort_Window :: ~Sort_Window()
{}


void Sort_Window::sleep(unsigned int msec)
{
	QTime dieTime = QTime::currentTime().addMSecs(msec);
	while( QTime::currentTime() < dieTime )
		QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
}

void Sort_Window :: sort_bubble()
{
//	int x = 50,y = 50,width = 150,height = 50;
        showFullScreen();
        open_source = new QPushButton(this);
        open_source->setText("打开查看算法代码");
        open_source->setGeometry(0,0,width,height);
        open_source->show();
        exit_window = new QPushButton(this);
        exit_window->setText("关闭此窗口");
        exit_window->setGeometry(0,height,width,height);
        connect(exit_window,&QPushButton::clicked,this,&Sort_Window::close);
        exit_window->show();
        bubble_begin = new QPushButton(this);
        bubble_begin->setText("点击产生随机数据:");
        bubble_begin->setGeometry(0,height*2,width,height);
	connect(bubble_begin,&QPushButton::clicked,this,&Sort_Window::begin_bubble);
        bubble_begin->show();
	run_bubble = new QPushButton(this);
	run_bubble->setText("点击进行排序");
	run_bubble->setStyleSheet("border:2px groove blue;border-radius:10px;padding:2px 4px;");
	run_bubble->setGeometry(0,height*3,width,height);
	run_bubble->show();

}



void Sort_Window :: begin_bubble(){
//	int x = 50,y = 50,width = 150,height = 50;
  for(int i=0;i<9;i++){
     num[i]=rand()%100;
     num_button[i]=new QPushButton(this);
     num_button[i]->setGeometry(80*i,height*4+10,40,40);
     num_button[i]->setText(QString::number(num[i]));
     num_button[i]->setStyleSheet("background-color:rgb(24,249,150);");
     num_button[i]->show();
  }
     connect(run_bubble,&QPushButton::clicked,this,&Sort_Window::change_bubble);
}

void Sort_Window::change_bubble(){
//	int x = 50,y = 50,width = 150,height = 50;
    for(int n=0;n<9;n++){
       push_bubble[n]=new QPushButton(this);
       push_bubble[n]->setGeometry(0+80*n,height*5+10,40,40);
       push_bubble[n]->setText(QString::number(num[n]));
       push_bubble[n]->setStyleSheet("background-color:rgb(24,249,150);");
       push_bubble[n]->show();
    }
     int tmp;
     for(int i=9;i>1;i--){
         for(int j=0;j<i-1;j++){
             if(push_bubble[j]->text().toInt()>push_bubble[j+1]->text().toInt()){
                 push_bubble[j]->setStyleSheet("background-color:rgb(250,120,10);");
                 sleep(200);
                 push_bubble[j]->setStyleSheet("background-color:rgb(24,249,150);");
                 push_bubble[j+1]->setStyleSheet("background-color:rgb(250,120,10);");
                 tmp=push_bubble[j]->text().toInt();
                 push_bubble[j]->setText(push_bubble[j+1]->text());
                 push_bubble[j+1]->setText(QString::number(tmp));
             }
             else{push_bubble[j]->setStyleSheet("background-color:rgb(24,249,150);");}
             sleep(500);
         }
         push_bubble[i-1]->setStyleSheet("background-color:rgb(250,120,10);");
         sleep(1000);
     }
}















