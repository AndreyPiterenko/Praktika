#ifndef MAINWINDOW_H
#define MAINWINDOW_H




#include <QMainWindow>
#include <mine.h>
#include <QMouseEvent>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

//signals:
  //   void Left_Mouse();
signals:
  //  void win(int i);
    rClicked();
  Mine1();
    Mine2();
   Mine3();
 //  timeout();




private slots:
    void on_action_3_triggered();

    void on_action_triggered();

  //  void DMine();

   void on_toolButton_2_clicked();

   void on_toolButton_3_clicked();

   void on_toolButton_4_clicked();

   void on_toolButton_5_clicked();

   void on_toolButton_6_clicked();

   void on_toolButton_7_clicked();

   void on_toolButton_9_clicked();

   void on_toolButton_12_clicked();

   void on_toolButton_13_clicked();

   void on_toolButton_8_clicked();

   void on_toolButton_10_clicked();

   void on_toolButton_11_clicked();

   void on_toolButton_15_clicked();

   void on_toolButton_18_clicked();

   void on_toolButton_19_clicked();

   void on_toolButton_14_clicked();

   void on_toolButton_16_clicked();

   void on_toolButton_17_clicked();

   void on_toolButton_21_clicked();

   void on_toolButton_24_clicked();

   void on_toolButton_25_clicked();

   void on_toolButton_20_clicked();

   void on_toolButton_22_clicked();

   void on_toolButton_23_clicked();

   void on_toolButton_27_clicked();

   void on_toolButton_30_clicked();

   void on_toolButton_31_clicked();

   void on_toolButton_26_clicked();

   void on_toolButton_28_clicked();

   void on_toolButton_29_clicked();

   void on_toolButton_33_clicked();

   void on_toolButton_36_clicked();

   void on_toolButton_37_clicked();

   void on_toolButton_32_clicked();

   void on_toolButton_34_clicked();

   void on_toolButton_38_clicked();

   void on_toolButton_clicked();

   void on_action_2_triggered();

   void enableoff ();
   void enableon();
   void showbutton ();
   void closeallbutton ();
  // void slotTimeout();
   void on_action_5_triggered();
//   void Actiontimer ();




private:
   int win=0;


  // int value=0;

public:
  // void kmine (int value);
   int va=4;



protected:
        void mouseReleaseEvent(QMouseEvent *event)
        {
        if(event->button() == Qt::RightButton)
                {
                emit rClicked();
                }
        }

private:
    Ui::MainWindow *ui;
//protected:
 //   void mousePressEvent(QMouseEvent *event);


};


#endif // MAINWINDOW_H



#ifndef FORMKMINE_H
#define FORMKMINE_H
namespace Ui {
class FormkMine;
}

class FormkMine : public QWidget
{
    Q_OBJECT

public:
    explicit FormkMine(QWidget *parent = 0);
    ~FormkMine();


private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();



//    void on_horizontalSlider_valueChanged(int value);

  //  void on_horizontalSlider_actionTriggered(int action);

public:
    Ui::FormkMine *ui;
   int va=4;
    //int value;
   // int value=0;
//    void kmine (int value)
//    {
//        int d;
//        value=d;
//    }
};

#endif
