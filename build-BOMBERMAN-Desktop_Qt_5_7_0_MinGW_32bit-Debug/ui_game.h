/********************************************************************************
** Form generated from reading UI file 'game.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAME_H
#define UI_GAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GAME
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QPushButton *Start;
    QLabel *label;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *GAME)
    {
        if (GAME->objectName().isEmpty())
            GAME->setObjectName(QStringLiteral("GAME"));
        GAME->resize(998, 648);
        centralWidget = new QWidget(GAME);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(390, 440, 201, 61));
        QFont font;
        font.setFamily(QStringLiteral("MV Boli"));
        font.setPointSize(10);
        font.setItalic(false);
        pushButton->setFont(font);
        pushButton->setStyleSheet(QStringLiteral("background-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0 rgba(255, 235, 235, 206), stop:0.35 rgba(255, 188, 188, 80), stop:0.4 rgba(255, 162, 162, 80), stop:0.425 rgba(255, 132, 132, 156), stop:0.44 rgba(252, 128, 128, 80), stop:1 rgba(255, 255, 255, 0));"));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(390, 347, 201, 61));
        QFont font1;
        font1.setFamily(QStringLiteral("MV Boli"));
        font1.setPointSize(10);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        pushButton_3->setFont(font1);
        pushButton_3->setAcceptDrops(false);
        pushButton_3->setStyleSheet(QStringLiteral("background-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0 rgba(255, 235, 235, 206), stop:0.35 rgba(255, 188, 188, 80), stop:0.4 rgba(255, 162, 162, 80), stop:0.425 rgba(255, 132, 132, 156), stop:0.44 rgba(252, 128, 128, 80), stop:1 rgba(255, 255, 255, 0));"));
        pushButton_3->setCheckable(false);
        pushButton_3->setAutoExclusive(false);
        Start = new QPushButton(centralWidget);
        Start->setObjectName(QStringLiteral("Start"));
        Start->setGeometry(QRect(390, 257, 201, 61));
        QFont font2;
        font2.setFamily(QStringLiteral("MV Boli"));
        font2.setPointSize(12);
        font2.setBold(false);
        font2.setItalic(false);
        font2.setWeight(50);
        Start->setFont(font2);
        Start->setStyleSheet(QStringLiteral("background-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0 rgba(255, 235, 235, 206), stop:0.35 rgba(255, 188, 188, 80), stop:0.4 rgba(255, 162, 162, 80), stop:0.425 rgba(255, 132, 132, 156), stop:0.44 rgba(252, 128, 128, 80), stop:1 rgba(255, 255, 255, 0));"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 1001, 591));
        label->setStyleSheet(QStringLiteral("background-image: url(:/Camera Roll/bomberman.png);"));
        label->setPixmap(QPixmap(QString::fromUtf8(":/Camera Roll/bomberman.png")));
        label->setScaledContents(true);
        GAME->setCentralWidget(centralWidget);
        label->raise();
        Start->raise();
        pushButton_3->raise();
        pushButton->raise();
        menuBar = new QMenuBar(GAME);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 998, 26));
        GAME->setMenuBar(menuBar);
        mainToolBar = new QToolBar(GAME);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        GAME->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(GAME);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        GAME->setStatusBar(statusBar);

        retranslateUi(GAME);
        QObject::connect(pushButton, SIGNAL(clicked()), GAME, SLOT(close()));

        QMetaObject::connectSlotsByName(GAME);
    } // setupUi

    void retranslateUi(QMainWindow *GAME)
    {
        GAME->setWindowTitle(QApplication::translate("GAME", "GAME", 0));
        pushButton->setText(QApplication::translate("GAME", "Cerrar", 0));
#ifndef QT_NO_TOOLTIP
        pushButton_3->setToolTip(QApplication::translate("GAME", "<html><head/><body><p><span style=\" font-weight:600;\">Instrucciones</span></p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        pushButton_3->setText(QApplication::translate("GAME", "Instrucciones", 0));
        Start->setText(QApplication::translate("GAME", "Start", 0));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class GAME: public Ui_GAME {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAME_H
