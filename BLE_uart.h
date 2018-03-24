#ifndef _BLE_uart_H_
#define _BLE_uart_H_

#include <BLEDevice.h>
#include <BLEServer.h>
#include <BLEUtils.h>
#include <BLE2902.h>

typedef void (* BLEWrittenCallback)(const char *);

 // ctor

class MyServerCallbacks: public BLEServerCallbacks {
  bool deviceConnected;

  public:
    MyServerCallbacks();
    void onConnect(BLEServer* pServer);
    void onDisconnect(BLEServer* pServer);
};

class MyCallbacks: public BLECharacteristicCallbacks {
  BLEWrittenCallback callback;
  void onWrite(BLECharacteristic *pCharacteristic);

  public:
    MyCallbacks(BLEWrittenCallback cb);
};

class BLEUart {
  BLECharacteristic *pCharacteristic;
  uint8_t txValue;
  BLEWrittenCallback callback;

  public:
    BLEUart(BLEWrittenCallback cb);
    void setup();
};

#endif

