/********************************************************************************
** Form generated from reading UI file 'dificultad.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIFICULTAD_H
#define UI_DIFICULTAD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dificultad
{
public:
    QLabel *label;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;

    void setupUi(QWidget *Dificultad)
    {
        if (Dificultad->objectName().isEmpty())
            Dificultad->setObjectName(QStringLiteral("Dificultad"));
        Dificultad->resize(874, 651);
        Dificultad->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        label = new QLabel(Dificultad);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(340, 40, 441, 121));
        QFont font;
        font.setFamily(QStringLiteral("MV Boli"));
        font.setPointSize(22);
        label->setFont(font);
        radioButton = new QRadioButton(Dificultad);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setGeometry(QRect(370, 250, 95, 20));
        radioButton_2 = new QRadioButton(Dificultad);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setGeometry(QRect(370, 360, 95, 20));
        radioButton_3 = new QRadioButton(Dificultad);
        radioButton_3->setObjectName(QStringLiteral("radioButton_3"));
        radioButton_3->setGeometry(QRect(370, 490, 95, 20));

        retranslateUi(Dificultad);

        QMetaObject::connectSlotsByName(Dificultad);
    } // setupUi

    void retranslateUi(QWidget *Dificultad)
    {
        Dificultad->setWindowTitle(QApplication::translate("Dificultad", "Form", 0));
        label->setText(QApplication::translate("Dificultad", "Dificultad", 0));
        radioButton->setText(QApplication::translate("Dificultad", "Facil", 0));
        radioButton_2->setText(QApplication::translate("Dificultad", "Medio", 0));
        radioButton_3->setText(QApplication::translate("Dificultad", "Dificil", 0));
    } // retranslateUi

};

namespace Ui {
    class Dificultad: public Ui_Dificultad {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIFICULTAD_H
