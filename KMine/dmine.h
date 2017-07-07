#ifndef DMINE_H
#define DMINE_H

#include <QMainWindow>

namespace Ui {
class DMine;
}

class DMine : public QMainWindow
{
    Q_OBJECT

public:
    explicit DMine(QWidget *parent = 0);
    ~DMine();

private:
    Ui::DMine *ui;
};

#endif // DMINE_H
