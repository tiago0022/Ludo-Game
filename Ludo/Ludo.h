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
    void gameData(int pawnID,int currentPlayer);

signals:
    void enableDice(bool enDis);
    void disableDice(bool enDis);
    void rollDiceAgain(bool play); //sinal emitido toda vez que o jogador fizer uma jogada
//    void redFinished();

private:
    Ui::Ludo *ui;
    QList<Tile*> m_tiles; //Lista de casas
    QList<QPushButton*> m_redrun; // lista de casas onde os peoes ficam inicialmente
    QList<QPushButton*> m_yellowrun;
    QList<QPushButton*> m_bluerun;
    QList<QPushButton*> m_greenrun;
    int m_pos; //posição do peão
    int m_dice; // valor do dado
    bool playAgain;
    bool availableMovement; //indica se o jogador jogou o dado ou não
    int movements;
    int currentPlayer; //toda vez que der um set turn, mudar essa valor
    bool hasPawnsOntiles;
    int redPawnsOnRuns;
    int yellowPawnsOnRuns;
    int bluePawnsOnRuns;
    int greenPawnsOnRuns;
    bool changeTurnOnNextRoll;

private slots:
    void handleDice(int n);
    void handleHome(int n,int homeColor);
    void handlePlay(int pawnID);
    void reset();
    void handleTurn(int n); //recebe changeTurn
    void setAvailableMovement();
    void handleRun();

};

#endif // LUDO_H
