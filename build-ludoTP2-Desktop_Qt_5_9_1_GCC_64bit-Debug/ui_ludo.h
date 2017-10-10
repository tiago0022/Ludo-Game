/********************************************************************************
** Form generated from reading UI file 'ludo.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LUDO_H
#define UI_LUDO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>
#include <home.h>

QT_BEGIN_NAMESPACE

class Ui_Ludo
{
public:
    QWidget *centralWidget;
    Home *widget;
    QMenuBar *menuBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Ludo)
    {
        if (Ludo->objectName().isEmpty())
            Ludo->setObjectName(QStringLiteral("Ludo"));
        Ludo->resize(508, 397);
        centralWidget = new QWidget(Ludo);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        widget = new Home(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(110, 80, 150, 150));
        widget->setMinimumSize(QSize(150, 150));
        widget->setMaximumSize(QSize(150, 150));
        Ludo->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Ludo);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 508, 22));
        Ludo->setMenuBar(menuBar);
        statusBar = new QStatusBar(Ludo);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Ludo->setStatusBar(statusBar);

        retranslateUi(Ludo);

        QMetaObject::connectSlotsByName(Ludo);
    } // setupUi

    void retranslateUi(QMainWindow *Ludo)
    {
        Ludo->setWindowTitle(QApplication::translate("Ludo", "Ludo", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Ludo: public Ui_Ludo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LUDO_H
