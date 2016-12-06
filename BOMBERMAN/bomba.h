#ifndef BOMBA_H
#define BOMBA_H
#include <QString>
#include <QWidget>

class Bomba : public QWidget
{
public:
    QString bomb;
    QTimer *fuego_tiempo;
    QTimer *my_tiempo;
    int pos_x;
    int pos_y;
    Bomba();
    void set_x(int y);
    void set_y(int y);

};

#endif // BOMBA_H
