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

    QObject::connect(this,SIGNAL(enableDice(bool)),
                     ui->dice,SLOT(setDice(bool)));

    QObject::connect(this,SIGNAL(disableDice(bool)),
                     ui->dice,SLOT(setDice(bool)));

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
    if(currentPlayer == 1){
        for(int i=0;i<52;i++){
            if(m_tiles[i]->getPawnID()  == 1){
                this->hasPawnsOntiles = true;
                qDebug() << "tem peao vermelho nos tiles";
                //emitir sinal contendo o currentPlayer para o dado
            }
        }

    }else if(currentPlayer == 2){
        for(int i=0;i<52;i++){
            if(m_tiles[i]->getPawnID()  == 2){
                this->hasPawnsOntiles = true;
                qDebug() << "tem peao amarelo nos tiles";
                //emitir sinal contendo o currentPlayer para o dado
            }
        }
    }
    switch (currentPlayer) {
    case 1:
        if(!this->hasPawnsOntiles && n != 6){
            this->ui->player1->setTurn(false);
            this->ui->player2->setTurn(true);
            //mandar sinal enable dice
//            ui->dice->setIcon(QPixmap(
//                                  QString(":/dices/face0")));
            emit this->enableDice(true);
        }
        else{
            emit this->disableDice(false);
        }
        break;
    case 2:
        if(!this->hasPawnsOntiles && n != 6){
            this->ui->player2->setTurn(false);
            this->ui->player1->setTurn(true);
            // mandar sinal enable dice
            emit this->enableDice(true);
        }
        else{
            emit this->disableDice(false);
        }
        break;
    default:

        break;
    }
    this->hasPawnsOntiles = false;
    if(n == 6){
        this->playAgain = true;
        this->movements = 2;

    }
    else{

        this->playAgain = false;
        this->movements = 1;
    }
    qDebug() << "Jogadas disponíveis: " << this->movements;

}

void Ludo::handleHome(int n,int homeColor) {
    int index;
    if (m_dice == 6 && currentPlayer == homeColor && this->movements > 0 && this->availableMovement) {
        switch (currentPlayer) {
        case 1://vermelho
            index = 1;
            break;
        case 2://amarelo
            index = 27;
            break;
        case 3://azul
            index = 40;
            break;
        case 4://verde
            index = 14;
            break;
        default:
            break;
        }
        qDebug() << "handleHome";
        Home* home =
            qobject_cast<Home*>(QObject::sender());
        home->removePawn(n);
        m_tiles[index]->setPawn(true,currentPlayer);
        qDebug() << "Jogadas disponíveis: " << --this->movements;
        ui->dice->setRolledDice(false);
        emit rollDiceAgain(true);
        emit enableDice(true);

    }
}

void Ludo::handlePlay(int pawnID) {
    this->gameData(pawnID,currentPlayer);
    if(this->movements != 0 && pawnID == currentPlayer && this->availableMovement){
        Tile* t =
            qobject_cast<Tile*>(QObject::sender());
        int anterior = t->pos();

        int proximo = (anterior + m_dice) % 52;

        m_tiles[anterior]->setPawn(false,currentPlayer);
        m_tiles[proximo]->setPawn(true,currentPlayer);
        qDebug() << "Jogadas disponíveis: " << --this->movements;
        if(this->movements == 0){
            switch (currentPlayer) {
            case 1:
                ui->player1->setTurn(false);
                ui->player2->setTurn(true);
                break;
            case 2:
                ui->player2->setTurn(false);
                ui->player1->setTurn(true);
                break;
            default:
                break;
            }
        }
        ui->dice->setRolledDice(false);
        emit rollDiceAgain(true);
        emit enableDice(true);
    }
}

void Ludo::reset() {
    ui->dice->reset();
    ui->redhome->reset();
    for (int i = 0; i < 52; i++)
        m_tiles[i]->setPawn(false,currentPlayer);
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
