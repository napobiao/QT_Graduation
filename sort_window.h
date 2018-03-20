#ifndef SORT_WINDOW
#define SORT_WINDOW
#include <QMainWindow>
#include <QDialog>
#include <QPushButton>
class Sort_Window : public QMainWindow
{
	Q_OBJECT
public :
	Sort_Window(QWidget *parent = 0);
	~Sort_Window();

	void sleep(unsigned int msec);	
	void begin_bubble();
	void sort_bubble();
	void change_bubble();



private:
	int x,y,width,height;
	int num[10];
	QPushButton *num_button[10];
	QDialog *d_bubble;
	QPushButton *run_bubble;


	QPushButton *open_source;
	QPushButton *exit_window;

	QPushButton *bubble_begin;
	QPushButton *push_bubble[10];	


};











#endif
