#ifndef PLAYERINFO_H
#define PLAYERINFO_H

#include <QWidget>

namespace Ui {
    class PlayerInfo;
}

class PlayerInfo : public QWidget {
    Q_OBJECT
    Q_PROPERTY(int id READ id WRITE setId)

public:
    explicit PlayerInfo(QWidget *parent = 0);
    ~PlayerInfo();

    int id() const { return m_id; }
    void setId(int id);

    bool turn() const { return m_turn; }
    void setTurn(bool turn);

private:
    Ui::PlayerInfo *ui;
    int m_id;
    bool m_turn;

signals:
    void changeTurn(int); //sinal emitido toda vez
    //que mudar de vez,envia o id do jogador novo


};

#endif // PLAYERINFO_H
