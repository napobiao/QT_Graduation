#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDialog>
#include <QWidget>
#include "button.h"
#include "open_window.h"
class Widget :public QWidget
{
	Q_OBJECT
public:
	Widget(QWidget *parent = 0);
	~Widget();
private:
	Pushbutton *button_sort;
	Pushbutton *button_stack;
	Pushbutton *button_link;
	Pushbutton *button_exit;
	//Open_Window *openwindow;
};
























#endif
