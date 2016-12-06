#ifndef INSTRUCCIONES_H
#define INSTRUCCIONES_H

#include <QWidget>

namespace Ui {
class Instrucciones;
}

class Instrucciones : public QWidget
{
    Q_OBJECT

public:
    explicit Instrucciones(QWidget *parent = 0);
    ~Instrucciones();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Instrucciones *ui;
};

#endif // INSTRUCCIONES_H
