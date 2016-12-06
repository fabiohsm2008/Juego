#include "bomba.h"
#include "start.h"
#include <QTimer>

Bomba::Bomba()
{
    bomb = "/BOMBERMAN/Camera Roll/bomba.jpg";
    //bomb = "C:/Users/jaime/Documents/BOMBERMAN/Camera Roll/bomba.jpg";
}

void Bomba::set_x(int x)
{
    pos_x = x;
}

void Bomba::set_y(int y)
{
    pos_y = y;
}
