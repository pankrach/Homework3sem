#include "simpleOrThreadTrigger.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    simpleOrThreadTrigger w;
    w.show();
    return a.exec();
}
