#include "eldino.h"
#include <QApplication>
#include <string>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    eldino w;
    w.show();

    return a.exec();
}
