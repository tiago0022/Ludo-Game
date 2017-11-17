#ifndef DICE_H
#define DICE_H

#include <QPushButton>

class Dice : public QPushButton {
    Q_OBJECT

public:
    explicit Dice(QWidget *parent = 0);
    virtual ~Dice();

public slots:
    void reset();

signals:
    void roll(int n);

private:

private slots:
    void handleClick();

};

#endif // DICE_H
