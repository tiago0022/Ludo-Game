#ifndef TILE_H
#define TILE_H

#include <QWidget>

class Tile : public QWidget
{
    Q_OBJECT
    Q_PROPERTY(bool safe READ safe WRITE setSafe)

public:
    explicit Tile(QWidget *parent = 0);
    virtual ~Tile();

    bool safe() const { return m_safe;}
    void setSafe(bool safe);

signals:

public slots:

private:
    bool m_safe;

#endif // TILE_H
