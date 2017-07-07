#include "mine.h"
#include "ui_mine.h"

Mine::Mine(QWidget *parent) :
  QDialog(parent),
    ui(new Ui::Mine)
{
    ui->setupUi(this);
}

Mine::~Mine()
{
    delete ui;
}
