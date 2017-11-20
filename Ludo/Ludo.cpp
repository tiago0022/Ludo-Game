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
    this->redPawnsOnRuns = 0;
    this->yellowPawnsOnRuns = 0;
    this->bluePawnsOnRuns = 0;
    this->greenPawnsOnRuns = 0;

    ui->redhome->setHomeColor(1);
    ui->yellowhome->setHomeColor(2);
    ui->bluehome->setHomeColor(3);
    ui->greenhome->setHomeColor(4);

    m_redrun    << ui->redrun0
                << ui->redrun1
                << ui->redrun2
                << ui->redrun3
                << ui->redrun4;

    m_yellowrun << ui->yellorun0
                << ui->yellowrun1
                << ui->yellowrun2
                << ui->yellowrun3
                << ui->yellowrun4;

    m_bluerun   << ui->bluerun0
                << ui->bluerun1
                << ui->bluerun2
                << ui->bluerun3
                << ui->bluerun4;

    m_greenrun  << ui->greenrun0
                << ui->greenrun1
                << ui->greenrun2
                << ui->greenrun3
                << ui->greenrun4;

    QObject::connect(this,SIGNAL(rollDiceAgain(bool)),
                     this,SLOT(setAvailableMovement()));

    for(int i=0;i<5;i++){
        QObject::connect(m_redrun[i],SIGNAL(clicked(bool)),
                         this, SLOT(handleRun()));

        QObject::connect(m_yellowrun[i],SIGNAL(clicked(bool)),
                         this, SLOT(handleRun()));

        QObject::connect(m_bluerun[i],SIGNAL(clicked(bool)),
                         this, SLOT(handleRun()));

        QObject::connect(m_greenrun[i],SIGNAL(clicked(bool)),
                         this, SLOT(handleRun()));
    }

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

//    ui->player3->hide();
//    ui->player4->hide();

    ui->redhome->setPlayer(0);
    ui->player1->setTurn(true);//o jogador 1 sempre inicia a jogada

    ui->yellowhome->setPlayer(1);
    ui->player2->setTurn(false);

    ui->bluehome->setPlayer(2);
    ui->player3->setTurn(false);

    ui->greenhome->setPlayer(3);
    ui->player4->setTurn(false);

    QObject::connect(ui->redhome, SIGNAL(pawnSelected(int,int)),
                     this, SLOT(handleHome(int,int)));

    QObject::connect(ui->yellowhome, SIGNAL(pawnSelected(int,int)),
                     this, SLOT(handleHome(int,int)));


    QObject::connect(ui->bluehome, SIGNAL(pawnSelected(int,int)),
                     this, SLOT(handleHome(int,int)));


    QObject::connect(ui->greenhome, SIGNAL(pawnSelected(int,int)),
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
            qDebug() << "name = " << m_redrun[2]->icon().name();
            if(m_tiles[i]->getPawnID()  == 1){
                this->hasPawnsOntiles = true;
                qDebug() << "tem peao vermelho nos tiles";
                break;
                //emitir sinal contendo o currentPlayer para o dado
            }
        }

        if(!this->hasPawnsOntiles && this->redPawnsOnRuns){
//            for(int i=0;i<5;i++){
//                if(m_redrun[i]->icon().name() == QIcon(QPixmap(":/pawns/red")).name()){
//                    this->hasPawnsOntiles = true;
                    qDebug() << "tem peao vermelho nos runs";
//                    break;
//                    //emitir sinal contendo o currentPlayer para o dado
//                }
//            }
        }

    }else if(currentPlayer == 2){
        for(int i=0;i<52;i++){
            if(m_tiles[i]->getPawnID()  == 2){
                this->hasPawnsOntiles = true;
                qDebug() << "tem peao amarelo nos tiles";
                //emitir sinal contendo o currentPlayer para o dado
                break;
            }
        }
        if(!this->hasPawnsOntiles && this->yellowPawnsOnRuns){
//            for(int i=0;i<5;i++){
//                if(m_yellowrun[i]->icon().name() == QIcon(QPixmap(":/pawns/yellow")).name()){
//                    this->hasPawnsOntiles = true;
                    qDebug() << "tem peao amarelo nos runs";
//                    break;
//                    //emitir sinal contendo o currentPlayer para o dado
//                }
//            }
        }
    }else if(currentPlayer == 3){
        for(int i=0;i<52;i++){
            if(m_tiles[i]->getPawnID()  == 3){
                this->hasPawnsOntiles = true;
                qDebug() << "tem peao azul nos tiles";
                //emitir sinal contendo o currentPlayer para o dado
                break;
            }
        }
        if(!this->hasPawnsOntiles && this->bluePawnsOnRuns){
//            for(int i=0;i<5;i++){
//                if(m_bluerun[i]->icon().name() == QIcon(QPixmap(":/pawns/blue")).name()){
//                    this->hasPawnsOntiles = true;
                    qDebug() << "tem peao azul nos runs";
//                    break;
//                    //emitir sinal contendo o currentPlayer para o dado
//                }
//            }
        }
    }else if(currentPlayer == 4){
        for(int i=0;i<52;i++){
            if(m_tiles[i]->getPawnID()  == 4){
                this->hasPawnsOntiles = true;
                qDebug() << "tem peao verde nos tiles";
                //emitir sinal contendo o currentPlayer para o dado
                break;
            }
        }
        if(!this->hasPawnsOntiles && this->greenPawnsOnRuns){
//            for(int i=0;i<5;i++){
//                if(m_greenrun[i]->icon().name() == QIcon(QPixmap(":/pawns/green")).name()){
//                    this->hasPawnsOntiles = true;
                    qDebug() << "tem peao verde nos runs";
//                    break;
//                    //emitir sinal contendo o currentPlayer para o dado
//                }
//            }
        }
    }

    switch (currentPlayer) {
        case 1:
            if(!this->redPawnsOnRuns && !this->hasPawnsOntiles && n != 6){
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
            if(!this->yellowPawnsOnRuns && !this->hasPawnsOntiles && n != 6){
                this->ui->player2->setTurn(false);
                this->ui->player3->setTurn(true);
                // mandar sinal enable dice
                emit this->enableDice(true);
            }
            else{
                emit this->disableDice(false);
            }
        break;

        case 3:
            if(!this->bluePawnsOnRuns && !this->hasPawnsOntiles && n != 6){
                this->ui->player3->setTurn(false);
                this->ui->player4->setTurn(true);
                // mandar sinal enable dice
                emit this->enableDice(true);
            }
            else{
                emit this->disableDice(false);
            }
        break;

        case 4:
            if(!this->greenPawnsOnRuns && !this->hasPawnsOntiles && n != 6){
                this->ui->player4->setTurn(false);
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
        while(m_tiles[index]->hasPawn())
            index = (index + 1) % 52;
        m_tiles[index]->setPawn(true,currentPlayer);
        qDebug() << "Jogadas disponíveis: " << --this->movements;
        ui->dice->setRolledDice(false);
        emit rollDiceAgain(true);
        emit enableDice(true);
//        leftHome = true;
    }
}

void Ludo::handlePlay(int pawnID) {
    this->gameData(pawnID,currentPlayer);
    if(this->movements != 0 && pawnID == currentPlayer && this->availableMovement){
        Tile* t =
            qobject_cast<Tile*>(QObject::sender());
        int anterior = t->pos();

        int proximo = (anterior + m_dice);
        switch (currentPlayer) {

        case 1:
            m_tiles[anterior]->setPawn(false,currentPlayer);
            if(proximo > 51 && anterior <= 51 && anterior > 41){
                this->redPawnsOnRuns++;
                proximo = proximo % 52;
                if(proximo == 5){
                    qDebug() << "O player " << currentPlayer << " ganhou um peao";
                    this->redPawnsOnRuns--;
                }else{
                    m_redrun[proximo]->setIcon(QPixmap(":/pawns/red"));
                }
            }else{
                proximo = proximo % 52;
                while(m_tiles[proximo]->hasPawn())
                    proximo = (proximo + 1) % 52;
                m_tiles[proximo]->setPawn(true,currentPlayer);
            }
        break;

        case 2:
            m_tiles[anterior]->setPawn(false,currentPlayer);
            this->yellowPawnsOnRuns++;
            if(proximo > 25 && anterior <= 25 && anterior > 15){
                proximo = proximo % 26;
                if(proximo == 5){
                    this->yellowPawnsOnRuns--;
                    qDebug() << "O player " << currentPlayer << " ganhou um peao";
                }else{
                    m_yellowrun[proximo]->setIcon(QPixmap(":/pawns/yellow"));
                }
            }else{
                proximo = proximo % 52;
                while(m_tiles[proximo]->hasPawn())
                    proximo = (proximo + 1) % 52;
                m_tiles[proximo]->setPawn(true,currentPlayer);
            }
            break;

        case 3:
            m_tiles[anterior]->setPawn(false,currentPlayer);
            if(proximo > 38 && anterior <= 38 && anterior > 28){
                this->bluePawnsOnRuns++;
                proximo = proximo % 39;
                if(proximo == 5){
                    this->bluePawnsOnRuns--;
                    qDebug() << "O player " << currentPlayer << " ganhou um peao";
                }else{
                    m_bluerun[proximo]->setIcon(QPixmap(":/pawns/blue"));
                }
            }else{
                proximo = proximo % 52;
                while(m_tiles[proximo]->hasPawn())
                    proximo = (proximo + 1) % 52;
                m_tiles[proximo]->setPawn(true,currentPlayer);
//                m_tiles[proximo]->setPawn(true,currentPlayer);
            }
            break;

        case 4:
            m_tiles[anterior]->setPawn(false,currentPlayer);
            if(proximo > 12 && anterior <= 12 && anterior > 2){
                this->greenPawnsOnRuns++;
                proximo = proximo % 13;
                if(proximo == 5){
                    this->greenPawnsOnRuns--;
                    qDebug() << "O player " << currentPlayer << " ganhou um peao";
                }else{
                    m_yellowrun[proximo]->setIcon(QPixmap(":/pawns/green"));
                }
            }else{
                proximo = proximo % 52;
                while(m_tiles[proximo]->hasPawn())
                        proximo = (proximo + 1) % 52;
                m_tiles[proximo]->setPawn(true,currentPlayer);
            }
            break;
        default:
            break;
        }

        qDebug() << "Jogadas disponíveis: " << --this->movements;
        if(this->movements == 0){
            switch (currentPlayer) {
            case 1:
                ui->player1->setTurn(false);
                ui->player2->setTurn(true);
                break;
            case 2:
                ui->player2->setTurn(false);
                ui->player3->setTurn(true);
                break;
            case 3:
                ui->player3->setTurn(false);
                ui->player4->setTurn(true);
                break;
            case 4:
                ui->player4->setTurn(false);
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
    ui->yellowhome->reset();
    ui->bluehome->reset();
    ui->greenhome->reset();
    for (int i = 0; i < 52; i++)
        m_tiles[i]->setPawn(false, currentPlayer);
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

//QPushButton* btn =
//    qobject_cast<QPushButton*>(QObject::sender());
//qDebug() << "HandleRun Signal sent: " << btn->icon().isNull();

void Ludo::handleRun(){
    QPushButton* btn =
        qobject_cast<QPushButton*>(QObject::sender());
    qDebug() << "\n--\nHandleRun Signal sent, btn is null? -> " << btn->icon().isNull();
//    qDebug() << "red data_ptr = " << QIcon(QPixmap(":/pawns/red"));
//    qDebug() << "yellow data_ptr = " << QIcon(QPixmap(":/pawns/yellow"));
//    qDebug() << "blue data_ptr = " << QIcon(QPixmap(":/pawns/blue"));
//    qDebug() << "green data_ptr = " << QIcon(QPixmap(":/pawns/green"));

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
