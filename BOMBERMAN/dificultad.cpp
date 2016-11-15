#include "dificultad.h"
#include "ui_dificultad.h"

Dificultad::Dificultad(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Dificultad)
{
    ui->setupUi(this);
}

Dificultad::~Dificultad()
{
    delete ui;
}
