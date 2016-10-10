#include "player3d360.h"
#include "ui_player3d360.h"

Player3D360::Player3D360(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Player3D360)
{
    ui->setupUi(this);
}

Player3D360::~Player3D360()
{
    delete ui;
}
