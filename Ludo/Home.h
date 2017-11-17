#ifndef HOME_H
#define HOME_H

#include <QWidget>
#include <QPushButton>

namespace Ui {
    class Home;
}

class Home : public QWidget {
    Q_OBJECT

public:
    explicit Home(QWidget *parent = 0);
    ~Home();

    void setPlayer(int p);

public slots:
    void removePawn(int n);
    void reset();

signals:
    void pawnSelected(int);

private:
    Ui::Home *ui;
    QPixmap m_icon;
    struct {
        bool has;
        QPushButton* button;
    } m_pawns[4];

private slots:
    void handlePawn();

};

#endif // HOME_H
