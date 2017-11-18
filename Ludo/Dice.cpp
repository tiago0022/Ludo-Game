#include "Dice.h"
#include <QTime>

Dice::Dice(QWidget *parent)
    : QPushButton(parent) {

    qsrand(QTime::currentTime().msec());
    //se o dado for clicado, chama a funçao handleClick
    QObject::connect(this, SIGNAL(clicked(bool)),
                     this, SLOT(handleClick(bool)));
    this->movements = 1;//nao sei se vou usar isso
    this->rolledDice = false;

    QObject::connect(this, SIGNAL(roll(int)),
                     this,SLOT(ableToRollAgain()));
}

Dice::~Dice() {
}

void Dice::reset() {
    this->setIcon(QPixmap(":/dices/face1"));

    // Mudar a cor de fundo pra vermelho.
}

void Dice::ableToRollAgain(){
    this->rolledDice = true;
}

void Dice::handleClick(bool play) {
    //gera número randomico se seta a face do dado
//    if(!this->rolledDice){
        int r = (qrand() % 6) + 1;
        QPixmap dice = QPixmap(
            QString(":/dices/face%1").arg(r));
        this->setIcon(dice);

        emit roll(r); //emite sinal indicando que o dado foi jogado
        //roll chama a função HandleDice da classe Ludo
        //roll chama a função ableToRollAgain-> caso o jogador jogue o dado
        // ele só podera joga-lo de novo se fizer uma jogada como os peoes

        // Deveria mudar a cor de fundo para o proximo jogador.
        // Idealmente não aqui, mas usando signals/slots.

//    }
}

void Dice::setRolledDice(bool n){
    this->rolledDice = n;
}
