#ifndef TILE_H
#define TILE_H

#include <QPushButton>

class Tile : public QPushButton {
    Q_OBJECT
    Q_PROPERTY(bool safe READ safe WRITE setSafe)

public:
    explicit Tile(QWidget *parent = 0);
    virtual ~Tile();

    int pos() const { return m_pos; }
    void setPos(int pos);

    bool safe() const { return m_safe; }
    void setSafe(bool safe);

    bool hasPawn() const { return m_pawn; }
    void setPawn(bool pawn,int currentPlayer);

    int getPawnID() const { return pawnID;}

signals:
    void movePawn(int);

public slots:

private:
    int m_pos;
    bool m_safe;
    bool m_pawn; //tem peão nessa casa ou não
    int pawnID; //se tiver um peão, sabe de quem é

private slots:
    void handlePawn();

};

#endif // TILE_H
