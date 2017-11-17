/********************************************************************************
** Form generated from reading UI file 'PlayerInfo.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLAYERINFO_H
#define UI_PLAYERINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PlayerInfo
{
public:
    QHBoxLayout *horizontalLayout;
    QLabel *turn;
    QLabel *name;
    QLabel *win0;
    QLabel *win1;
    QLabel *win2;
    QLabel *win3;

    void setupUi(QWidget *PlayerInfo)
    {
        if (PlayerInfo->objectName().isEmpty())
            PlayerInfo->setObjectName(QStringLiteral("PlayerInfo"));
        PlayerInfo->resize(215, 36);
        horizontalLayout = new QHBoxLayout(PlayerInfo);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(5, 5, 5, 5);
        turn = new QLabel(PlayerInfo);
        turn->setObjectName(QStringLiteral("turn"));
        turn->setMinimumSize(QSize(25, 25));
        turn->setMaximumSize(QSize(25, 25));
        turn->setScaledContents(true);

        horizontalLayout->addWidget(turn);

        name = new QLabel(PlayerInfo);
        name->setObjectName(QStringLiteral("name"));
        name->setMinimumSize(QSize(80, 26));
        name->setMaximumSize(QSize(80, 25));
        QFont font;
        font.setPointSize(15);
        font.setBold(true);
        font.setWeight(75);
        name->setFont(font);

        horizontalLayout->addWidget(name);

        win0 = new QLabel(PlayerInfo);
        win0->setObjectName(QStringLiteral("win0"));
        win0->setMinimumSize(QSize(25, 25));
        win0->setMaximumSize(QSize(25, 25));
        win0->setPixmap(QPixmap(QString::fromUtf8(":/pawns/empty")));
        win0->setScaledContents(true);

        horizontalLayout->addWidget(win0);

        win1 = new QLabel(PlayerInfo);
        win1->setObjectName(QStringLiteral("win1"));
        win1->setMinimumSize(QSize(25, 25));
        win1->setMaximumSize(QSize(25, 25));
        win1->setPixmap(QPixmap(QString::fromUtf8(":/pawns/empty")));
        win1->setScaledContents(true);

        horizontalLayout->addWidget(win1);

        win2 = new QLabel(PlayerInfo);
        win2->setObjectName(QStringLiteral("win2"));
        win2->setMinimumSize(QSize(25, 25));
        win2->setMaximumSize(QSize(25, 25));
        win2->setPixmap(QPixmap(QString::fromUtf8(":/pawns/empty")));
        win2->setScaledContents(true);

        horizontalLayout->addWidget(win2);

        win3 = new QLabel(PlayerInfo);
        win3->setObjectName(QStringLiteral("win3"));
        win3->setMinimumSize(QSize(25, 25));
        win3->setMaximumSize(QSize(25, 25));
        win3->setPixmap(QPixmap(QString::fromUtf8(":/pawns/empty")));
        win3->setScaledContents(true);

        horizontalLayout->addWidget(win3);


        retranslateUi(PlayerInfo);

        QMetaObject::connectSlotsByName(PlayerInfo);
    } // setupUi

    void retranslateUi(QWidget *PlayerInfo)
    {
        PlayerInfo->setWindowTitle(QApplication::translate("PlayerInfo", "Form", 0));
        name->setText(QApplication::translate("PlayerInfo", "Jogador X:", 0));
    } // retranslateUi

};

namespace Ui {
    class PlayerInfo: public Ui_PlayerInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLAYERINFO_H
