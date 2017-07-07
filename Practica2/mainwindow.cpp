#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "ui_formkmine.h"
#include <QMessageBox>
#include <QAction>
#include <QMenuBar>
#include <QToolBar>
#include <QActionGroup>
#include <QMenu>
//#include "mine.h"
#include <time.h>
#include <math.h>
#include <QString>
#include <QFlags>
#include <QTimer>
#include <QTime>
#include <QElapsedTimer>
#include <formkmine.h>
#include <QDialog>
#include <formkmine.h>



MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    QActionGroup *DMine=new QActionGroup(ui->menu_2);
    DMine->addAction(ui->action1);
     DMine->addAction(ui->action2);
      DMine->addAction(ui->action3);
      DMine->setExclusive(true);
      ui->menu_2->addSeparator()->setText(tr("Дизайн мины"));
//    QMenu *Options = menuBar()->addMenu("Настройки");
//    QActionGroup *Diff = new QActionGroup(Options);
//     QActionGroup *DzMine = new QActionGroup(Options);
//    QAction *Easy = new QAction  ("Легкий (6x6)",Diff);
//    QAction *Normal= new QAction  ("Нормальный (9x9)",Diff);
//    QAction *Hard =new QAction ("Тяжелый (9x16)",Diff);
//    QAction *Mine1 = new QAction ("1 Стиль",DzMine);
//    Mine1->setIcon(QIcon(":/icon/rg1024_sea_mine.png"));
//    QAction *Mine2 = new QAction ("2 Стиль",DzMine);
//    Mine2->setIcon(QIcon(":/icon/7.png"));
//    QAction *Mine3 = new QAction ("3 Стиль",DzMine);
//    Mine3->setIcon(QIcon(":/icon/Мина.png"));

// //   QAction *DMine =new QAction (tr("Дизайн мины"),this);
//  //   connect(DMine,SIGNAL(triggered()),this,SLOT(DMine()));
//    DzMine->addAction(Mine1);
//    DzMine->addAction(Mine2);
//     DzMine->addAction(Mine3);
//     Mine1->setChecked(true);
//     Mine1->setCheckable(true);
//      Mine2->setCheckable(true);
//       Mine3->setCheckable(true);
//       DzMine->setExclusive(true);
//    Diff->addAction(Easy);
//    Diff->addAction(Normal);
//     Diff->addAction(Hard);
//    Easy->setCheckable(true);
//    Easy->setChecked(true);
//    Normal->setCheckable(true);
//    Hard->setCheckable(true);
//    Diff->setExclusive(true);
//     Options->addSeparator()->setText(tr("Дизайн мины"));
//   Options->addActions(DzMine->actions());
//   Options->addSeparator()->setText(tr("Сложность"));
//   Options->addActions(Diff->actions());
  // connect(Diff,SIGNAL(triggered(QAction*)),SLOT(actionTriggered(QAction*)));
 // connect(toolButton_2,SIGNAL(rightClicked()),this,SLOT(onRightClicked()));
  // connect (ui->toolButton_2,SIGNAL (Left_Mouse()),this,SLOT (leftmouse()));
//connect (ui->action_2,SIGNAL(NewGame()),this,SLOT(GenPole()));
   ui->tableWidget->setRowCount(6);
   ui->tableWidget->setColumnCount(6);

 //  ui->timeEdit->setTime(0);
 //  QTimer timer;
 //  timer.start(1000);
  // connect(&timer, SIGNAL(timeout()), this, SLOT(slotTimeout()));
}
//void MainWindow::Actiontimer ()
//{
//    QTime time = new QTime (this);

//    ui->timeEdit->setTime(time);
//}

  // void MainWindow::slotTimeout()
   //{
     //  QTime time = ui->timeEdit->time().addSecs(+1);
      // ui->timeEdit->setTime(time);

      // if (time == QTime(0, 0))

   //}
 //  connect(ui->toolButton_2,SIGNAL(rClicked()),this,SLOT(on_action_2_triggered()));
 //  connect(Mine1,SIGNAL (Mine1(int i)),this,SLOT (Dzmine1()));
 //  connect(Mine2,SIGNAL (Mine2(int i)),this,SLOT (Dzmine2()));
 //  connect(Mine3,SIGNAL (Mine3(int i)),this,SLOT (Dzmine3()));
   //ui->tableWidget->setEnabled(false);




MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_action_3_triggered()
{
    close();
}

//void MainWindow::newgame()
//{
//    GenPole();
//}

void MainWindow::on_action_triggered()
{
    QMessageBox Howplay;
    Howplay.setText("Игрок открывает ячейки, стараясь не открыть ячейку с миной. Открыв ячейку с миной, он проигрывает. Если под открытой ячейкой мины нет, то в ней появляется число, показывающее, сколько ячеек, соседствующих с только что открытой, «заминировано» (в каждом варианте игры соседство определяется по-своему); используя эти числа, игрок пытается рассчитать расположение мин, однако иногда даже в середине и в конце игры некоторые ячейки всё же приходится открывать наугад. Если под соседними ячейками тоже нет мин, то открывается некоторая «не заминированная» область до ячеек, в которых есть цифры. «Заминированные» ячейки игрок может пометить, чтобы случайно не открыть их. Открыв все «не заминированные» ячейки, игрок выигрывает.");
    Howplay.exec();
}

//void MainWindow:: DMine()
//{
//    Mine *wnd = new Mine(this);
//    wnd->show();
//}

//void leftmouse ()
//{
//QMessageBox qq;
//qq.setText("sosi");
//qq.exec();
//}


//void MainWindow::mousePressEvent(QGraphicsSceneMouseEvent *event)
//{
//
//}

void rClicked()
{
    QMessageBox msg;
    msg.setText("райт клик!");
   msg.exec();

}
void winsch (int win)
{
    if (win==31) {
        QMessageBox msg;
          //closeallbutton ();
        msg.setText("Поздравляем.Вы выйграли!");
        msg.exec();
    }
}

int kmine (int value)
{
return value;
}





void MainWindow::on_toolButton_2_clicked()
{
    ui->toolButton_2->close();

 //   bool QFlags::testFlag ( Enum flag ) const;


  //  QTableWidgetItem *itm = new QTableWidgetItem();
    QString text;
    text=ui->tableWidget->item(0,0)->text();
  if (text=="") {
      closeallbutton ();
    QMessageBox msg;
    msg.setText("Вы проиграли!");
    enableoff ();
    msg.exec();
  }
  else {
      win++;
      emit winsch(win);
  }

    }



void MainWindow::on_toolButton_3_clicked()
{
  ui->toolButton_3->close();
  QString text;
  text=ui->tableWidget->item(3,0)->text();

if (text=="") {
  QMessageBox msg;
    closeallbutton ();
  msg.setText("Вы проиграли!");
  enableoff ();
  msg.exec();
}
else {
    win++;
    emit winsch(win);
}
}



void MainWindow::on_toolButton_4_clicked()
{
    ui->toolButton_4->close();
    QString text;
    text=ui->tableWidget->item(0,1)->text();
  if (text=="") {
    QMessageBox msg;
      closeallbutton ();
    msg.setText("Вы проиграли!");
    enableoff ();
    msg.exec();
  }
  else { win++;
      emit winsch(win);
  }


}

void MainWindow::on_toolButton_5_clicked()
{
    ui->toolButton_5->close();
    QString text;
    text=ui->tableWidget->item(0,3)->text();

  if (text=="") {
    QMessageBox msg;
      closeallbutton ();
    msg.setText("Вы проиграли!");
    enableoff ();
    msg.exec();
  }
  else {
      win++;
      emit winsch(win);
  }

}

void MainWindow::on_toolButton_6_clicked()
{
    ui->toolButton_6->close();
    QString text;
    text=ui->tableWidget->item(0,4)->text();
  if (text=="") {
    QMessageBox msg;
      closeallbutton ();
    msg.setText("Вы проиграли!");
    enableoff ();
    msg.exec();
  }
  else {
      win++;
      emit winsch(win);
  }

}

void MainWindow::on_toolButton_7_clicked()
{
    ui->toolButton_7->close();
    QString text;
    text=ui->tableWidget->item(1,5)->text();
  if (text=="") {
    QMessageBox msg;
      closeallbutton ();
    msg.setText("Вы проиграли!");
    enableoff ();
    msg.exec();
  }
  else {
      win++;
      emit winsch(win);
  }

}

void MainWindow::on_toolButton_9_clicked()
{
    ui->toolButton_9->close();
    QString text;
    text=ui->tableWidget->item(0,2)->text();
  if (text=="") {
    QMessageBox msg;
      closeallbutton ();
    msg.setText("Вы проиграли!");
  enableoff ();
    msg.exec();
  }
  else {
      win++;
      emit winsch(win);
  }

}

void MainWindow::on_toolButton_12_clicked()
{
    ui->toolButton_12->close();
    QString text;
    text=ui->tableWidget->item(1,1)->text();
  if (text=="") {
    QMessageBox msg;
      closeallbutton ();
    msg.setText("Вы проиграли!");
    enableoff ();
    msg.exec();
  }
  else {
      win++;
      emit winsch(win);
  }

}


void MainWindow::on_toolButton_13_clicked()
{
    ui->toolButton_13->close();
    QString text;
    text=ui->tableWidget->item(1,2)->text();
  if (text=="") {
    QMessageBox msg;
      closeallbutton ();
    msg.setText("Вы проиграли!");
    enableoff ();
    msg.exec();
  }
  else {
      win++;
      emit winsch(win);
  }

}

void MainWindow::on_toolButton_8_clicked()
{
    ui->toolButton_8->close();
    QString text;
    text=ui->tableWidget->item(3,5)->text();
  if (text=="") {
    QMessageBox msg;
      closeallbutton ();
    msg.setText("Вы проиграли!");
    enableoff ();
    msg.exec();
  }
  else {
      win++;
      emit winsch(win);
  }

}


void MainWindow::on_toolButton_10_clicked()
{
    ui->toolButton_10->close();
    QString text;
    text=ui->tableWidget->item(2,5)->text();
  if (text=="") {
    QMessageBox msg;
      closeallbutton ();
    msg.setText("Вы проиграли!");
    enableoff ();
    msg.exec();

  }
  else {
      win++;
      emit winsch(win);
  }

}

void MainWindow::on_toolButton_11_clicked()
{
    ui->toolButton_11->close();
    QString text;
    text=ui->tableWidget->item(0,5)->text();
  if (text=="") {
    QMessageBox msg;
      closeallbutton ();
    msg.setText("Вы проиграли!");
    enableoff ();
    msg.exec();
  }
  else {
      win++;
      emit winsch(win);
  }

}


void MainWindow::on_toolButton_15_clicked()
{
    ui->toolButton_15->close();
    QString text;
    text=ui->tableWidget->item(1,0)->text();
  if (text=="") {
    QMessageBox msg;
      closeallbutton ();
    msg.setText("Вы проиграли!");
    enableoff ();
    msg.exec();
  }
  else {
      win++;
      emit winsch(win);
  }

}

void MainWindow::on_toolButton_18_clicked()
{
    ui->toolButton_18->close();
    QString text;
    text=ui->tableWidget->item(1,3)->text();
  if (text=="") {
    QMessageBox msg;
      closeallbutton ();
    msg.setText("Вы проиграли!");
    enableoff ();
    msg.exec();
  }
  else {
      win++;
      emit winsch(win);
  }

}

void MainWindow::on_toolButton_19_clicked()
{
    ui->toolButton_19->close();
    QString text;
    text=ui->tableWidget->item(2,1)->text();
  if (text=="") {
    QMessageBox msg;
      closeallbutton ();
    msg.setText("Вы проиграли!");
    enableoff ();
    msg.exec();
  }
  else {
      win++;
      emit winsch(win);
  }

}

void MainWindow::on_toolButton_14_clicked()
{
    ui->toolButton_14->close();
    QString text;
    text=ui->tableWidget->item(4,5)->text();
  if (text=="") {
    QMessageBox msg;
      closeallbutton ();
    msg.setText("Вы проиграли!");
    enableoff ();
    msg.exec();
  }
  else {
      win++;
      emit winsch(win);
  }

}

void MainWindow::on_toolButton_16_clicked()
{
    ui->toolButton_16->close();
    QString text;
    text=ui->tableWidget->item(5,5)->text();
  if (text=="") {
    QMessageBox msg;
      closeallbutton ();
    msg.setText("Вы проиграли!");
    enableoff ();
    msg.exec();
  }
  else {
      win++;
      emit winsch(win);
  }
}

void MainWindow::on_toolButton_17_clicked()
{
    ui->toolButton_17->close();
    QString text;
    text=ui->tableWidget->item(1,4)->text();
  if (text=="") {
    QMessageBox msg;
      closeallbutton ();
    msg.setText("Вы проиграли!");
    enableoff ();
    msg.exec();
  }
  else {
      win++;
      emit winsch(win);
  }
}

void MainWindow::on_toolButton_21_clicked()
{
    ui->toolButton_21->close();
    QString text;
    text=ui->tableWidget->item(2,0)->text();
  if (text=="") {
    QMessageBox msg;
      closeallbutton ();
    msg.setText("Вы проиграли!");
    enableoff ();
    msg.exec();
  }
  else {
      win++;
      emit winsch(win);
  }
}

void MainWindow::on_toolButton_24_clicked()
{
    ui->toolButton_24->close();
    QString text;
    text=ui->tableWidget->item(2,2)->text();
  if (text=="") {
    QMessageBox msg;
      closeallbutton ();
    msg.setText("Вы проиграли!");
    enableoff ();
    msg.exec();
  }
  else {
      win++;
      emit winsch(win);
  }
}

void MainWindow::on_toolButton_25_clicked()
{
    ui->toolButton_25->close();
    QString text;
    text=ui->tableWidget->item(2,3)->text();
  if (text=="") {
    QMessageBox msg;
      closeallbutton ();
    msg.setText("Вы проиграли!");
    enableoff ();
    msg.exec();
  }
  else {
      win++;
      emit winsch(win);
  }
}

void MainWindow::on_toolButton_20_clicked()
{
    ui->toolButton_20->close();
    QString text;
    text=ui->tableWidget->item(3,3)->text();
  if (text=="") {
    QMessageBox msg;
      closeallbutton ();
    msg.setText("Вы проиграли!");
    enableoff ();
    msg.exec();
  }
  else {
      win++;
      emit winsch(win);
  }
}

void MainWindow::on_toolButton_22_clicked()
{
    ui->toolButton_22->close();
    QString text;
    text=ui->tableWidget->item(3,4)->text();
  if (text=="") {
    QMessageBox msg;
      closeallbutton ();
    msg.setText("Вы проиграли!");
    enableoff ();
    msg.exec();
  }
  else {
      win++;
      emit winsch(win);
  }
}

void MainWindow::on_toolButton_23_clicked()
{
    ui->toolButton_23->close();
    QString text;
    text=ui->tableWidget->item(2,4)->text();
  if (text=="") {
    QMessageBox msg;
      closeallbutton ();
    msg.setText("Вы проиграли!");
    enableoff ();
    msg.exec();
  }
  else {
      win++;
      emit winsch(win);
  }
}

void MainWindow::on_toolButton_27_clicked()
{
    ui->toolButton_27->close();
    QString text;
    text=ui->tableWidget->item(5,0)->text();
  if (text=="") {
    QMessageBox msg;
      closeallbutton ();
    msg.setText("Вы проиграли!");
    enableoff ();
    msg.exec();
  }
  else {
      win++;
      emit winsch(win);
  }
}

void MainWindow::on_toolButton_30_clicked()
{
    ui->toolButton_30->close();
    QString text;
    text=ui->tableWidget->item(3,1)->text();
  if (text=="") {
    QMessageBox msg;
      closeallbutton ();
    msg.setText("Вы проиграли!");
    enableoff ();
    msg.exec();
  }
  else {
      win++;
      emit winsch(win);
  }
}

void MainWindow::on_toolButton_31_clicked()
{
    ui->toolButton_31->close();
    QString text;
    text=ui->tableWidget->item(3,2)->text();
  if (text=="") {
    QMessageBox msg;
      closeallbutton ();
    msg.setText("Вы проиграли!");
    enableoff ();
    msg.exec();
  }
  else {
      win++;
      emit winsch(win);
  }
}

void MainWindow::on_toolButton_26_clicked()
{
    ui->toolButton_26->close();
    QString text;
    text=ui->tableWidget->item(4,2)->text();
  if (text=="") {
    QMessageBox msg;
      closeallbutton ();
    msg.setText("Вы проиграли!");
    enableoff ();
    msg.exec();
  }
  else {
      win++;
      emit winsch(win);
  }
}


void MainWindow::on_toolButton_28_clicked()
{
    ui->toolButton_28->close();
    QString text;
    text=ui->tableWidget->item(4,3)->text();
  if (text=="") {
    QMessageBox msg;
      closeallbutton ();
    msg.setText("Вы проиграли!");
    enableoff ();
    msg.exec();
  }
  else {
      win++;
      emit winsch(win);
  }
}


void MainWindow::on_toolButton_29_clicked()
{
     ui->toolButton_29->close();
     QString text;
     text=ui->tableWidget->item(4,4)->text();
   if (text=="") {
     QMessageBox msg;
       closeallbutton ();
     msg.setText("Вы проиграли!");
     enableoff ();
     msg.exec();
   }
   else {
       win++;
       emit winsch(win);
   }
}

void MainWindow::on_toolButton_33_clicked()
{
     ui->toolButton_33->close();
     QString text;
     text=ui->tableWidget->item(4,0)->text();
   if (text=="") {
     QMessageBox msg;
       closeallbutton ();
     msg.setText("Вы проиграли!");
     enableoff ();
     msg.exec();
   }
   else {
       win++;
       emit winsch(win);
   }
}

void MainWindow::on_toolButton_36_clicked()
{
     ui->toolButton_36->close();
     QString text;
     text=ui->tableWidget->item(4,1)->text();
   if (text=="") {
     QMessageBox msg;
       closeallbutton ();
     msg.setText("Вы проиграли!");
     enableoff ();
     msg.exec();
   }
   else {
       win++;
       emit winsch(win);
   }
}

void MainWindow::on_toolButton_37_clicked()
{
     ui->toolButton_37->close();
     QString text;
     text=ui->tableWidget->item(5,1)->text();
   if (text=="") {
     QMessageBox msg;
       closeallbutton ();
     msg.setText("Вы проиграли!");
     enableoff ();
     msg.exec();
   }
   else {
       win++;
       emit winsch(win);
   }
}

void MainWindow::on_toolButton_32_clicked()
{
     ui->toolButton_32->close();
     QString text;
     text=ui->tableWidget->item(5,2)->text();
   if (text=="") {
     QMessageBox msg;
       closeallbutton ();
     msg.setText("Вы проиграли!");
     enableoff ();
     msg.exec();
   }
   else {
       win++;
       emit winsch(win);
   }
}

void MainWindow::on_toolButton_34_clicked()
{
     ui->toolButton_34->close();
     QString text;
     text=ui->tableWidget->item(5,3)->text();
   if (text=="") {
     QMessageBox msg;
       closeallbutton ();
     msg.setText("Вы проиграли!");
     enableoff ();
     msg.exec();
   }
   else {
       win++;
       emit winsch(win);
   }
}

void MainWindow::on_toolButton_38_clicked()
{
     ui->toolButton_38->close();
     QString text;
     text=ui->tableWidget->item(5,4)->text();
   if (text=="") {
     QMessageBox msg;
       closeallbutton ();
     msg.setText("Вы проиграли!");
     enableoff ();

     msg.exec();
   }

   else {
       win++;
       emit winsch(win);
   }
}

void MainWindow::on_toolButton_clicked()
{
    enableon();
   showbutton();
   win=0;

}
void MainWindow::showbutton () {
    ui->toolButton_2->show();
    ui->toolButton_3->show();
    ui->toolButton_4->show();
    ui->toolButton_5->show();
    ui->toolButton_6->show();
    ui->toolButton_7->show();
    ui->toolButton_8->show();
    ui->toolButton_9->show();
    ui->toolButton_10->show();
    ui->toolButton_11->show();
    ui->toolButton_12->show();
    ui->toolButton_13->show();
    ui->toolButton_14->show();
    ui->toolButton_15->show();
    ui->toolButton_16->show();
    ui->toolButton_17->show();
    ui->toolButton_18->show();
    ui->toolButton_19->show();
    ui->toolButton_20->show();
    ui->toolButton_21->show();
    ui->toolButton_22->show();
    ui->toolButton_23->show();
    ui->toolButton_24->show();
    ui->toolButton_25->show();
    ui->toolButton_26->show();
    ui->toolButton_27->show();
    ui->toolButton_28->show();
    ui->toolButton_29->show();
    ui->toolButton_30->show();
    ui->toolButton_31->show();
    ui->toolButton_32->show();
    ui->toolButton_33->show();
    ui->toolButton_34->show();
    ui->toolButton_36->show();
    ui->toolButton_37->show();
    ui->toolButton_38->show();
}

//int **arr (double a[6][6])
//{
//    double **arr=new double*[6];
// for (int i=0;i<6;i++) {
//     b[i]=new double [6];
//    for (int j=0;j<6;j++) {
 //       b[i][j]=a[i][j];
 //   }

//}
 //return b;
//}
void MainWindow::enableoff () {
    ui->toolButton_2->setEnabled(false);
    ui->toolButton_3->setEnabled(false);
    ui->toolButton_4->setEnabled(false);
    ui->toolButton_5->setEnabled(false);
    ui->toolButton_6->setEnabled(false);
    ui->toolButton_7->setEnabled(false);
    ui->toolButton_8->setEnabled(false);
    ui->toolButton_9->setEnabled(false);
    ui->toolButton_10->setEnabled(false);
    ui->toolButton_11->setEnabled(false);
    ui->toolButton_12->setEnabled(false);
    ui->toolButton_13->setEnabled(false);
    ui->toolButton_14->setEnabled(false);
    ui->toolButton_15->setEnabled(false);
    ui->toolButton_16->setEnabled(false);
    ui->toolButton_17->setEnabled(false);
    ui->toolButton_18->setEnabled(false);
    ui->toolButton_19->setEnabled(false);
    ui->toolButton_20->setEnabled(false);
    ui->toolButton_21->setEnabled(false);
    ui->toolButton_22->setEnabled(false);
    ui->toolButton_23->setEnabled(false);
    ui->toolButton_24->setEnabled(false);
    ui->toolButton_25->setEnabled(false);
    ui->toolButton_26->setEnabled(false);
    ui->toolButton_27->setEnabled(false);
    ui->toolButton_28->setEnabled(false);
    ui->toolButton_29->setEnabled(false);
    ui->toolButton_30->setEnabled(false);
    ui->toolButton_31->setEnabled(false);
    ui->toolButton_32->setEnabled(false);
    ui->toolButton_33->setEnabled(false);
    ui->toolButton_34->setEnabled(false);
    ui->toolButton_36->setEnabled(false);
    ui->toolButton_37->setEnabled(false);
    ui->toolButton_38->setEnabled(false);

}
 void MainWindow::closeallbutton () {
     ui->toolButton_2->close();
     ui->toolButton_3->close();
     ui->toolButton_4->close();
     ui->toolButton_5->close();
     ui->toolButton_6->close();
     ui->toolButton_7->close();
     ui->toolButton_8->close();
     ui->toolButton_9->close();
     ui->toolButton_10->close();
     ui->toolButton_11->close();
     ui->toolButton_12->close();
     ui->toolButton_13->close();
     ui->toolButton_14->close();
     ui->toolButton_15->close();
     ui->toolButton_16->close();
     ui->toolButton_17->close();
     ui->toolButton_18->close();
     ui->toolButton_19->close();
     ui->toolButton_20->close();
     ui->toolButton_21->close();
     ui->toolButton_22->close();
     ui->toolButton_23->close();
     ui->toolButton_24->close();
     ui->toolButton_25->close();
     ui->toolButton_26->close();
     ui->toolButton_27->close();
     ui->toolButton_28->close();
     ui->toolButton_29->close();
     ui->toolButton_30->close();
     ui->toolButton_31->close();
     ui->toolButton_32->close();
     ui->toolButton_33->close();
     ui->toolButton_34->close();
     ui->toolButton_36->close();
     ui->toolButton_37->close();
     ui->toolButton_38->close();
 }

void MainWindow::enableon () {
ui->toolButton_2->setEnabled(true);
ui->toolButton_3->setEnabled(true);
ui->toolButton_4->setEnabled(true);
ui->toolButton_5->setEnabled(true);
ui->toolButton_6->setEnabled(true);
ui->toolButton_7->setEnabled(true);
ui->toolButton_8->setEnabled(true);
ui->toolButton_9->setEnabled(true);
ui->toolButton_10->setEnabled(true);
ui->toolButton_11->setEnabled(true);
ui->toolButton_12->setEnabled(true);
ui->toolButton_13->setEnabled(true);
ui->toolButton_14->setEnabled(true);
ui->toolButton_15->setEnabled(true);
ui->toolButton_16->setEnabled(true);
ui->toolButton_17->setEnabled(true);
ui->toolButton_18->setEnabled(true);
ui->toolButton_19->setEnabled(true);
ui->toolButton_20->setEnabled(true);
ui->toolButton_21->setEnabled(true);
ui->toolButton_22->setEnabled(true);
ui->toolButton_23->setEnabled(true);
ui->toolButton_24->setEnabled(true);
ui->toolButton_25->setEnabled(true);
ui->toolButton_26->setEnabled(true);
ui->toolButton_27->setEnabled(true);
ui->toolButton_28->setEnabled(true);
ui->toolButton_29->setEnabled(true);
ui->toolButton_30->setEnabled(true);
ui->toolButton_31->setEnabled(true);
ui->toolButton_32->setEnabled(true);
ui->toolButton_33->setEnabled(true);
ui->toolButton_34->setEnabled(true);
ui->toolButton_36->setEnabled(true);
ui->toolButton_37->setEnabled(true);
ui->toolButton_38->setEnabled(true);

}
void MainWindow::on_action_2_triggered()
{

     win=0;
     emit winsch(win);
    enableon ();
    showbutton();
double a[8][8];
//QTimer *time = new QTimer (this);
//connect (time,SIGNAL(timeout()),this,SLOT(Actiontimer()));
//time->start(1000);
//slotTimeout();
   //  a[0][0]=9;
//FormkMine *fr = new FormkMine();
int d=5;
// d = fr->ui->horizontalSlider->sliderPosition();

    srand(time(NULL));
    for ( int b=0;b<d;b++) {
      int i = rand () % 6;
      int j = rand ()%  6;
      if (a[i][j]==9)
          b--;


      a[i][j]=9;
    }

    for (int i=0;i<6;i++) {
        for (int j=0;j<6;j++) {
            if (a[i][j]!=9)
                a[i][j]=0;
        }
    }

  int c;
    for (int i=0;i<6;i++) {
        for (int j=0;j<6;j++) {
            if (a[i][j]==0) {
                c=0;
                if (a[i+1][j]==9 ) c++;
                if (a[i][j+1]==9 ) c++;
                if (a[i+1][j+1]==9 ) c++;
                if (a[i-1][j]==9 )   c++;
                if (a[i][j-1]==9 )   c++;
                if (a[i-1][j-1]==9) c++;
                if (a[i+1][j-1]==9 ) c++;
                if (a[i-1][j+1]==9 ) c++;
                a[i][j]=c;
                 c=0;

            }
            }
             }
 //   QString str;
 //   QIcon icon(":/icon/rg1024_sea_mine.png");


    for (int i=0;i<6;i++) {

        for (int j=0;j<6;j++) {
 //        str+=QString::number(a[i][j]);
            if (a[i][j]==9){
            QTableWidgetItem *itm1 = new QTableWidgetItem;
            if (ui->action1->isChecked()) {
                 QIcon icon(":/icon/rg1024_sea_mine.png");
            itm1->setIcon(icon);
            }
        if (ui->action2->isChecked()) {
              QIcon icon(":/icon/Мина.png");
              itm1->setIcon(icon);
        }
        if (ui->action3->isChecked()) {
                QIcon icon(":/icon/7.png");
                 itm1->setIcon(icon);}
            ui->tableWidget->setItem(i,j,itm1);
            }
            else {

            QTableWidgetItem *itm = new QTableWidgetItem (QString::number(a[i][j]));


            ui->tableWidget->setItem(i,j,itm);
            }




            }

 //   str.prepend("  ");
 //   str.append("   ");
        }



    }



   //  ui->textEdit->setText (str);
   //  ui->textEdit->QTextEdit::setReadOnly (true);
     //  ui->textEdit->QTextEdit::

//        for (int i=0;i<6;i++) {
//            for (int j=0;j<6;j++) {

                // ui->textEdit->setText (str);
//    QTableWidgetItem *itm = new QTableWidgetItem (tr(" %i ".a[i][j]));
 //   ui->tableWidget->setItem(i,j,itm);


void MainWindow::on_action_5_triggered()
{
   FormkMine *fr = new FormkMine();
   fr->show();
}



//void FormkMine::on_horizontalSlider_actionTriggered(int action)
//{
//    va=ui->horizontalSlider->sliderPosition();
//}
