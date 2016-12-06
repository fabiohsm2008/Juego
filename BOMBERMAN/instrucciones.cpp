#include "instrucciones.h"
#include "ui_instrucciones.h"


Instrucciones::Instrucciones(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Instrucciones)
{
    ui->setupUi(this);
}

Instrucciones::~Instrucciones()
{
    delete ui;
}

void Instrucciones::on_pushButton_clicked()
{
    close();
}
