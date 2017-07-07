#ifndef MINE_H
#define MINE_H

#include <QDialog>
#include <QMainWindow>
#include <QDialog>
#include <QCheckBox>
#include <QPushButton>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QGroupBox>

class Mine : public QDialog
{
    Q_OBJECT

public:
    Mine(QWidget *parent = 0);
    ~Mine();
private:
    QGroupBox *DMine();
  //  Ui::Mine *ui;
 //   QPushButton *ok;
  //  QPushButton *close;
//private slots:
//    void okclicked();
};

#endif // MINE_H
