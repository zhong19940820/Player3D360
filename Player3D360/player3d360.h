#ifndef PLAYER3D360_H
#define PLAYER3D360_H

#include <QMainWindow>

namespace Ui {
class Player3D360;
}

class Player3D360 : public QMainWindow
{
    Q_OBJECT

public:
    explicit Player3D360(QWidget *parent = 0);
    ~Player3D360();

private:
    Ui::Player3D360 *ui;
};

#endif // PLAYER3D360_H
