#ifndef TILE_H
#define TILE_H

#include <QPushButton>

class Tile : public QPushButton
{
    Q_OBJECT
public:
    explicit Tile(QWidget *parent = nullptr);
    virtual ~Tile();
signals:

public slots:
};

#endif // TILE_H
