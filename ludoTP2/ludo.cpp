#include "ludo.h"
#include "ui_ludo.h"

#include <QDebug>
#include <Qtime>

Ludo::Ludo(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Ludo){
    ui->setupUi(this);

    for (int i = 0; i < 52; i++) {
        Tile* t = this->findChild<Tile*>(
                    QString("tile%1".arg(i));
        Q_ASSERT(t != 0);

        m_tiles << t;
    }

    this->adjustSize();
    this->setFixedSize(this->size());

    ui->redHome(setPlayer(0);
    ui->yellowHome(setPlayer(1));

    Qobject::connect(
        ui->dice,
            SIGNAL(clicked(bool)),
            this,
            SLOT(handleDice()));

    qsrand(QTime::currentTime().msec());
}

void Ludo::handleDice() {
    int r = (qrand() % 6) + 1;
    QPixmap dice = QPixmap(QString(":/dices/face%1").arg(r));
    ui->dice->setIcon(dice);

    QPixmap p = QPixmap(":/pawns/red");
    m_tiles

    qDebug() << "Clicou" << r;

}

Ludo::~Ludo()
{
    delete ui;
}
