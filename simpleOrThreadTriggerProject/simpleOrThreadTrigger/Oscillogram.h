#include <QWidget>
#include "ui_Oscillogram.h"
#include <QMainWindow>
#include <qgraphicsview.h>
#include "trigger.h"
#include <memory.h>
namespace Ui {
	class Oscillogram;
}
class Oscillogram : public QMainWindow
{
	Q_OBJECT

public:
	Oscillogram(QWidget *parent = Q_NULLPTR);
	void setupScene();
	void resultSimple(trigger&);
	void drawSignal(string&, const int&);
	~Oscillogram();

	
	pair<int, int> coord;
	const int height = 20;
	const int weightIn=50;
	int weightOut;
	int startY;
public slots:
	void drawOscillogram(const QString&,const QString&, const bool&);
private:
	Ui::Oscillogram ui;
	QGraphicsScene* mScene;
	QGraphicsView* mView;
};
