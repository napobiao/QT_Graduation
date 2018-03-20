#ifndef OPENWINDOW_H
#define OPENWINDOW_H

#include <QMainWindow>
#include <QDialog>
#include <QWidget>
#include "widget.h"
#include "sort_window.h"
class Open_Window : public QMainWindow
{
	Q_OBJECT
public:
	Open_Window(QWidget *parent = 0);
	~Open_Window();

	void open_slot();

private:
//	QDialog *d_open;
	Sort_Window *sort_window;

};
























#endif
