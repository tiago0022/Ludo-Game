#include "tile.h"

Tile::Tile(QWidget *parent) : QWidget(parent)
    : QPushButton(parent), m_safe(false) {
}

Tile::Tile() {

}

void Tile::setSafe(bool safe) {
    m_safe = safe;
}

