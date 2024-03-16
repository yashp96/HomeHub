#ifndef MYUI_H
#define MYUI_H

#include <QMainWindow>

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
};
#endif // MYUI_H
