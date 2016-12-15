#include "simpleOrThreadTrigger.h"
#include <qlineedit.h>
#include <qmessagebox.h>

using namespace std;

simpleOrThreadTrigger::simpleOrThreadTrigger(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	mOsc = new Oscillogram();
	connect(this, SIGNAL(valuesSR(QString,QString,bool)), mOsc, SLOT(drawOscillogram(QString,QString,bool)));
}
void simpleOrThreadTrigger::on_pushButton_clicked()
{
	QString valS = ui.lineEdit->text();
	QString valR = ui.lineEdit_2->text();
	string strS = valS.toStdString();
	string strR = valR.toStdString();
	if (checkLineAndRadio(strS, strR)) {
		if (ui.radioButton->isChecked())
			emit valuesSR(valS, valR, true);
		if (ui.radioButton_2->isChecked())
			emit valuesSR(valS, valR, false);
		mOsc->show();
	}
}
void simpleOrThreadTrigger::checkSize(string& strS, string& strR)
{
	if (strS.size() != strR.size())
		throw runtime_error("Vestor values S != vector values R");
	if (strS.size()< 3)
		throw runtime_error("Short vestor values");
}
void simpleOrThreadTrigger::checkSimbols(string& strS, string& strR)
{
	for (auto i : strS) 
		if ((i != '0') && (i != '1'))
			throw runtime_error("Wrong simbols detected");
	for (auto i : strR)
		if ((i != '0') && (i != '1'))
			throw runtime_error("Wrong simbols detected");
}
void simpleOrThreadTrigger::checkRadio(string& strS, string& strR)
{
		if (!(ui.radioButton->isChecked()) && !(ui.radioButton_2->isChecked()))
			throw runtime_error("Not selected method");
}
bool simpleOrThreadTrigger::checkLineAndRadio(string& strS, string& strR) {
	bool ret = true;
	try
	{
		checkSimbols(strS, strR);
		checkSize(strS, strR);
		checkRadio(strS, strR);
	}
	catch (runtime_error& ec)
	{
		QMessageBox* pmb = new QMessageBox(QMessageBox::Information, "Error entering function", ec.what());
		pmb->exec();
		delete pmb;
		ret = false;
	}
	return ret;
}