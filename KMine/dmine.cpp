#include "dmine.h"
#include "ui_dmine.h"

DMine::DMine(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::DMine)
{
    ui->setupUi(this);
}

DMine::~DMine()
{
    delete ui;
}
