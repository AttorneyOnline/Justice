#include "justiceapp.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    JusticeApp w;
    w.show();
    return a.exec();
}
