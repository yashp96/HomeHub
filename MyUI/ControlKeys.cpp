#include "myui.h"
#include "ui_myui.h"

/** @brief This function initializes the list for keys available on UI
 *
 *  @return err
*/
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
            connect(LHSKeys[btnCount], SIGNAL(clicked()), this, SLOT(LHSKeyCallback()));
        }
        else if (btnCount >= RHS_KEYS_OFFSET && btnCount < BOTTOM_KEYS_OFFSET)
        {
            RHSKeys[btnCount - RHS_KEYS_OFFSET] = AllKeys[btnCount];
            connect(RHSKeys[btnCount - RHS_KEYS_OFFSET], SIGNAL(clicked()), this, SLOT(RHSKeyCallback()));
        }
        else if (btnCount >= BOTTOM_KEYS_OFFSET)
        {
            BottomSideKeys[btnCount - BOTTOM_KEYS_OFFSET] = AllKeys[btnCount];
            BottomSideKeys[btnCount - BOTTOM_KEYS_OFFSET]->setText(MainKeysText[btnCount - BOTTOM_KEYS_OFFSET]);
            connect(BottomSideKeys[btnCount - BOTTOM_KEYS_OFFSET], SIGNAL(clicked()), this, SLOT(BottomKeyCallback()));
        }
        else
        {
            // just for C/C++ Std.
        }

        if (AllKeys[btnCount] == NULL)
        {
            err &= false;
        }
    }
    return err;
}

void MyUI::LoadBottomKeyMarkers()
{
    BottomKeyMarkers[0] = ui->bottomKeyInd_1;
    BottomKeyMarkers[1] = ui->bottomKeyInd_2;
    BottomKeyMarkers[2] = ui->bottomKeyInd_3;
    BottomKeyMarkers[3] = ui->bottomKeyInd_4;
}

int MyUI::GetMainStackPgIndex(eDisplayKeys_t key)
{
    int index = 0;
    switch(key)
    {
        case KEY_9:
            index = HOME_PAGE_INDEX;
            break;

        case KEY_10:
            index = EXPLORE_PAGE_INDEX;
            break;

        case KEY_11:
            index = DEVICES_PAGE_INDEX;
            break;

        case KEY_12:
            index = SETTINGS_PAGE_INDEX;
            break;

        default:
            break;
    }
    return index;
}

void MyUI::LHSKeyCallback()
{

}

void MyUI::RHSKeyCallback()
{

}

void MyUI::BottomKeyCallback()
{
    QStringList objStr = ((QObject*)sender())->objectName().split("_");
    QString keyNumStr = objStr[1];
    eDisplayKeys_t keyNum = (eDisplayKeys_t)keyNumStr.toInt();

    // change stacked widget page index
    ui->MyUiMainStack->setCurrentIndex(GetMainStackPgIndex(keyNum));

    //
    //  TODO: first implement your own class for keycontrol ONLY then proceed *****
    //

    // change bottom key marker
    // update other UI elements

}
