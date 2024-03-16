#ifndef MYUI_H
#define MYUI_H

#include <QMainWindow>
#include <QPushButton>
#include <QDebug>

QT_BEGIN_NAMESPACE
namespace Ui { class MyUI; }
QT_END_NAMESPACE

#define MAIN_MENUS_MAX_NUMBER    4   /* Max number of menus at home page*/

#define MAX_NUMBER_OF_KEYS  12
#define MAX_LHS_KEYS        4
#define MAX_RHS_KEYS        4
#define MAX_BOTTOM_KEYS     4

#define LHS_KEYS_OFFSET     (0)
#define BOTTOM_KEYS_OFFSET  (MAX_LHS_KEYS)
#define RHS_KEYS_OFFSET     (MAX_LHS_KEYS + MAX_RHS_KEYS)

class MyUI : public QMainWindow
{
    Q_OBJECT

public:
    MyUI(QWidget *parent = nullptr);
    ~MyUI();

private:
    Ui::MyUI *ui;

    QString MainKeysText[MAIN_MENUS_MAX_NUMBER] = { "HOME", "EXPLORE", "DEVICES", "SETTINGS" };

    QPushButton* AllKeys[MAX_NUMBER_OF_KEYS];
    QPushButton* LHSKeys[MAX_LHS_KEYS];
    QPushButton* RHSKeys[MAX_RHS_KEYS];
    QPushButton* BottomKeys[MAX_BOTTOM_KEYS];

/** @brief This function initializes the list for keys available on UI
 *
 *  @return err
*/
    bool InitializeKeyLists();

};
#endif // MYUI_H
