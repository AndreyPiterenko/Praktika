#ifndef MINE_H
#define MINE_H
#include <QDialog>

namespace Ui {
class Mine;
}

class Mine : public QDialog
{
    Q_OBJECT

public:
    explicit Mine(QWidget *parent = 0);
    ~Mine();

private:
    Ui::Mine *ui;
};


#endif // MINE_H
