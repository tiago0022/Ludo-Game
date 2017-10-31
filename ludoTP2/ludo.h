#ifndef LUDO_H
#define LUDO_H

#include <QMainWindow>
#include <QDebug>
#include <QList>
#include <QPushButton>
#include <tile.h>

namespace Ui {
class Ludo;
}

class Ludo : public QMainWindow
{
    Q_OBJECT

public:
    explicit Ludo(QWidget *parent = 0);
    ~Ludo();

private:
    Ui::Ludo *ui;
    QList<Tile*> m_tiles;
};

private slots:
    handleSlots();
};

#endif // LUDO_H
