
#include "digdisgui.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    DigDisGUI w;
    w.show();
    return a.exec();
}
