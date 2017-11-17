#include "Home.h"
#include "ui_Home.h"
#include <QDebug>

Home::Home(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Home) {
    ui->setupUi(this);

    for (int i = 0; i < 4; i++) {
        QPushButton* b = this->findChild<QPushButton*>(
                    QString("home%1").arg(i+1));
        QObject::connect(b, SIGNAL(clicked(bool)),
                         this, SLOT(handlePawn()));

        m_pawns[i].has = false;
        m_pawns[i].button = b;
    }
}

Home::~Home() {
    delete ui;
}

void Home::setPlayer(int p) {
    switch (p) {
        case 0:
            m_icon = QPixmap(":/pawns/red");
            break;
        case 1:
            m_icon = QPixmap(":/pawns/yellow");
            break;
        default:
            Q_UNREACHABLE();
    }

    reset();
}

void Home::reset() {
    for (int i = 0; i < 4; i++) {
        m_pawns[i].has = true;
        m_pawns[i].button->setIcon(m_icon);
    }
}

void Home::removePawn(int n) {
    Q_ASSERT(n >= 0 && n < 4);

    m_pawns[n].has = false;
    m_pawns[n].button->setIcon(QPixmap());
}

void Home::handlePawn() {
    int n;
    QPushButton* b =
        qobject_cast<QPushButton*>(QObject::sender());

    if (b == ui->home1) {
        n = 0;
    } else if (b == ui->home2) {
        n = 1;
    } else if (b == ui->home3) {
        n = 2;
    } else if (b == ui->home4) {
        n = 3;
    } else {
        Q_UNREACHABLE();
    }

    if (m_pawns[n].has)
        emit pawnSelected(n);
}
