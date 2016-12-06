#include "win.h"
#include "ui_win.h"

win::win(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::win)
{
    ui->setupUi(this);
}

win::~win()
{
    delete ui;
}
