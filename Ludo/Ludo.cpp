#include "Ludo.h"
#include "ui_Ludo.h"
#include <QDebug>
#include <QTime>

Ludo::Ludo(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Ludo),
    m_pos(-1),
    currentPlayer(1),
    m_dice(-1) {

    ui->setupUi(this);

    for (int i = 0; i < 52; i++) {
        Tile* t = this->findChild<Tile*>(
                    QString("tile%1").arg(i));
        Q_ASSERT(t != 0);

        t->setPos(i);
        //conecta a casa a uma funçao pra fazer a jogada
        QObject::connect(t, SIGNAL(movePawn(int)),
                         this, SLOT(handlePlay(int)));
        m_tiles << t; //adiciona a casa a uma lista de casas
    }

    this->hasPawnsOntiles = false;

    ui->redhome->setHomeColor(1);
    ui->yellowhome->setHomeColor(2);
    ui->bluehome->setHomeColor(3);
    ui->greenhome->setHomeColor(4);

    m_redrun << ui->redrun0
             << ui->redrun1
             << ui->redrun2
             << ui->redrun3
             << ui->redrun4;

    m_yellowrun << ui->yellorun0
                << ui->yellowrun1
                << ui->yellowrun2
                << ui->yellowrun3
                << ui->yellowrun4;

    QObject::connect(this,SIGNAL(rollDiceAgain(bool)),
                     this,SLOT(setAvailableMovement()));

//    QObject::connect(this,SIGNAL(rollDiceAgain(bool)),
//                     ui->dice,SLOT(handleClick(bool)));


    //fazer isso com todos os jogadores
    QObject::connect(ui->player1, SIGNAL(changeTurn(int)),
                     this, SLOT(handleTurn(int)));
    QObject::connect(ui->player2, SIGNAL(changeTurn(int)),
                     this, SLOT(handleTurn(int)));
    QObject::connect(ui->player3, SIGNAL(changeTurn(int)),
                     this, SLOT(handleTurn(int)));
    QObject::connect(ui->player4, SIGNAL(changeTurn(int)),
                     this, SLOT(handleTurn(int)));

    this->adjustSize();
    this->setFixedSize(this->size());

//    this->playAgain = false;

    ui->player3->hide();
    ui->player4->hide();

    ui->redhome->setPlayer(0);
    ui->player1->setTurn(true);//o jogador 1 sempre inicia a jogada

    ui->yellowhome->setPlayer(1);
    ui->player2->setTurn(false);

    QObject::connect(ui->redhome, SIGNAL(pawnSelected(int,int)),
                     this, SLOT(handleHome(int,int)));

    QObject::connect(ui->yellowhome, SIGNAL(pawnSelected(int,int)),
                     this, SLOT(handleHome(int,int)));

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
    m_dice = n; // 'n' é o valor tirado no dado
    this->availableMovement = true;
    for(int i=0;i<52;i++){
        if(m_tiles[i]->getPawnID() == currentPlayer){
            this->hasPawnsOntiles = true;
        }
    }
    if(n == 6 /*|| this->hasPawnsOntiles*/){
        this->playAgain = true;
        this->movements = 2;

    }
    else{
        if(currentPlayer == 1){
//            this->ui->player1->setTurn(false);
//            this->ui->player2->setTurn(true);

        }
        if(currentPlayer == 2){
//            this->ui->player1->setTurn(true);
//            this->ui->player2->setTurn(false);
        }
        this->playAgain = false;
        this->movements = 1;
    }
//    this->hasPawnsOntiles = false;
    qDebug() << "Jogadas disponíveis: " << this->movements;

}

void Ludo::handleHome(int n,int homeColor) {
    if (m_dice == 6 && currentPlayer == homeColor) {
        qDebug() << "handleHome";
        Home* home =
            qobject_cast<Home*>(QObject::sender());
        home->removePawn(n);
        m_tiles[1]->setPawn(true);
        qDebug() << "Jogadas disponíveis: " << --this->movements;
        ui->dice->setRolledDice(false);
        emit rollDiceAgain(true);

    }
}

void Ludo::handlePlay(int pawnID) {
    this->gameData(pawnID,currentPlayer);
    if(this->movements != 0 && pawnID == currentPlayer && this->availableMovement){
        Tile* t =
            qobject_cast<Tile*>(QObject::sender());
        int anterior = t->pos();

        int proximo = (anterior + m_dice) % 52;

        m_tiles[anterior]->setPawn(false);
        m_tiles[proximo]->setPawn(true);
        qDebug() << "Jogadas disponíveis: " << --this->movements;
        if(this->movements == 0){
            ui->player1->setTurn(false);
            ui->player2->setTurn(true);
        }
        ui->dice->setRolledDice(false);
        emit rollDiceAgain(true);

    }
}

void Ludo::reset() {
    ui->dice->reset();
    ui->redhome->reset();
    for (int i = 0; i < 52; i++)
        m_tiles[i]->setPawn(false);
}

void Ludo::handleTurn(int n){
    this->currentPlayer = n;
    qDebug() << "currentPlayer: " << this->currentPlayer;
    this->movements =  1;
    switch(n){
        case 1://vermelho
            ui->dice->setStyleSheet("background-color: #ff3333; border: 1px solid black; border-radius: 10px;");
            break;
        case 2://amarelo
            ui->dice->setStyleSheet("background-color: #ffff33; border: 1px solid black; border-radius: 10px;");
            break;
        case 3://azul
            ui->dice->setStyleSheet("background-color: #3333ff; border: 1px solid black; border-radius: 10px;");
            break;
        case 4://verde
            ui->dice->setStyleSheet("background-color: #33ff33; border: 1px solid black; border-radius: 10px;");
    }


//    qDebug() << "vez do jogador:" << n;
}

void Ludo::setAvailableMovement(){
    this->availableMovement = false;
}

void Ludo::gameData(int pawnID, int currentPlayer){
    qDebug() << "----------------";
    switch(pawnID){
    case 1:
        qDebug() << "Peão Vermelho";
        break;
    case 2:
        qDebug() << "Peão Amarelo";
        break;
    case 3:
        qDebug() << "Peão Azul";
        break;
    case 4:
        qDebug() << "Peão Verde";
        break;
    default:
        break;
    }
    switch (currentPlayer) {
    case 1:
        qDebug() << "Jogador Vermelho";
        break;
    case 2:
        qDebug() << "Jogador Amarelo";
        break;
    case 3:
        qDebug() << "Jogador Azul";
        break;
    case 4:
        qDebug() << "Jogador Verde";
        break;
    default:
        break;
    }
    qDebug() << "----------------";
}
