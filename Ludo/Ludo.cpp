#include "Ludo.h"
#include "ui_Ludo.h"
#include <QDebug>
#include <QTime>

Ludo::Ludo(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Ludo),
    m_pos(-1),
    m_dice(-1) {

    ui->setupUi(this);

    for (int i = 0; i < 52; i++) {
        Tile* t = this->findChild<Tile*>(
                    QString("tile%1").arg(i));
        Q_ASSERT(t != 0);

        t->setPos(i);
        QObject::connect(t, SIGNAL(movePawn()),
                         this, SLOT(handlePlay()));
        m_tiles << t;
    }

    m_redrun << ui->redrun0
             << ui->redrun1
             << ui->redrun2
             << ui->redrun3
             << ui->redrun4;

    this->adjustSize();
    this->setFixedSize(this->size());

    ui->player3->hide();
    ui->player4->hide();

    ui->redhome->setPlayer(0);
    ui->player1->setTurn(true);

//    ui->yellowhome->setPlayer(1);

    QObject::connect(ui->redhome, SIGNAL(pawnSelected(int)),
                     this, SLOT(handleHome(int)));
    QObject::connect(
        ui->dice,
        SIGNAL(roll(int)),
        this,
        SLOT(handleDice(int)));

    QObject::connect(
         ui->actionNovo, SIGNAL(triggered(bool)),
         this, SLOT(reset()));
    QObject::connect(
         ui->actionSair, SIGNAL(triggered(bool)),
         qApp, SLOT(quit()));
}

Ludo::~Ludo() {
    delete ui;
}

void Ludo::handleDice(int n) {
    m_dice = n;
}

void Ludo::handleHome(int n) {
    if (m_dice == 6) {
        Home* home =
            qobject_cast<Home*>(QObject::sender());
        home->removePawn(n);
        m_tiles[1]->setPawn(true);
    }
}

void Ludo::handlePlay() {
    Tile* t =
        qobject_cast<Tile*>(QObject::sender());
    int anterior = t->pos();
    int proximo = (anterior + m_dice) % 52;

    m_tiles[anterior]->setPawn(false);
    m_tiles[proximo]->setPawn(true);
}

void Ludo::reset() {
    ui->dice->reset();
    ui->redhome->reset();
    for (int i = 0; i < 52; i++)
        m_tiles[i]->setPawn(false);
}
