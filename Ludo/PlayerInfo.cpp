#include "PlayerInfo.h"
#include "ui_PlayerInfo.h"
#include <QDebug>

PlayerInfo::PlayerInfo(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PlayerInfo),
    m_id(0),
    m_turn(false) {
    ui->setupUi(this);
}

PlayerInfo::~PlayerInfo() {
    delete ui;
}

void PlayerInfo::setId(int id) {
    m_id = id;
    ui->name->setText(QString("Jogador %1:").arg(id));

    QString color = "transparent";
    switch (id) {
        case 1:
            color = "#ff3333";
            break;
        case 2:
            color = "#ffff33";
            break;
        case 3:
            color = "#3333ff";
            break;
        case 4:
            color = "#33ff33";
            break;
    }

    ui->name->setStyleSheet(
       QString("color: %1;").arg(color));
}

void PlayerInfo::setTurn(bool turn) {
    if (m_turn != turn) {
        m_turn = turn;
        ui->turn->setPixmap(
            turn ? QPixmap(":/others/dot") :
                   QPixmap());
        emit changeTurn(m_id);
//        qDebug() << "troca de vez";
        // ligar esse sinal a um handleTurn no Ludo.cpp
    }
}
