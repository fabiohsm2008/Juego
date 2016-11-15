#include "game.h"
#include "ui_game.h"
#include "QString"
#include "instrucciones.h"
#include "dificultad.h"

GAME::GAME(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::GAME)
{
    ui->setupUi(this);
}

GAME::~GAME()
{
    delete ui;
}

void GAME::on_pushButton_3_clicked()
{
    Instrucciones*GAME=new Instrucciones();
    GAME->show();

}

void GAME::on_Start_clicked()
{
    Dificultad*GAME=new Dificultad();
    GAME->show();
    close();
}
