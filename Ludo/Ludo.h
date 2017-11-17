#ifndef LUDO_H
#define LUDO_H

#include <QMainWindow>
#include <QList>
#include <Tile.h>

namespace Ui {
    class Ludo;
}

class Ludo : public QMainWindow {
    Q_OBJECT

public:
    explicit Ludo(QWidget *parent = 0);
    virtual ~Ludo();

//signals:
//    void redFinished();

private:
    Ui::Ludo *ui;
    QList<Tile*> m_tiles;
    QList<QPushButton*> m_redrun;
    int m_pos;
    int m_dice;

private slots:
    void handleDice(int n);
    void handleHome(int n);
    void handlePlay();
    void reset();

};

#endif // LUDO_H
