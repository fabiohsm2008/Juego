#include "empate.h"
#include "ui_empate.h"

empate::empate(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::empate)
{
    ui->setupUi(this);
}

empate::~empate()
{
    delete ui;
}
