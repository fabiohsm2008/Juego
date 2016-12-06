#ifndef DIFICULTAD_H
#define DIFICULTAD_H
#include "game.h"

#include <QWidget>

namespace Ui {
class Dificultad;
}

class Dificultad : public QWidget
{
    Q_OBJECT

public:
    explicit Dificultad(QWidget *parent = 0);
    ~Dificultad();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Dificultad *ui;
};

#endif // DIFICULTAD_H
