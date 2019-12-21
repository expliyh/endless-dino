#include "eldino.h"
#include "ui_eldino.h"

eldino::eldino(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::eldino)
{
    ui->setupUi(this);
}

eldino::~eldino()
{
    delete ui;
}
