#include "game.h"
#include "ui_game.h"
#include "mainwindow.h"

Game::Game(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Game)
{
    ui->setupUi(this);
}

Game::~Game()
{
    delete ui;
}

void Game::on_toolButton_4_clicked()
{
    MainWindow *win = new MainWindow();

    win->show();
    close();
}

