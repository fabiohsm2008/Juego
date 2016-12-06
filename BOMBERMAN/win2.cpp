#include "win2.h"
#include "ui_win2.h"

win2::win2(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::win2)
{
    ui->setupUi(this);
}

win2::~win2()
{
    delete ui;
}
