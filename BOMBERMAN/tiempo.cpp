#include "tiempo.h"

Tiempo::Tiempo()
{
    exp = new QTimer(this);
    connect(exp,SIGNAL(timeout()),this,SLOT(explosion(Bomba *b)));
}

void Tiempo::inicio()
{
    exp->start(3000);
}

void Tiempo::explosion(Bomba *b)
{
    b->explosion(b);
}
