#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "game.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_BtnExit_clicked()
{
    close();
}


void MainWindow::on_BtnPlay_clicked()
{
    Game *game = new Game();
    hide();
    game->setModal(true);
    game->exec();

}

