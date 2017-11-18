#include "Tile.h"
#include <QDebug>

Tile::Tile(QWidget *parent)
    : QPushButton(parent),
      m_pos(-1),
      m_safe(false),
      pawnID(0), //inicializa como 0(não tem peão)
      m_pawn(false) {
    QObject::connect(this, SIGNAL(clicked(bool)),
                     this, SLOT(handlePawn()));
}

Tile::~Tile() {
}

void Tile::setPos(int pos) {
    m_pos = pos;
}

void Tile::setSafe(bool safe) {
    m_safe = safe;
}

void Tile::setPawn(bool pawn,int currentPlayer) { //modificar para todos
    m_pawn = pawn;
    if (pawn) {  //se setar o peão
        switch (currentPlayer) {
        case 1:
            this->setIcon(QPixmap(":/pawns/red")); //coloca a imagem no peaozinho la
            this->pawnID = 1;
            break;
        case 2:
            this->setIcon(QPixmap(":/pawns/yellow")); //coloca a imagem no peaozinho la
            this->pawnID = 2;
            break;
        case 3:
            this->setIcon(QPixmap(":/pawns/blue")); //coloca a imagem no peaozinho la
            this->pawnID = 3;
            break;
        case 4:
            this->setIcon(QPixmap(":/pawns/green")); //coloca a imagem no peaozinho la
            this->pawnID = 4;
            break;
        default:
            break;
        }
        qDebug() << "peão "<< this->pawnID<<" no tile:" << this->m_pos;
    } else {
        this->setIcon(QPixmap()); //tira a imagem do peaozinho
        this->pawnID = 0;
    }
}

void Tile::handlePawn() {
    qDebug() << "pawnID: " << pawnID;
    if (m_pawn){
        emit movePawn(this->pawnID);

    }
        //movePawn chama a função handlePlay da classe Ludo
}
