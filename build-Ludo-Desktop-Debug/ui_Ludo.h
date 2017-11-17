/********************************************************************************
** Form generated from reading UI file 'Ludo.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LUDO_H
#define UI_LUDO_H

#include <Dice.h>
#include <Home.h>
#include <PlayerInfo.h>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <Tile.h>

QT_BEGIN_NAMESPACE

class Ui_Ludo
{
public:
    QAction *actionNovo;
    QAction *actionSair;
    QAction *actionSobre;
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QWidget *widget_3;
    Home *bluehome;
    QGridLayout *gridLayout;
    Tile *tile50;
    Tile *tile51;
    Tile *tile0;
    Tile *tile49;
    QPushButton *redrun0;
    Tile *tile1;
    Tile *tile48;
    QPushButton *redrun1;
    Tile *tile2;
    Tile *tile47;
    QPushButton *redrun2;
    Tile *tile3;
    Tile *tile46;
    QPushButton *redrun3;
    Tile *tile4;
    Tile *tile45;
    QPushButton *redrun4;
    Tile *tile5;
    QWidget *widget_2;
    Home *redhome;
    QHBoxLayout *horizontalLayout_2;
    QGridLayout *gridLayout_3;
    Tile *tile39;
    Tile *tile40;
    Tile *tile41;
    Tile *tile42;
    Tile *tile43;
    Tile *tile44;
    Tile *tile38;
    QPushButton *bluerun0;
    QPushButton *bluerun1;
    QPushButton *bluerun2;
    QPushButton *bluerun3;
    QPushButton *bluerun4;
    Tile *tile37;
    Tile *tile36;
    Tile *tile35;
    Tile *tile34;
    Tile *tile33;
    Tile *tile32;
    QLabel *label;
    QGridLayout *gridLayout_4;
    Tile *tile6;
    Tile *tile7;
    Tile *tile8;
    Tile *tile9;
    Tile *tile10;
    Tile *tile11;
    QPushButton *greenrun4;
    QPushButton *greenrun3;
    QPushButton *greenrun2;
    QPushButton *greenrun1;
    QPushButton *greenrun0;
    Tile *tile12;
    Tile *tile18;
    Tile *tile17;
    Tile *tile16;
    Tile *tile15;
    Tile *tile14;
    Tile *tile13;
    QHBoxLayout *horizontalLayout_3;
    QWidget *widget_6;
    Home *yellowhome;
    QGridLayout *gridLayout_2;
    Tile *tile31;
    QPushButton *yellowrun4;
    Tile *tile19;
    Tile *tile30;
    QPushButton *yellowrun3;
    Tile *tile20;
    Tile *tile29;
    QPushButton *yellowrun2;
    Tile *tile21;
    Tile *tile28;
    QPushButton *yellowrun1;
    Tile *tile22;
    Tile *tile27;
    QPushButton *yellorun0;
    Tile *tile23;
    Tile *tile26;
    Tile *tile25;
    Tile *tile24;
    QWidget *widget_8;
    Home *greenhome;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer;
    Dice *dice;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_2;
    PlayerInfo *player1;
    PlayerInfo *player2;
    PlayerInfo *player3;
    PlayerInfo *player4;
    QSpacerItem *verticalSpacer_3;
    QMenuBar *menuBar;
    QMenu *menuJogo;
    QMenu *menuAjuda;

    void setupUi(QMainWindow *Ludo)
    {
        if (Ludo->objectName().isEmpty())
            Ludo->setObjectName(QStringLiteral("Ludo"));
        Ludo->resize(620, 411);
        actionNovo = new QAction(Ludo);
        actionNovo->setObjectName(QStringLiteral("actionNovo"));
        actionSair = new QAction(Ludo);
        actionSair->setObjectName(QStringLiteral("actionSair"));
        actionSobre = new QAction(Ludo);
        actionSobre->setObjectName(QStringLiteral("actionSobre"));
        centralWidget = new QWidget(Ludo);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayout_5 = new QHBoxLayout(centralWidget);
        horizontalLayout_5->setSpacing(10);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 10, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        widget_3 = new QWidget(centralWidget);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        widget_3->setMinimumSize(QSize(150, 150));
        widget_3->setMaximumSize(QSize(150, 150));
        widget_3->setStyleSheet(QStringLiteral("background-color: #3333ff;"));
        bluehome = new Home(widget_3);
        bluehome->setObjectName(QStringLiteral("bluehome"));
        bluehome->setGeometry(QRect(0, 0, 150, 150));
        bluehome->setMinimumSize(QSize(150, 150));
        bluehome->setMaximumSize(QSize(150, 150));

        horizontalLayout->addWidget(widget_3);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        tile50 = new Tile(centralWidget);
        tile50->setObjectName(QStringLiteral("tile50"));
        tile50->setMinimumSize(QSize(25, 25));
        tile50->setMaximumSize(QSize(25, 25));
        tile50->setStyleSheet(QLatin1String("border-width: 1px 1px 1px 0px;\n"
"border-style: solid;\n"
"border-color: black;\n"
"background-color: white;"));
        tile50->setIconSize(QSize(20, 20));
        tile50->setFlat(true);

        gridLayout->addWidget(tile50, 0, 0, 1, 1);

        tile51 = new Tile(centralWidget);
        tile51->setObjectName(QStringLiteral("tile51"));
        tile51->setMinimumSize(QSize(25, 25));
        tile51->setMaximumSize(QSize(25, 25));
        tile51->setStyleSheet(QLatin1String("border-width: 1px 0px 1px 0px;\n"
"border-style: solid;\n"
"border-color: black;\n"
"background-color: white;"));
        tile51->setIconSize(QSize(20, 20));
        tile51->setFlat(true);

        gridLayout->addWidget(tile51, 0, 1, 1, 1);

        tile0 = new Tile(centralWidget);
        tile0->setObjectName(QStringLiteral("tile0"));
        tile0->setMinimumSize(QSize(25, 25));
        tile0->setMaximumSize(QSize(25, 25));
        tile0->setStyleSheet(QLatin1String("border-width: 1px 0px 1px 1px;\n"
"border-style: solid;\n"
"border-color: black;\n"
"background-color: white;"));
        tile0->setIconSize(QSize(20, 20));
        tile0->setFlat(true);

        gridLayout->addWidget(tile0, 0, 2, 1, 1);

        tile49 = new Tile(centralWidget);
        tile49->setObjectName(QStringLiteral("tile49"));
        tile49->setMinimumSize(QSize(25, 25));
        tile49->setMaximumSize(QSize(25, 25));
        tile49->setStyleSheet(QLatin1String("border-width: 0px 1px 1px 0px;\n"
"border-style: solid;\n"
"border-color: black;\n"
"background-color: white;"));
        tile49->setIconSize(QSize(20, 20));
        tile49->setFlat(true);

        gridLayout->addWidget(tile49, 1, 0, 1, 1);

        redrun0 = new QPushButton(centralWidget);
        redrun0->setObjectName(QStringLiteral("redrun0"));
        redrun0->setMinimumSize(QSize(25, 25));
        redrun0->setMaximumSize(QSize(25, 25));
        redrun0->setStyleSheet(QLatin1String("border-width: 0px 0px 1px 0px;\n"
"border-style: solid;\n"
"border-color: black;\n"
"background-color: #ff3333;"));
        redrun0->setIconSize(QSize(20, 20));
        redrun0->setFlat(true);

        gridLayout->addWidget(redrun0, 1, 1, 1, 1);

        tile1 = new Tile(centralWidget);
        tile1->setObjectName(QStringLiteral("tile1"));
        tile1->setMinimumSize(QSize(25, 25));
        tile1->setMaximumSize(QSize(25, 25));
        tile1->setStyleSheet(QLatin1String("border-width: 0px 0px 1px 1px;\n"
"border-style: solid;\n"
"border-color: black;\n"
"background-color: #ff3333;"));
        tile1->setIconSize(QSize(20, 20));
        tile1->setFlat(true);
        tile1->setProperty("safe", QVariant(true));

        gridLayout->addWidget(tile1, 1, 2, 1, 1);

        tile48 = new Tile(centralWidget);
        tile48->setObjectName(QStringLiteral("tile48"));
        tile48->setMinimumSize(QSize(25, 25));
        tile48->setMaximumSize(QSize(25, 25));
        tile48->setStyleSheet(QLatin1String("border-width: 0px 1px 1px 0px;\n"
"border-style: solid;\n"
"border-color: black;\n"
"background-color: white;"));
        tile48->setIconSize(QSize(20, 20));
        tile48->setFlat(true);

        gridLayout->addWidget(tile48, 2, 0, 1, 1);

        redrun1 = new QPushButton(centralWidget);
        redrun1->setObjectName(QStringLiteral("redrun1"));
        redrun1->setMinimumSize(QSize(25, 25));
        redrun1->setMaximumSize(QSize(25, 25));
        redrun1->setStyleSheet(QLatin1String("border-width: 0px 0px 1px 0px;\n"
"border-style: solid;\n"
"border-color: black;\n"
"background-color: #ff3333;"));
        redrun1->setIconSize(QSize(20, 20));
        redrun1->setFlat(true);

        gridLayout->addWidget(redrun1, 2, 1, 1, 1);

        tile2 = new Tile(centralWidget);
        tile2->setObjectName(QStringLiteral("tile2"));
        tile2->setMinimumSize(QSize(25, 25));
        tile2->setMaximumSize(QSize(25, 25));
        tile2->setStyleSheet(QLatin1String("border-width: 0px 0px 1px 1px;\n"
"border-style: solid;\n"
"border-color: black;\n"
"background-color: white;"));
        tile2->setIconSize(QSize(20, 20));
        tile2->setFlat(true);

        gridLayout->addWidget(tile2, 2, 2, 1, 1);

        tile47 = new Tile(centralWidget);
        tile47->setObjectName(QStringLiteral("tile47"));
        tile47->setMinimumSize(QSize(25, 25));
        tile47->setMaximumSize(QSize(25, 25));
        tile47->setStyleSheet(QLatin1String("border-width: 0px 1px 1px 0px;\n"
"border-style: solid;\n"
"border-color: black;\n"
"background-color: white;"));
        tile47->setIconSize(QSize(20, 20));
        tile47->setFlat(true);

        gridLayout->addWidget(tile47, 3, 0, 1, 1);

        redrun2 = new QPushButton(centralWidget);
        redrun2->setObjectName(QStringLiteral("redrun2"));
        redrun2->setMinimumSize(QSize(25, 25));
        redrun2->setMaximumSize(QSize(25, 25));
        redrun2->setStyleSheet(QLatin1String("border-width: 0px 0px 1px 0px;\n"
"border-style: solid;\n"
"border-color: black;\n"
"background-color: #ff3333;"));
        redrun2->setIconSize(QSize(20, 20));
        redrun2->setFlat(true);

        gridLayout->addWidget(redrun2, 3, 1, 1, 1);

        tile3 = new Tile(centralWidget);
        tile3->setObjectName(QStringLiteral("tile3"));
        tile3->setMinimumSize(QSize(25, 25));
        tile3->setMaximumSize(QSize(25, 25));
        tile3->setStyleSheet(QLatin1String("border-width: 0px 0px 1px 1px;\n"
"border-style: solid;\n"
"border-color: black;\n"
"background-color: white;"));
        tile3->setIconSize(QSize(20, 20));
        tile3->setFlat(true);

        gridLayout->addWidget(tile3, 3, 2, 1, 1);

        tile46 = new Tile(centralWidget);
        tile46->setObjectName(QStringLiteral("tile46"));
        tile46->setMinimumSize(QSize(25, 25));
        tile46->setMaximumSize(QSize(25, 25));
        tile46->setStyleSheet(QLatin1String("border-width: 0px 1px 0px 0px;\n"
"border-style: solid;\n"
"border-color: black;\n"
"background-color: white;"));
        tile46->setIconSize(QSize(20, 20));
        tile46->setFlat(true);

        gridLayout->addWidget(tile46, 4, 0, 1, 1);

        redrun3 = new QPushButton(centralWidget);
        redrun3->setObjectName(QStringLiteral("redrun3"));
        redrun3->setMinimumSize(QSize(25, 25));
        redrun3->setMaximumSize(QSize(25, 25));
        redrun3->setStyleSheet(QLatin1String("border-width: 0px 0px 0px 0px;\n"
"border-style: solid;\n"
"border-color: black;\n"
"background-color: #ff3333;"));
        redrun3->setIconSize(QSize(20, 20));
        redrun3->setFlat(true);

        gridLayout->addWidget(redrun3, 4, 1, 1, 1);

        tile4 = new Tile(centralWidget);
        tile4->setObjectName(QStringLiteral("tile4"));
        tile4->setMinimumSize(QSize(25, 25));
        tile4->setMaximumSize(QSize(25, 25));
        tile4->setStyleSheet(QLatin1String("border-width: 0px 0px 0px 1px;\n"
"border-style: solid;\n"
"border-color: black;\n"
"background-color: white;"));
        tile4->setIconSize(QSize(20, 20));
        tile4->setFlat(true);

        gridLayout->addWidget(tile4, 4, 2, 1, 1);

        tile45 = new Tile(centralWidget);
        tile45->setObjectName(QStringLiteral("tile45"));
        tile45->setMinimumSize(QSize(25, 25));
        tile45->setMaximumSize(QSize(25, 25));
        tile45->setStyleSheet(QLatin1String("border-width: 1px 1px 1px 0px;\n"
"border-style: solid;\n"
"border-color: black;\n"
"background-color: white;"));
        tile45->setIconSize(QSize(20, 20));
        tile45->setFlat(true);

        gridLayout->addWidget(tile45, 5, 0, 1, 1);

        redrun4 = new QPushButton(centralWidget);
        redrun4->setObjectName(QStringLiteral("redrun4"));
        redrun4->setMinimumSize(QSize(25, 25));
        redrun4->setMaximumSize(QSize(25, 25));
        redrun4->setStyleSheet(QLatin1String("border-width: 1px 0px 1px 0px;\n"
"border-style: solid;\n"
"border-color: black;\n"
"background-color: #ff3333;"));
        redrun4->setIconSize(QSize(20, 20));
        redrun4->setFlat(true);

        gridLayout->addWidget(redrun4, 5, 1, 1, 1);

        tile5 = new Tile(centralWidget);
        tile5->setObjectName(QStringLiteral("tile5"));
        tile5->setMinimumSize(QSize(25, 25));
        tile5->setMaximumSize(QSize(25, 25));
        tile5->setStyleSheet(QLatin1String("border-width: 1px 0px 1px 1px;\n"
"border-style: solid;\n"
"border-color: black;\n"
"background-color: white;"));
        tile5->setIconSize(QSize(20, 20));
        tile5->setFlat(true);

        gridLayout->addWidget(tile5, 5, 2, 1, 1);


        horizontalLayout->addLayout(gridLayout);

        widget_2 = new QWidget(centralWidget);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setMinimumSize(QSize(150, 150));
        widget_2->setMaximumSize(QSize(150, 150));
        widget_2->setStyleSheet(QStringLiteral("background-color: #ff3333;"));
        redhome = new Home(widget_2);
        redhome->setObjectName(QStringLiteral("redhome"));
        redhome->setGeometry(QRect(0, 0, 150, 150));
        redhome->setMinimumSize(QSize(150, 150));
        redhome->setMaximumSize(QSize(150, 150));

        horizontalLayout->addWidget(widget_2);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(0);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        tile39 = new Tile(centralWidget);
        tile39->setObjectName(QStringLiteral("tile39"));
        tile39->setMinimumSize(QSize(25, 25));
        tile39->setMaximumSize(QSize(25, 25));
        tile39->setStyleSheet(QLatin1String("border-width: 0px 1px 1px 1px;\n"
"border-style: solid;\n"
"border-color: black;\n"
"background-color: white;"));
        tile39->setIconSize(QSize(20, 20));
        tile39->setFlat(true);

        gridLayout_3->addWidget(tile39, 0, 0, 1, 1);

        tile40 = new Tile(centralWidget);
        tile40->setObjectName(QStringLiteral("tile40"));
        tile40->setMinimumSize(QSize(25, 25));
        tile40->setMaximumSize(QSize(25, 25));
        tile40->setStyleSheet(QLatin1String("border-width: 0px 1px 1px 0px;\n"
"border-style: solid;\n"
"border-color: black;\n"
"background-color: #3333ff;"));
        tile40->setIconSize(QSize(20, 20));
        tile40->setFlat(true);
        tile40->setProperty("safe", QVariant(true));

        gridLayout_3->addWidget(tile40, 0, 1, 1, 1);

        tile41 = new Tile(centralWidget);
        tile41->setObjectName(QStringLiteral("tile41"));
        tile41->setMinimumSize(QSize(25, 25));
        tile41->setMaximumSize(QSize(25, 25));
        tile41->setStyleSheet(QLatin1String("border-width: 0px 1px 1px 0px;\n"
"border-style: solid;\n"
"border-color: black;\n"
"background-color: white;"));
        tile41->setIconSize(QSize(20, 20));
        tile41->setFlat(true);

        gridLayout_3->addWidget(tile41, 0, 2, 1, 1);

        tile42 = new Tile(centralWidget);
        tile42->setObjectName(QStringLiteral("tile42"));
        tile42->setMinimumSize(QSize(25, 25));
        tile42->setMaximumSize(QSize(25, 25));
        tile42->setStyleSheet(QLatin1String("border-width: 0px 1px 1px 0px;\n"
"border-style: solid;\n"
"border-color: black;\n"
"background-color: white;"));
        tile42->setIconSize(QSize(20, 20));
        tile42->setFlat(true);

        gridLayout_3->addWidget(tile42, 0, 3, 1, 1);

        tile43 = new Tile(centralWidget);
        tile43->setObjectName(QStringLiteral("tile43"));
        tile43->setMinimumSize(QSize(25, 25));
        tile43->setMaximumSize(QSize(25, 25));
        tile43->setStyleSheet(QLatin1String("border-width: 0px 0px 1px 0px;\n"
"border-style: solid;\n"
"border-color: black;\n"
"background-color: white;"));
        tile43->setIconSize(QSize(20, 20));
        tile43->setFlat(true);

        gridLayout_3->addWidget(tile43, 0, 4, 1, 1);

        tile44 = new Tile(centralWidget);
        tile44->setObjectName(QStringLiteral("tile44"));
        tile44->setMinimumSize(QSize(25, 25));
        tile44->setMaximumSize(QSize(25, 25));
        tile44->setStyleSheet(QLatin1String("border-width: 0px 1px 1px 1px;\n"
"border-style: solid;\n"
"border-color: black;\n"
"background-color: white;"));
        tile44->setIconSize(QSize(20, 20));
        tile44->setFlat(true);

        gridLayout_3->addWidget(tile44, 0, 5, 1, 1);

        tile38 = new Tile(centralWidget);
        tile38->setObjectName(QStringLiteral("tile38"));
        tile38->setMinimumSize(QSize(25, 25));
        tile38->setMaximumSize(QSize(25, 25));
        tile38->setStyleSheet(QLatin1String("border-width: 0px 1px 0px 1px;\n"
"border-style: solid;\n"
"border-color: black;\n"
"background-color: white;"));
        tile38->setIconSize(QSize(20, 20));
        tile38->setFlat(true);

        gridLayout_3->addWidget(tile38, 1, 0, 1, 1);

        bluerun0 = new QPushButton(centralWidget);
        bluerun0->setObjectName(QStringLiteral("bluerun0"));
        bluerun0->setMinimumSize(QSize(25, 25));
        bluerun0->setMaximumSize(QSize(25, 25));
        bluerun0->setStyleSheet(QLatin1String("border-width: 0px 1px 0px 0px;\n"
"border-style: solid;\n"
"border-color: black;\n"
"background-color: #3333ff;"));
        bluerun0->setIconSize(QSize(20, 20));
        bluerun0->setFlat(true);

        gridLayout_3->addWidget(bluerun0, 1, 1, 1, 1);

        bluerun1 = new QPushButton(centralWidget);
        bluerun1->setObjectName(QStringLiteral("bluerun1"));
        bluerun1->setMinimumSize(QSize(25, 25));
        bluerun1->setMaximumSize(QSize(25, 25));
        bluerun1->setStyleSheet(QLatin1String("border-width: 0px 1px 0px 0px;\n"
"border-style: solid;\n"
"border-color: black;\n"
"background-color: #3333ff;"));
        bluerun1->setIconSize(QSize(20, 20));
        bluerun1->setFlat(true);

        gridLayout_3->addWidget(bluerun1, 1, 2, 1, 1);

        bluerun2 = new QPushButton(centralWidget);
        bluerun2->setObjectName(QStringLiteral("bluerun2"));
        bluerun2->setMinimumSize(QSize(25, 25));
        bluerun2->setMaximumSize(QSize(25, 25));
        bluerun2->setStyleSheet(QLatin1String("border-width: 0px 1px 0px 0px;\n"
"border-style: solid;\n"
"border-color: black;\n"
"background-color: #3333ff;"));
        bluerun2->setIconSize(QSize(20, 20));
        bluerun2->setFlat(true);

        gridLayout_3->addWidget(bluerun2, 1, 3, 1, 1);

        bluerun3 = new QPushButton(centralWidget);
        bluerun3->setObjectName(QStringLiteral("bluerun3"));
        bluerun3->setMinimumSize(QSize(25, 25));
        bluerun3->setMaximumSize(QSize(25, 25));
        bluerun3->setStyleSheet(QLatin1String("border-width: 0px 0px 0px 0px;\n"
"border-style: solid;\n"
"border-color: black;\n"
"background-color: #3333ff;"));
        bluerun3->setIconSize(QSize(20, 20));
        bluerun3->setFlat(true);

        gridLayout_3->addWidget(bluerun3, 1, 4, 1, 1);

        bluerun4 = new QPushButton(centralWidget);
        bluerun4->setObjectName(QStringLiteral("bluerun4"));
        bluerun4->setMinimumSize(QSize(25, 25));
        bluerun4->setMaximumSize(QSize(25, 25));
        bluerun4->setStyleSheet(QLatin1String("border-width: 0px 1px 0px 1px;\n"
"border-style: solid;\n"
"border-color: black;\n"
"background-color: #3333ff;"));
        bluerun4->setIconSize(QSize(20, 20));
        bluerun4->setFlat(true);

        gridLayout_3->addWidget(bluerun4, 1, 5, 1, 1);

        tile37 = new Tile(centralWidget);
        tile37->setObjectName(QStringLiteral("tile37"));
        tile37->setMinimumSize(QSize(25, 25));
        tile37->setMaximumSize(QSize(25, 25));
        tile37->setStyleSheet(QLatin1String("border-width: 1px 1px 0px 1px;\n"
"border-style: solid;\n"
"border-color: black;\n"
"background-color: white;"));
        tile37->setIconSize(QSize(20, 20));
        tile37->setFlat(true);

        gridLayout_3->addWidget(tile37, 2, 0, 1, 1);

        tile36 = new Tile(centralWidget);
        tile36->setObjectName(QStringLiteral("tile36"));
        tile36->setMinimumSize(QSize(25, 25));
        tile36->setMaximumSize(QSize(25, 25));
        tile36->setStyleSheet(QLatin1String("border-width: 1px 1px 0px 0px;\n"
"border-style: solid;\n"
"border-color: black;\n"
"background-color: white;"));
        tile36->setIconSize(QSize(20, 20));
        tile36->setFlat(true);

        gridLayout_3->addWidget(tile36, 2, 1, 1, 1);

        tile35 = new Tile(centralWidget);
        tile35->setObjectName(QStringLiteral("tile35"));
        tile35->setMinimumSize(QSize(25, 25));
        tile35->setMaximumSize(QSize(25, 25));
        tile35->setStyleSheet(QLatin1String("border-width: 1px 1px 0px 0px;\n"
"border-style: solid;\n"
"border-color: black;\n"
"background-color: white;"));
        tile35->setIconSize(QSize(20, 20));
        tile35->setFlat(true);

        gridLayout_3->addWidget(tile35, 2, 2, 1, 1);

        tile34 = new Tile(centralWidget);
        tile34->setObjectName(QStringLiteral("tile34"));
        tile34->setMinimumSize(QSize(25, 25));
        tile34->setMaximumSize(QSize(25, 25));
        tile34->setStyleSheet(QLatin1String("border-width: 1px 1px 0px 0px;\n"
"border-style: solid;\n"
"border-color: black;\n"
"background-color: white;"));
        tile34->setIconSize(QSize(20, 20));
        tile34->setFlat(true);

        gridLayout_3->addWidget(tile34, 2, 3, 1, 1);

        tile33 = new Tile(centralWidget);
        tile33->setObjectName(QStringLiteral("tile33"));
        tile33->setMinimumSize(QSize(25, 25));
        tile33->setMaximumSize(QSize(25, 25));
        tile33->setStyleSheet(QLatin1String("border-width: 1px 0px 0px 0px;\n"
"border-style: solid;\n"
"border-color: black;\n"
"background-color: white;"));
        tile33->setIconSize(QSize(20, 20));
        tile33->setFlat(true);

        gridLayout_3->addWidget(tile33, 2, 4, 1, 1);

        tile32 = new Tile(centralWidget);
        tile32->setObjectName(QStringLiteral("tile32"));
        tile32->setMinimumSize(QSize(25, 25));
        tile32->setMaximumSize(QSize(25, 25));
        tile32->setStyleSheet(QLatin1String("border-width: 1px 1px 0px 1px;\n"
"border-style: solid;\n"
"border-color: black;\n"
"background-color: white;"));
        tile32->setIconSize(QSize(20, 20));
        tile32->setFlat(true);

        gridLayout_3->addWidget(tile32, 2, 5, 1, 1);


        horizontalLayout_2->addLayout(gridLayout_3);

        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(75, 75));
        label->setMaximumSize(QSize(75, 75));
        label->setStyleSheet(QLatin1String("border-width: 37px 37px 38px 38px;\n"
"border-style: solid;\n"
"border-color: #ff3333 #33ff33 #ffff33 #3333ff;\n"
"width: 75px;\n"
"height: 75px;\n"
""));

        horizontalLayout_2->addWidget(label);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setSpacing(0);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        tile6 = new Tile(centralWidget);
        tile6->setObjectName(QStringLiteral("tile6"));
        tile6->setMinimumSize(QSize(25, 25));
        tile6->setMaximumSize(QSize(25, 25));
        tile6->setStyleSheet(QLatin1String("border-width: 0px 1px 1px 1px;\n"
"border-style: solid;\n"
"border-color: black;\n"
"background-color: white;"));
        tile6->setIconSize(QSize(20, 20));
        tile6->setFlat(true);

        gridLayout_4->addWidget(tile6, 0, 0, 1, 1);

        tile7 = new Tile(centralWidget);
        tile7->setObjectName(QStringLiteral("tile7"));
        tile7->setMinimumSize(QSize(25, 25));
        tile7->setMaximumSize(QSize(25, 25));
        tile7->setStyleSheet(QLatin1String("border-width: 0px 1px 1px 0px;\n"
"border-style: solid;\n"
"border-color: black;\n"
"background-color: white;"));
        tile7->setIconSize(QSize(20, 20));
        tile7->setFlat(true);

        gridLayout_4->addWidget(tile7, 0, 1, 1, 1);

        tile8 = new Tile(centralWidget);
        tile8->setObjectName(QStringLiteral("tile8"));
        tile8->setMinimumSize(QSize(25, 25));
        tile8->setMaximumSize(QSize(25, 25));
        tile8->setStyleSheet(QLatin1String("border-width: 0px 1px 1px 0px;\n"
"border-style: solid;\n"
"border-color: black;\n"
"background-color: white;"));
        tile8->setIconSize(QSize(20, 20));
        tile8->setFlat(true);

        gridLayout_4->addWidget(tile8, 0, 2, 1, 1);

        tile9 = new Tile(centralWidget);
        tile9->setObjectName(QStringLiteral("tile9"));
        tile9->setMinimumSize(QSize(25, 25));
        tile9->setMaximumSize(QSize(25, 25));
        tile9->setStyleSheet(QLatin1String("border-width: 0px 1px 1px 0px;\n"
"border-style: solid;\n"
"border-color: black;\n"
"background-color: white;"));
        tile9->setIconSize(QSize(20, 20));
        tile9->setFlat(true);

        gridLayout_4->addWidget(tile9, 0, 3, 1, 1);

        tile10 = new Tile(centralWidget);
        tile10->setObjectName(QStringLiteral("tile10"));
        tile10->setMinimumSize(QSize(25, 25));
        tile10->setMaximumSize(QSize(25, 25));
        tile10->setStyleSheet(QLatin1String("border-width: 0px 0px 1px 0px;\n"
"border-style: solid;\n"
"border-color: black;\n"
"background-color: white;"));
        tile10->setIconSize(QSize(20, 20));
        tile10->setFlat(true);

        gridLayout_4->addWidget(tile10, 0, 4, 1, 1);

        tile11 = new Tile(centralWidget);
        tile11->setObjectName(QStringLiteral("tile11"));
        tile11->setMinimumSize(QSize(25, 25));
        tile11->setMaximumSize(QSize(25, 25));
        tile11->setStyleSheet(QLatin1String("border-width: 0px 1px 1px 1px;\n"
"border-style: solid;\n"
"border-color: black;\n"
"background-color: white;"));
        tile11->setIconSize(QSize(20, 20));
        tile11->setFlat(true);

        gridLayout_4->addWidget(tile11, 0, 5, 1, 1);

        greenrun4 = new QPushButton(centralWidget);
        greenrun4->setObjectName(QStringLiteral("greenrun4"));
        greenrun4->setMinimumSize(QSize(25, 25));
        greenrun4->setMaximumSize(QSize(25, 25));
        greenrun4->setStyleSheet(QLatin1String("border-width: 0px 1px 0px 1px;\n"
"border-style: solid;\n"
"border-color: black;\n"
"background-color: #33ff33;"));
        greenrun4->setIconSize(QSize(20, 20));
        greenrun4->setFlat(true);

        gridLayout_4->addWidget(greenrun4, 1, 0, 1, 1);

        greenrun3 = new QPushButton(centralWidget);
        greenrun3->setObjectName(QStringLiteral("greenrun3"));
        greenrun3->setMinimumSize(QSize(25, 25));
        greenrun3->setMaximumSize(QSize(25, 25));
        greenrun3->setStyleSheet(QLatin1String("border-width: 0px 1px 0px 0px;\n"
"border-style: solid;\n"
"border-color: black;\n"
"background-color: #33ff33;"));
        greenrun3->setIconSize(QSize(20, 20));
        greenrun3->setFlat(true);

        gridLayout_4->addWidget(greenrun3, 1, 1, 1, 1);

        greenrun2 = new QPushButton(centralWidget);
        greenrun2->setObjectName(QStringLiteral("greenrun2"));
        greenrun2->setMinimumSize(QSize(25, 25));
        greenrun2->setMaximumSize(QSize(25, 25));
        greenrun2->setStyleSheet(QLatin1String("border-width: 0px 1px 0px 0px;\n"
"border-style: solid;\n"
"border-color: black;\n"
"background-color: #33ff33;"));
        greenrun2->setIconSize(QSize(20, 20));
        greenrun2->setFlat(true);

        gridLayout_4->addWidget(greenrun2, 1, 2, 1, 1);

        greenrun1 = new QPushButton(centralWidget);
        greenrun1->setObjectName(QStringLiteral("greenrun1"));
        greenrun1->setMinimumSize(QSize(25, 25));
        greenrun1->setMaximumSize(QSize(25, 25));
        greenrun1->setStyleSheet(QLatin1String("border-width: 0px 1px 0px 0px;\n"
"border-style: solid;\n"
"border-color: black;\n"
"background-color: #33ff33;"));
        greenrun1->setIconSize(QSize(20, 20));
        greenrun1->setFlat(true);

        gridLayout_4->addWidget(greenrun1, 1, 3, 1, 1);

        greenrun0 = new QPushButton(centralWidget);
        greenrun0->setObjectName(QStringLiteral("greenrun0"));
        greenrun0->setMinimumSize(QSize(25, 25));
        greenrun0->setMaximumSize(QSize(25, 25));
        greenrun0->setStyleSheet(QLatin1String("border-width: 0px 0px 0px 0px;\n"
"border-style: solid;\n"
"border-color: black;\n"
"background-color: #33ff33;"));
        greenrun0->setIconSize(QSize(20, 20));
        greenrun0->setFlat(true);

        gridLayout_4->addWidget(greenrun0, 1, 4, 1, 1);

        tile12 = new Tile(centralWidget);
        tile12->setObjectName(QStringLiteral("tile12"));
        tile12->setMinimumSize(QSize(25, 25));
        tile12->setMaximumSize(QSize(25, 25));
        tile12->setStyleSheet(QLatin1String("border-width: 0px 1px 0px 1px;\n"
"border-style: solid;\n"
"border-color: black;\n"
"background-color: white;"));
        tile12->setIconSize(QSize(20, 20));
        tile12->setFlat(true);

        gridLayout_4->addWidget(tile12, 1, 5, 1, 1);

        tile18 = new Tile(centralWidget);
        tile18->setObjectName(QStringLiteral("tile18"));
        tile18->setMinimumSize(QSize(25, 25));
        tile18->setMaximumSize(QSize(25, 25));
        tile18->setStyleSheet(QLatin1String("border-width: 1px 1px 0px 1px;\n"
"border-style: solid;\n"
"border-color: black;\n"
"background-color: white;"));
        tile18->setIconSize(QSize(20, 20));
        tile18->setFlat(true);

        gridLayout_4->addWidget(tile18, 2, 0, 1, 1);

        tile17 = new Tile(centralWidget);
        tile17->setObjectName(QStringLiteral("tile17"));
        tile17->setMinimumSize(QSize(25, 25));
        tile17->setMaximumSize(QSize(25, 25));
        tile17->setStyleSheet(QLatin1String("border-width: 1px 1px 0px 0px;\n"
"border-style: solid;\n"
"border-color: black;\n"
"background-color: white;"));
        tile17->setIconSize(QSize(20, 20));
        tile17->setFlat(true);

        gridLayout_4->addWidget(tile17, 2, 1, 1, 1);

        tile16 = new Tile(centralWidget);
        tile16->setObjectName(QStringLiteral("tile16"));
        tile16->setMinimumSize(QSize(25, 25));
        tile16->setMaximumSize(QSize(25, 25));
        tile16->setStyleSheet(QLatin1String("border-width: 1px 1px 0px 0px;\n"
"border-style: solid;\n"
"border-color: black;\n"
"background-color: white;"));
        tile16->setIconSize(QSize(20, 20));
        tile16->setFlat(true);

        gridLayout_4->addWidget(tile16, 2, 2, 1, 1);

        tile15 = new Tile(centralWidget);
        tile15->setObjectName(QStringLiteral("tile15"));
        tile15->setMinimumSize(QSize(25, 25));
        tile15->setMaximumSize(QSize(25, 25));
        tile15->setStyleSheet(QLatin1String("border-width: 1px 1px 0px 0px;\n"
"border-style: solid;\n"
"border-color: black;\n"
"background-color: white;"));
        tile15->setIconSize(QSize(20, 20));
        tile15->setFlat(true);

        gridLayout_4->addWidget(tile15, 2, 3, 1, 1);

        tile14 = new Tile(centralWidget);
        tile14->setObjectName(QStringLiteral("tile14"));
        tile14->setMinimumSize(QSize(25, 25));
        tile14->setMaximumSize(QSize(25, 25));
        tile14->setStyleSheet(QLatin1String("border-width: 1px 0px 0px 0px;\n"
"border-style: solid;\n"
"border-color: black;\n"
"background-color: #33ff33;"));
        tile14->setIconSize(QSize(20, 20));
        tile14->setFlat(true);
        tile14->setProperty("safe", QVariant(true));

        gridLayout_4->addWidget(tile14, 2, 4, 1, 1);

        tile13 = new Tile(centralWidget);
        tile13->setObjectName(QStringLiteral("tile13"));
        tile13->setMinimumSize(QSize(25, 25));
        tile13->setMaximumSize(QSize(25, 25));
        tile13->setStyleSheet(QLatin1String("border-width: 1px 1px 0px 1px;\n"
"border-style: solid;\n"
"border-color: black;\n"
"background-color: white;"));
        tile13->setIconSize(QSize(20, 20));
        tile13->setFlat(true);

        gridLayout_4->addWidget(tile13, 2, 5, 1, 1);


        horizontalLayout_2->addLayout(gridLayout_4);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        widget_6 = new QWidget(centralWidget);
        widget_6->setObjectName(QStringLiteral("widget_6"));
        widget_6->setMinimumSize(QSize(150, 150));
        widget_6->setMaximumSize(QSize(150, 150));
        widget_6->setStyleSheet(QStringLiteral("background-color: #ffff33;"));
        yellowhome = new Home(widget_6);
        yellowhome->setObjectName(QStringLiteral("yellowhome"));
        yellowhome->setGeometry(QRect(0, 0, 150, 150));
        yellowhome->setMinimumSize(QSize(150, 150));
        yellowhome->setMaximumSize(QSize(150, 150));

        horizontalLayout_3->addWidget(widget_6);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(0);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        tile31 = new Tile(centralWidget);
        tile31->setObjectName(QStringLiteral("tile31"));
        tile31->setMinimumSize(QSize(25, 25));
        tile31->setMaximumSize(QSize(25, 25));
        tile31->setStyleSheet(QLatin1String("border-width: 1px 1px 1px 0px;\n"
"border-style: solid;\n"
"border-color: black;\n"
"background-color: white;"));
        tile31->setIconSize(QSize(20, 20));
        tile31->setFlat(true);

        gridLayout_2->addWidget(tile31, 0, 0, 1, 1);

        yellowrun4 = new QPushButton(centralWidget);
        yellowrun4->setObjectName(QStringLiteral("yellowrun4"));
        yellowrun4->setMinimumSize(QSize(25, 25));
        yellowrun4->setMaximumSize(QSize(25, 25));
        yellowrun4->setStyleSheet(QLatin1String("border-width: 1px 0px 1px 0px;\n"
"border-style: solid;\n"
"border-color: black;\n"
"background-color: #ffff33;"));
        yellowrun4->setIconSize(QSize(20, 20));
        yellowrun4->setFlat(true);

        gridLayout_2->addWidget(yellowrun4, 0, 1, 1, 1);

        tile19 = new Tile(centralWidget);
        tile19->setObjectName(QStringLiteral("tile19"));
        tile19->setMinimumSize(QSize(25, 25));
        tile19->setMaximumSize(QSize(25, 25));
        tile19->setStyleSheet(QLatin1String("border-width: 1px 0px 1px 1px;\n"
"border-style: solid;\n"
"border-color: black;\n"
"background-color: white;"));
        tile19->setIconSize(QSize(20, 20));
        tile19->setFlat(true);

        gridLayout_2->addWidget(tile19, 0, 2, 1, 1);

        tile30 = new Tile(centralWidget);
        tile30->setObjectName(QStringLiteral("tile30"));
        tile30->setMinimumSize(QSize(25, 25));
        tile30->setMaximumSize(QSize(25, 25));
        tile30->setStyleSheet(QLatin1String("border-width: 0px 1px 1px 0px;\n"
"border-style: solid;\n"
"border-color: black;\n"
"background-color: white;"));
        tile30->setIconSize(QSize(20, 20));
        tile30->setFlat(true);

        gridLayout_2->addWidget(tile30, 1, 0, 1, 1);

        yellowrun3 = new QPushButton(centralWidget);
        yellowrun3->setObjectName(QStringLiteral("yellowrun3"));
        yellowrun3->setMinimumSize(QSize(25, 25));
        yellowrun3->setMaximumSize(QSize(25, 25));
        yellowrun3->setStyleSheet(QLatin1String("border-width: 0px 0px 1px 0px;\n"
"border-style: solid;\n"
"border-color: black;\n"
"background-color: #ffff33;"));
        yellowrun3->setIconSize(QSize(20, 20));
        yellowrun3->setFlat(true);

        gridLayout_2->addWidget(yellowrun3, 1, 1, 1, 1);

        tile20 = new Tile(centralWidget);
        tile20->setObjectName(QStringLiteral("tile20"));
        tile20->setMinimumSize(QSize(25, 25));
        tile20->setMaximumSize(QSize(25, 25));
        tile20->setStyleSheet(QLatin1String("border-width: 0px 0px 1px 1px;\n"
"border-style: solid;\n"
"border-color: black;\n"
"background-color: white;"));
        tile20->setIconSize(QSize(20, 20));
        tile20->setFlat(true);

        gridLayout_2->addWidget(tile20, 1, 2, 1, 1);

        tile29 = new Tile(centralWidget);
        tile29->setObjectName(QStringLiteral("tile29"));
        tile29->setMinimumSize(QSize(25, 25));
        tile29->setMaximumSize(QSize(25, 25));
        tile29->setStyleSheet(QLatin1String("border-width: 0px 1px 1px 0px;\n"
"border-style: solid;\n"
"border-color: black;\n"
"background-color: white;"));
        tile29->setIconSize(QSize(20, 20));
        tile29->setFlat(true);

        gridLayout_2->addWidget(tile29, 2, 0, 1, 1);

        yellowrun2 = new QPushButton(centralWidget);
        yellowrun2->setObjectName(QStringLiteral("yellowrun2"));
        yellowrun2->setMinimumSize(QSize(25, 25));
        yellowrun2->setMaximumSize(QSize(25, 25));
        yellowrun2->setStyleSheet(QLatin1String("border-width: 0px 0px 1px 0px;\n"
"border-style: solid;\n"
"border-color: black;\n"
"background-color: #ffff33;"));
        yellowrun2->setIconSize(QSize(20, 20));
        yellowrun2->setFlat(true);

        gridLayout_2->addWidget(yellowrun2, 2, 1, 1, 1);

        tile21 = new Tile(centralWidget);
        tile21->setObjectName(QStringLiteral("tile21"));
        tile21->setMinimumSize(QSize(25, 25));
        tile21->setMaximumSize(QSize(25, 25));
        tile21->setStyleSheet(QLatin1String("border-width: 0px 0px 1px 1px;\n"
"border-style: solid;\n"
"border-color: black;\n"
"background-color: white;"));
        tile21->setIconSize(QSize(20, 20));
        tile21->setFlat(true);

        gridLayout_2->addWidget(tile21, 2, 2, 1, 1);

        tile28 = new Tile(centralWidget);
        tile28->setObjectName(QStringLiteral("tile28"));
        tile28->setMinimumSize(QSize(25, 25));
        tile28->setMaximumSize(QSize(25, 25));
        tile28->setStyleSheet(QLatin1String("border-width: 0px 1px 1px 0px;\n"
"border-style: solid;\n"
"border-color: black;\n"
"background-color: white;"));
        tile28->setIconSize(QSize(20, 20));
        tile28->setFlat(true);

        gridLayout_2->addWidget(tile28, 3, 0, 1, 1);

        yellowrun1 = new QPushButton(centralWidget);
        yellowrun1->setObjectName(QStringLiteral("yellowrun1"));
        yellowrun1->setMinimumSize(QSize(25, 25));
        yellowrun1->setMaximumSize(QSize(25, 25));
        yellowrun1->setStyleSheet(QLatin1String("border-width: 0px 0px 1px 0px;\n"
"border-style: solid;\n"
"border-color: black;\n"
"background-color: #ffff33;"));
        yellowrun1->setIconSize(QSize(20, 20));
        yellowrun1->setFlat(true);

        gridLayout_2->addWidget(yellowrun1, 3, 1, 1, 1);

        tile22 = new Tile(centralWidget);
        tile22->setObjectName(QStringLiteral("tile22"));
        tile22->setMinimumSize(QSize(25, 25));
        tile22->setMaximumSize(QSize(25, 25));
        tile22->setStyleSheet(QLatin1String("border-width: 0px 0px 1px 1px;\n"
"border-style: solid;\n"
"border-color: black;\n"
"background-color: white;"));
        tile22->setIconSize(QSize(20, 20));
        tile22->setFlat(true);

        gridLayout_2->addWidget(tile22, 3, 2, 1, 1);

        tile27 = new Tile(centralWidget);
        tile27->setObjectName(QStringLiteral("tile27"));
        tile27->setMinimumSize(QSize(25, 25));
        tile27->setMaximumSize(QSize(25, 25));
        tile27->setStyleSheet(QLatin1String("border-width: 0px 1px 0px 0px;\n"
"border-style: solid;\n"
"border-color: black;\n"
"background-color: #ffff33;"));
        tile27->setIconSize(QSize(20, 20));
        tile27->setFlat(true);
        tile27->setProperty("safe", QVariant(true));

        gridLayout_2->addWidget(tile27, 4, 0, 1, 1);

        yellorun0 = new QPushButton(centralWidget);
        yellorun0->setObjectName(QStringLiteral("yellorun0"));
        yellorun0->setMinimumSize(QSize(25, 25));
        yellorun0->setMaximumSize(QSize(25, 25));
        yellorun0->setStyleSheet(QLatin1String("border-width: 0px 0px 0px 0px;\n"
"border-style: solid;\n"
"border-color: black;\n"
"background-color: #ffff33;"));
        yellorun0->setIconSize(QSize(20, 20));
        yellorun0->setFlat(true);

        gridLayout_2->addWidget(yellorun0, 4, 1, 1, 1);

        tile23 = new Tile(centralWidget);
        tile23->setObjectName(QStringLiteral("tile23"));
        tile23->setMinimumSize(QSize(25, 25));
        tile23->setMaximumSize(QSize(25, 25));
        tile23->setStyleSheet(QLatin1String("border-width: 0px 0px 0px 1px;\n"
"border-style: solid;\n"
"border-color: black;\n"
"background-color: white;"));
        tile23->setIconSize(QSize(20, 20));
        tile23->setFlat(true);

        gridLayout_2->addWidget(tile23, 4, 2, 1, 1);

        tile26 = new Tile(centralWidget);
        tile26->setObjectName(QStringLiteral("tile26"));
        tile26->setMinimumSize(QSize(25, 25));
        tile26->setMaximumSize(QSize(25, 25));
        tile26->setStyleSheet(QLatin1String("border-width: 1px 1px 1px 0px;\n"
"border-style: solid;\n"
"border-color: black;\n"
"background-color: white;"));
        tile26->setIconSize(QSize(20, 20));
        tile26->setFlat(true);

        gridLayout_2->addWidget(tile26, 5, 0, 1, 1);

        tile25 = new Tile(centralWidget);
        tile25->setObjectName(QStringLiteral("tile25"));
        tile25->setMinimumSize(QSize(25, 25));
        tile25->setMaximumSize(QSize(25, 25));
        tile25->setStyleSheet(QLatin1String("border-width: 1px 0px 1px 0px;\n"
"border-style: solid;\n"
"border-color: black;\n"
"background-color: white;"));
        tile25->setIconSize(QSize(20, 20));
        tile25->setFlat(true);

        gridLayout_2->addWidget(tile25, 5, 1, 1, 1);

        tile24 = new Tile(centralWidget);
        tile24->setObjectName(QStringLiteral("tile24"));
        tile24->setMinimumSize(QSize(25, 25));
        tile24->setMaximumSize(QSize(25, 25));
        tile24->setStyleSheet(QLatin1String("border-width: 1px 0px 1px 1px;\n"
"border-style: solid;\n"
"border-color: black;\n"
"background-color: white;"));
        tile24->setIconSize(QSize(20, 20));
        tile24->setFlat(true);

        gridLayout_2->addWidget(tile24, 5, 2, 1, 1);


        horizontalLayout_3->addLayout(gridLayout_2);

        widget_8 = new QWidget(centralWidget);
        widget_8->setObjectName(QStringLiteral("widget_8"));
        widget_8->setMinimumSize(QSize(150, 150));
        widget_8->setMaximumSize(QSize(150, 150));
        widget_8->setStyleSheet(QStringLiteral("background-color: #33ff33;"));
        greenhome = new Home(widget_8);
        greenhome->setObjectName(QStringLiteral("greenhome"));
        greenhome->setGeometry(QRect(0, 0, 150, 150));
        greenhome->setMinimumSize(QSize(150, 150));
        greenhome->setMaximumSize(QSize(150, 150));

        horizontalLayout_3->addWidget(widget_8);


        verticalLayout->addLayout(horizontalLayout_3);


        horizontalLayout_5->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        dice = new Dice(centralWidget);
        dice->setObjectName(QStringLiteral("dice"));
        dice->setMinimumSize(QSize(60, 60));
        dice->setMaximumSize(QSize(60, 60));
        dice->setStyleSheet(QStringLiteral("background-color: #ff3333; border: 1px solid black; border-radius: 10px;"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/dices/face1"), QSize(), QIcon::Normal, QIcon::Off);
        dice->setIcon(icon);
        dice->setIconSize(QSize(50, 50));
        dice->setFlat(true);

        horizontalLayout_4->addWidget(dice);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout_4);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_2);

        player1 = new PlayerInfo(centralWidget);
        player1->setObjectName(QStringLiteral("player1"));
        player1->setMinimumSize(QSize(215, 35));
        player1->setMaximumSize(QSize(215, 35));
        player1->setProperty("id", QVariant(1));

        verticalLayout_2->addWidget(player1);

        player2 = new PlayerInfo(centralWidget);
        player2->setObjectName(QStringLiteral("player2"));
        player2->setMinimumSize(QSize(215, 35));
        player2->setMaximumSize(QSize(215, 35));
        player2->setProperty("id", QVariant(2));

        verticalLayout_2->addWidget(player2);

        player3 = new PlayerInfo(centralWidget);
        player3->setObjectName(QStringLiteral("player3"));
        player3->setMinimumSize(QSize(215, 35));
        player3->setMaximumSize(QSize(215, 35));
        player3->setProperty("id", QVariant(3));

        verticalLayout_2->addWidget(player3);

        player4 = new PlayerInfo(centralWidget);
        player4->setObjectName(QStringLiteral("player4"));
        player4->setMinimumSize(QSize(215, 35));
        player4->setMaximumSize(QSize(215, 35));
        player4->setProperty("id", QVariant(4));

        verticalLayout_2->addWidget(player4);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_3);


        horizontalLayout_5->addLayout(verticalLayout_2);

        Ludo->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Ludo);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 620, 22));
        menuJogo = new QMenu(menuBar);
        menuJogo->setObjectName(QStringLiteral("menuJogo"));
        menuAjuda = new QMenu(menuBar);
        menuAjuda->setObjectName(QStringLiteral("menuAjuda"));
        Ludo->setMenuBar(menuBar);

        menuBar->addAction(menuJogo->menuAction());
        menuBar->addAction(menuAjuda->menuAction());
        menuJogo->addAction(actionNovo);
        menuJogo->addAction(actionSair);
        menuAjuda->addAction(actionSobre);

        retranslateUi(Ludo);

        QMetaObject::connectSlotsByName(Ludo);
    } // setupUi

    void retranslateUi(QMainWindow *Ludo)
    {
        Ludo->setWindowTitle(QApplication::translate("Ludo", "Ludo", 0));
        actionNovo->setText(QApplication::translate("Ludo", "Novo", 0));
        actionSair->setText(QApplication::translate("Ludo", "Sair", 0));
        actionSobre->setText(QApplication::translate("Ludo", "Sobre", 0));
        menuJogo->setTitle(QApplication::translate("Ludo", "Jogo", 0));
        menuAjuda->setTitle(QApplication::translate("Ludo", "Ajuda", 0));
    } // retranslateUi

};

namespace Ui {
    class Ludo: public Ui_Ludo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LUDO_H
