#include "Oscillogram.h"
#include <QGraphicsItem>
Oscillogram::Oscillogram(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	setupScene();
}
void Oscillogram::setupScene()
{
	mScene = new QGraphicsScene(this);
	mView = new QGraphicsView(this);
}
void Oscillogram::drawOscillogram(const QString& strS,const QString& strR,const bool& flag) 
{
	delete mScene;
	delete mView;
	mScene = new QGraphicsScene(this);
	mScene->clear();
	ui.listWidget->clear();
	trigger myTrigger;
	myTrigger.setSR(strS.toStdString(), strR.toStdString());
	if (flag==true) {
		myTrigger.threadCount();
		myTrigger.setThreadResult();
		weightOut = 30;
	}
	else {
		myTrigger.simpleCount();
		myTrigger.setSimpleResult();
		weightOut = weightIn;
	}
	resultSimple(myTrigger);
	QSize minSize(650, 360);
	mView = new QGraphicsView(this);
	mView->setMinimumSize(minSize);
	mView->setScene(mScene);
	startY = 0;
	mScene->addSimpleText("S")->setPos(0, startY);
	drawSignal(myTrigger.inputS,weightIn);
	startY = 60;
	mScene->addSimpleText("R")->setPos(0, startY);
	drawSignal(myTrigger.inputR,weightIn);
	startY = 120;
	mScene->addSimpleText("Q")->setPos(0, startY);
	drawSignal(myTrigger.outputQ,weightOut);
	startY = 180;
	mScene->addSimpleText("_Q")->setPos(0, startY);
	drawSignal(myTrigger.output_Q,weightOut);
}
void Oscillogram::resultSimple(trigger& helper)
{
	QString result;
	for (int i = 0; i < helper.SRQ.size(); i++) {
		result = "";
		result+=(helper.SRQ[i]);
		result+=" ";
		for (int j = 0; j < helper.values[i].size(); j++) {
			result += helper.values[i][j];
			result += " ";
		}
		ui.listWidget->addItem(result);
	}
}
void Oscillogram::drawSignal(string& inputT,const int& weight)
{
	coord.first = 10;
	coord.second = startY;
	if (inputT[0] == '0') {
		QLineF line(coord.first, coord.second+height, coord.first + weight, coord.second+height);
		mScene->addLine(line);
		coord.first = coord.first + weight;
		coord.second = coord.second + height;
		mScene->addEllipse(coord.first, coord.second, 3, 3);
	}
	else {
		QLineF line1(coord.first, coord.second - height, coord.first + weight, coord.second - height);
		mScene->addLine(line1);
		coord.first = coord.first + weight;
		coord.second = coord.second - height;
		mScene->addEllipse(coord.first, coord.second, 3, 3);
	}
	for (int i = 1; i < inputT.size(); i++) {
		if (inputT[i - 1] == inputT[i]) {
			QLineF line1(coord.first, coord.second, coord.first + weight, coord.second);
			mScene->addLine(line1);
			coord.first = coord.first + weight;
			mScene->addEllipse(coord.first, coord.second, 3, 3);
		}
		else {
			if (coord.second > startY) {
				QLineF line2(coord.first, coord.second, coord.first , coord.second - 2 * height);
				mScene->addLine(line2);
				coord.second = coord.second - 2 * height;
				mScene->addEllipse(coord.first, coord.second, 3, 3);
			}
			else {
				QLineF line2(coord.first, coord.second, coord.first, coord.second + 2 * height);
				mScene->addLine(line2);
				coord.second = coord.second + 2 * height;
				mScene->addEllipse(coord.first, coord.second, 3, 3);
			}
			QLineF line1(coord.first, coord.second, coord.first + weight, coord.second);
			mScene->addLine(line1);
			coord.first = coord.first + weight;
			mScene->addEllipse(coord.first, coord.second, 3, 3);
		}
	}
}
Oscillogram::~Oscillogram()
{
}