#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QToolBar>
#include <QMenuBar>
#include <QAction>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QMenu *Menu = menuBar()->addMenu("Меню");
    QMenu *Options =  menuBar()->addMenu ("Настройка");
    QMenu *Help = menuBar()->addMenu("Справка");

    QAction *Start = new QAction ("Старт");


    QAction *Exit = new QAction ("Выход");

   QAction *Howplay = new QAction ("Как играть");
   connect (Howplay,SIGNAL(triggered()),this,SLOT(actions()));
   QAction *Mine = new QAction ("Количество мин");
   QAction *Pole = new QAction ("размер поля");

    Menu->addAction(Start);
    Menu->addAction(Exit);
    Options->addAction(Mine);
    Options->addAction(Pole);
    Help->addAction(Howplay);

}

MainWindow::~MainWindow()
{
    delete ui;
}
