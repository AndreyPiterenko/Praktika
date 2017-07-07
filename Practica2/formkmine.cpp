//#include "formkmine.h"
#include "ui_formkmine.h"
#include <mainwindow.h>

FormkMine::FormkMine(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FormkMine)
{
    ui->setupUi(this);
    ui->spinBox->setValue(va);
}

FormkMine::~FormkMine()
{
    delete ui;
}
//void kmine (int value)
//{int d;
//    value=d;
//}

//void FormkMine::on_pushButton_clicked()
//{
//int value;
//value=ui->horizontalSlider->sliderPosition();
////ui->horizontalSlider->setValue(value);
//ui->horizontalSlider->setSliderPosition(value);
////emit kmine(value);
//hide();
//}

void FormkMine::on_pushButton_2_clicked()
{
    close();
}

void FormkMine::on_pushButton_clicked()
{
va=ui->horizontalSlider->sliderPosition();
ui->spinBox->setValue(va);

//emit kmine(value);
//ui->horizontalSlider->value(value)
//hide();

close();
}
