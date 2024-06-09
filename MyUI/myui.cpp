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

    DeviceListener = new QUdpSocket(this);
    connect(DeviceListener, SIGNAL(readyRead()), this, SLOT(DeviceAdvBroadcastRxd()));
    DeviceListener->bind(6969,QUdpSocket::ShareAddress);

    GuiUpdateTimer = new QTimer(this);
    connect(GuiUpdateTimer, SIGNAL(timeout()), this, SLOT(GUIUpdaerCallback()));
    GuiUpdateTimer->start(500);
}

MyUI::~MyUI()
{
    delete ui;
}

void MyUI::FunctionMachine(eDevFunctionCode_t fc, sDeviceData_t* device, uint8_t* buffer)
{
    switch(fc)
    {
        case DEV_FUN_SET_AP:
        break;

        case DEV_FUNC_ADVERTISE:            
            device->device_id = (DeviceID)buffer[DEVICE_ID_INDEX] << 24;
            device->device_id |= buffer[DEVICE_ID_INDEX + 1] << 16;
            device->device_id |= buffer[DEVICE_ID_INDEX + 2] << 8;
            device->device_id |= buffer[DEVICE_ID_INDEX + 3];
            if(!DeviceMap.contains(device->device_id))
            {
                device->device_type = buffer[DEVICE_TYPE];
                device->fw_ver = buffer[DEVICE_FW_VERSION];
                device->device_radio_mode = buffer[DEVICE_RADIO_MODE];
                device->device_index = NumberOfDevicesFound;
                DeviceMap[device->device_id] = *device;
                NumberOfDevicesFound++;
            }

            break;

        default:
            break;
    }
}

void MyUI::DeviceAdvBroadcastRxd()
{
    int dataLen;
    if(DeviceListener->hasPendingDatagrams())
    {
        dataLen = DeviceListener->bytesAvailable();
        DeviceListener->readDatagram((char*)DeviceListenBuffer, dataLen);
        sDeviceData_t temp = {0, 0, 0, 0, 0, {0}, {0}, 0, NULL};
        eDevFunctionCode_t func = (eDevFunctionCode_t)DeviceListenBuffer[DEVICE_FUNC_CODE];
        FunctionMachine(func, &temp, DeviceListenBuffer);
    }
}

void MyUI::GUIUpdaerCallback()
{
    //
    // add newly detected device
    //
    foreach(DeviceID device, DeviceMap.keys())
    {
        if(DetectedDevicesBtnArr[DeviceMap[device].device_index] == NULL)
        {
            DetectedDevicesBtnArr[DeviceMap[device].device_index] = new QPushButton(ui->FrameDevPg);
        }
    }

}
