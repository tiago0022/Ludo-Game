#include "Dice.h"
#include <QTime>

Dice::Dice(QWidget *parent)
    : QPushButton(parent) {

    qsrand(QTime::currentTime().msec());

    QObject::connect(this, SIGNAL(clicked(bool)),
                     this, SLOT(handleClick()));
}

Dice::~Dice() {
}

void Dice::reset() {
    this->setIcon(QPixmap(":/dices/face1"));

    // Mudar a cor de fundo pra vermelho.
}

void Dice::handleClick() {
    int r = (qrand() % 6) + 1;
    QPixmap dice = QPixmap(
        QString(":/dices/face%1").arg(r));
    this->setIcon(dice);

    emit roll(r);

    // Deveria mudar a cor de fundo para o proximo jogador.
    // Idealmente não aqui, mas usando signals/slots.
}
