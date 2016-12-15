#include <QMainWindow>
#include "ui_simpleOrThreadTrigger.h"
#include "Oscillogram.h"
namespace Ui {
	class simpleOrThreadTrigger;
}
class QLineEdit;
class QPushButton;
class simpleOrThreadTrigger : public QMainWindow
{
    Q_OBJECT

public:
    simpleOrThreadTrigger(QWidget *parent = Q_NULLPTR);
	bool checkLineAndRadio(string&, string&);
	void checkSimbols(string&, string&);
	void checkSize(string&, string&);
	void checkRadio(string&, string&);
private:
    Ui::simpleOrThreadTriggerClass ui;
	Oscillogram* mOsc;
public slots:
	void on_pushButton_clicked();
signals:
	void valuesSR(const QString&, const QString&, const bool&);
};
