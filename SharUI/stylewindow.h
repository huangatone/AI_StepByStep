#ifndef STYLEWINDOW_H
#define STYLEWINDOW_H

#include <QMainWindow>

#include <QLabel>
#include "sharui_global.h"


namespace Ui {
class StyleWindow;
}

class SHARUISHARED_EXPORT StyleWindow : public QMainWindow
{
	Q_OBJECT

public:
	explicit StyleWindow(QWidget *parent = 0);
	~StyleWindow();

	void initWidgets(QString str);
	void addSubWindow(QWidget* w);
protected slots:
	void slot_icon_buttun_clicked();
private slots:


	void on_toolButton_8_clicked();

private:
	Ui::StyleWindow *ui;


	//bool eventFilter(QObject *watched, QEvent *event);

};

#endif // STYLEWINDOW_H