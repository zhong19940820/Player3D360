#include "player3d360.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Player3D360 w;
    w.show();

    return a.exec();
}
