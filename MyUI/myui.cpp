#include "myui.h"
#include "ui_myui.h"

MyUI::MyUI(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MyUI)
{
    ui->setupUi(this);

    if(InitializeKeyLists())
    {
        qDebug() << "Key Lists Initialized";
    }
}

MyUI::~MyUI()
{
    delete ui;
}

bool MyUI::InitializeKeyLists()
{
    int btnCount = 0;
    QString keyNameTemplate = "pbFunction_";
    bool err = true;

    for(btnCount = 0; btnCount < MAX_NUMBER_OF_KEYS; btnCount++)
    {
        QString temp = keyNameTemplate + QString::number(btnCount + 1);
        AllKeys[btnCount] = this->findChild<QPushButton*>(temp);

        if (btnCount < BOTTOM_KEYS_OFFSET)
        {
            LHSKeys[btnCount] = AllKeys[btnCount];
        }
        else if (btnCount >= BOTTOM_KEYS_OFFSET && btnCount < RHS_KEYS_OFFSET)
        {
            BottomKeys[btnCount] = AllKeys[btnCount];
        }
        else if (btnCount > RHS_KEYS_OFFSET)
        {
            RHSKeys[btnCount] = AllKeys[btnCount];
        }
        else
        {

        }

        if (AllKeys[btnCount] == NULL)
        {
            err &= false;
        }
    }
    return err;
}

