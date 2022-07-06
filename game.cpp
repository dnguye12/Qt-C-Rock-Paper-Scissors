#include "game.h"
#include "ui_game.h"
#include "mainwindow.h"

#include <QDebug>
#include <QPixmap>


Game::Game(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Game)
{
    ui->setupUi(this);

    connect(this, &Game::choosePaper, this, &Game::paper);
    connect(this, &Game::chooseRock, this, &Game::rock);
    connect(this, &Game::chooseSci, this, &Game::sci);
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


void Game::on_BtnPaper_clicked()
{
    emit choosePaper();
}


void Game::on_BtnRock_clicked()
{
    emit chooseRock();
}


void Game::on_BtnSci_clicked()
{
    emit chooseSci();
}

void Game::sci() {
    QPixmap pm;
    pm.load(":/images/sci.png");
    ui->human->setPixmap(pm.scaled(120, 120, Qt::KeepAspectRatio, Qt::SmoothTransformation));
}

void Game::paper() {
    QPixmap pm;
    pm.load(":/images/paper.png");
    ui->human->setPixmap(pm.scaled(120, 120, Qt::KeepAspectRatio, Qt::SmoothTransformation));
}

void Game::rock() {
    QPixmap pm;
    pm.load(":/images/rock.png");
    ui->human->setPixmap(pm.scaled(120, 120, Qt::KeepAspectRatio, Qt::SmoothTransformation));

}

