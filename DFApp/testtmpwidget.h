#ifndef TESTTMPWIDGET_H
#define TESTTMPWIDGET_H
#include <QProcess>
#include <QWidget>
#include "testthread.h"
namespace Ui {
class TestTmpWidget;
}

class TestTmpWidget : public QWidget
{
	Q_OBJECT

public:
	explicit TestTmpWidget(QWidget *parent = 0);
	~TestTmpWidget();
private slots:
	void on_pushButton_clicked();
	void on_toolButton_clicked();
	void on_toolButton_2_clicked();
	void on_pushButton_2_clicked();

	void on_btnProcess_clicked();

	void on_btnKey_clicked();

	void on_btnText_clicked();

	void on_pushButton_3_clicked();

	void on_btnDBClick_clicked();

private:
	Ui::TestTmpWidget *ui;
	TestThread* _test_thread;
	QString _test_img;

	QProcess s;
};

#endif // TESTTMPWIDGET_H
