#ifndef WIN_H
#define WIN_H

#include <QMainWindow>

namespace Ui {
class win;
}

class win : public QMainWindow
{
    Q_OBJECT

public:
    explicit win(QWidget *parent = 0);
    ~win();

private:
    Ui::win *ui;
};

#endif // WIN_H
