#include "ludo.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Ludo w;
    w.show();

    return a.exec();
}
