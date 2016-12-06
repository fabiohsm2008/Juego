#ifndef EMPATE_H
#define EMPATE_H

#include <QMainWindow>

namespace Ui {
class empate;
}

class empate : public QMainWindow
{
    Q_OBJECT

public:
    explicit empate(QWidget *parent = 0);
    ~empate();

private:
    Ui::empate *ui;
};

#endif // EMPATE_H
