#include "myui.h"
#include "ui_myui.h"

MyUI::MyUI(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MyUI)
{
    ui->setupUi(this);
}

MyUI::~MyUI()
{
    delete ui;
}

