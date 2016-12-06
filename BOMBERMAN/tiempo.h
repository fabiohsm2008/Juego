#ifndef TIEMPO_H
#define TIEMPO_H
#include <QTimer>
#include "bomba.h"
#include <QObject>

class Tiempo    : public QObject
{
    Q_OBJECT

public:
    Tiempo();
    QTimer *exp;
    void inicio();

public slots:
    void explosion(Bomba *b);
};

#endif // TIEMPO_H
