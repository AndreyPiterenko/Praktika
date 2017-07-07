#include "mine.h"
#include <QWidget>
#include <QRadioButton>
#include <QAction>
#include <QToolButton>
#include <QSize>

Mine::Mine(QWidget *parent)
    : QDialog(parent)
{   QPushButton *ok = new QPushButton ("Ок");
    QPushButton *close = new QPushButton ("Назад");

    QGridLayout *mainw = new QGridLayout;
mainw->addWidget(DMine(),0,0);
 QVBoxLayout *mainwindow = new QVBoxLayout;
 QHBoxLayout *down = new QHBoxLayout;
 down->addWidget(ok);
down->addWidget(close);
connect (close,SIGNAL(clicked()),this,SLOT(close()));
 connect(ok,SIGNAL(clicked()),this,SLOT(accept()));

mainwindow->addLayout(mainw);
mainwindow->addLayout(down);
        setLayout(mainwindow);
        setWindowTitle(tr("Дизайн мины"));
        resize (300,320);

}
QGroupBox *Mine:: DMine() {
    QGroupBox *groupBox = new QGroupBox(tr("Иконки мины"));
   QRadioButton *rb1 = new QRadioButton ();
   rb1->setIcon(QIcon (":/new/prefix1/rg1024_sea_mine.png"));
   rb1->setIconSize(QSize(64, 64));
   QRadioButton *rb2 = new QRadioButton ();
   rb2->setIcon(QIcon (":/new/prefix1/7.png"));
   rb2->setIconSize(QSize(64, 64));
    QRadioButton *rb3 = new QRadioButton ();
    rb3->setIcon(QIcon (":/new/prefix1/Мина.png"));
    rb3->setIconSize(QSize(64, 64));
    rb1->setChecked(true);

    QVBoxLayout *vbox = new QVBoxLayout;
    vbox->addWidget(rb1);
    vbox->addWidget(rb2);
    vbox->addWidget(rb3);
    vbox->addStretch(1);
    groupBox->setLayout(vbox);
 //   QGroupBox *groupBox = new QGroupBox(tr("Иконки мины"));
 //   QCheckBox *cb1 = new QCheckBox ();
 //  QCheckBox *cb2 = new QCheckBox ();
 //   QCheckBox *cb3 = new QCheckBox ();
 //   cb1->setChecked(true);


//    QPushButton *ok = new QPushButton ("Ок");
//     QPushButton *close = new QPushButton ("Назад");


 //     QHBoxLayout *down = new QHBoxLayout;
 //     down->addWidget(ok);
 //    down->addWidget(close);

//    QVBoxLayout *mainwindow = new QVBoxLayout;
//    mainwindow->addLayout(vbox);
//    mainwindow->addLayout(down);
//      setLayout(mainwindow);
     //connect (close,SIGNAL(clicked()),this,SLOT(close()));
     // connect(ok,SIGNAL(clicked()),this,SLOT(accept()));
      return groupBox;
}


Mine::~Mine()
{

}

