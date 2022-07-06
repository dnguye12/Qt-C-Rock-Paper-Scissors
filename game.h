#ifndef GAME_H
#define GAME_H

#include <QDialog>

namespace Ui {
class Game;
}

class Game : public QDialog
{
    Q_OBJECT

public:
    explicit Game(QWidget *parent = nullptr);
    ~Game();

private slots:
    void on_toolButton_4_clicked();

    void on_BtnPaper_clicked();

    void on_BtnRock_clicked();

    void on_BtnSci_clicked();

    void sci();
    void paper();
    void rock();

private:
    Ui::Game *ui;

    int cpuChoice();

signals:
    void chooseSci();
    void choosePaper();
    void chooseRock();
};

#endif // GAME_H
