        #ifndef MYUI_H
#define MYUI_H

#include <QMainWindow>
#include <QPushButton>
#include <QDebug>
#include <QLabel>

#include "enums.h"
#include "defines.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MyUI; }
QT_END_NAMESPACE

class MyUI : public QMainWindow
{
    Q_OBJECT

public:
    MyUI(QWidget *parent = nullptr);
    ~MyUI();

private:
    Ui::MyUI *ui;

    QString MainKeysText[MAIN_MENUS_MAX_NUMBER] = { "HOME", "EXPLORE", "DEVICES", "SETTINGS" }; // we will consider bottom row as main keys

    QPushButton* AllKeys[MAX_NUMBER_OF_KEYS];
    QPushButton* LHSKeys[MAX_LHS_KEYS];
    QPushButton* BottomSideKeys[MAX_BOTTOM_KEYS];
    QPushButton* RHSKeys[MAX_RHS_KEYS];

    QLabel* BottomKeyMarkers[MAX_BOTTOM_KEYS];

    bool InitializeKeyLists();
    void InitializeKeySockets();
    void LoadBottomKeyMarkers();

    int GetMainStackPgIndex(eDisplayKeys_t  key);

private slots:
    void LHSKeyCallback();
    void RHSKeyCallback();
    void BottomKeyCallback();
};
#endif // MYUI_H
