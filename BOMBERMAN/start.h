#ifndef START_H
#define START_H

#include <QWidget>
#include <QKeyEvent>
#include "bomba.h"
#include <QLabel>
#include "empate.h"

namespace Ui {
class Start;
}

class Start : public QWidget
{
    Q_OBJECT

public:
    explicit Start(QWidget *parent = 0);
    ~Start();

private:
    Ui::Start *ui;
    void crear_entorno();
    QVector <QVector <QLabel*>> matriz;
    void keyPressEvent(QKeyEvent* event);
    void crear_bloques();
    void colision_j1();
    void colision_j2();
private slots:
    void explosion_j1();
    void explosion_j2();
    void empate__();
    void ganador1();
    void ganador2();
    void fuego__();
    void fuego__1();

};

#endif // START_H
