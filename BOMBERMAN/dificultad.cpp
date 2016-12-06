#include "dificultad.h"
#include "ui_dificultad.h"
#include <QMediaPlayer>
#include "start.h"
#include "game.h"

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

void Dificultad::on_pushButton_clicked()
{
  Start*Bomber=new Start();
  Bomber->show();

  close();
}

