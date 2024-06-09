#ifndef KEYCONTROL_H
#define KEYCONTROL_H

#include <QObject>
#include <QMap>

typedef enum KEY_CONTROL_KEYS
{
    FN_KEY_1 = 1,
    FN_KEY_2,
    FN_KEY_3,
    FN_KEY_4,
    FN_KEY_5,
    FN_KEY_6,
    FN_KEY_7,
    FN_KEY_8,
    FN_KEY_9,
    FN_KEY_10,
    FN_KEY_11,
    FN_KEY_12
}
eKeyControlKeys_t;

class KeyControl:QObject
{
    Q_OBJECT
public:
    KeyControl();

    void SetKeyName(eKeyControlKeys_t key, QString name);

private:
    QMap<eKeyControlKeys_t, QString> KeyNameMap;
};

#endif // KEYCONTROL_H
