#include "game.h"
#include <QApplication>
#include <QMediaPlayer>

int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
    GAME w;
    w.show();

    return a.exec();
}
