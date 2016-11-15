#ifndef GAME_H
#define GAME_H

#include <QMainWindow>

namespace Ui {
class GAME;
}

class GAME : public QMainWindow
{
    Q_OBJECT

public:
    explicit GAME(QWidget *parent = 0);
    ~GAME();

private slots:
    void on_pushButton_3_clicked();

    void on_Start_clicked();

private:
    Ui::GAME *ui;
};

#endif // GAME_H
