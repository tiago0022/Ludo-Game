#ifndef DICE_H
#define DICE_H

#include <QPushButton>

class Dice : public QPushButton {
    Q_OBJECT

public:
    explicit Dice(QWidget *parent = 0);
    virtual ~Dice();
    void setRolledDice(bool n);

public slots:
    void reset();

signals:
    void roll(int n);

private:
    bool enable; //se pode rolar o dado ou não
    bool rolledDice;
    int movements;//nao sei se vou usar isso

private slots:
    void ableToRollAgain();
    void handleClick(bool play);
    void setDice(bool enDis);

};

#endif // DICE_H
