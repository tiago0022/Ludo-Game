#include "Tile.h"
#include <QDebug>

Tile::Tile(QWidget *parent)
    : QPushButton(parent),
      m_pos(-1),
      m_safe(false),
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

void Tile::setPawn(bool pawn) {
    m_pawn = pawn;
    if (pawn) {
        this->setIcon(QPixmap(":/pawns/red"));
    } else {
        this->setIcon(QPixmap());
    }
}

void Tile::handlePawn() {
    if (m_pawn)
        emit movePawn();
}
