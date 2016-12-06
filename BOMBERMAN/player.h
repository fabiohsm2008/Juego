#ifndef PLAYER_H
#define PLAYER_H
#include <QWidget>
#include <QString>
#include "bomba.h"

class Player : public QWidget
{
public:
    QString rostro;
    int limite;
    Bomba *Mybomb;
    Player();
    void set_rostro(QString s);
};

#endif // PLAYER_H

