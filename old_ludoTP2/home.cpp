#include "home.h"
#include "ui_home.h"

Home::Home(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Home)
{
    ui->setupUi(this);
}

Home::~Home()
{
    delete ui;
}

void Home::setPlayer(int p){
    QString pawn;
    switch(p){
        case 0:
            pawn = QPixmap(":/pawns/red");
        break;

        case 1:
            pawn = QPixmap(":/pawns/blue");
    }

    ui->home1->setIcon(pawn);
    ui->home2->setIcon(pawn);
    ui->home3->setIcon(pawn);
    ui->home4->setIcon(pawn);

}
