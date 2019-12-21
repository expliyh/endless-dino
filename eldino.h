#ifndef ELDINO_H
#define ELDINO_H

#include <QMainWindow>

namespace Ui {
class eldino;
}

class eldino : public QMainWindow
{
    Q_OBJECT

public:
    explicit eldino(QWidget *parent = nullptr);
    ~eldino();

private:
    Ui::eldino *ui;
};

#endif // ELDINO_H
