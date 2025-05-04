#include "openingwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    OpeningWindow w;
    w.show();
    return a.exec();
}
