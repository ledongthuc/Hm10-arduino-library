#ifndef _Hm10_h_
#define _Hm10_h_
#define SERIAL_PORT 9600
#define DELAY_AFTER_START_LISTENING 1200
#define DELAY_BEFORE_SEND 500
#define DELAY_AFTER_SEND 500

#include "Hm10Adapter.h"

class Hm10 {
    public:
        Hm10(int txPin, int rxPin);
        Hm10(int txPin, int rxPin, int serialPort);
        ~Hm10();
        void setSerialPort(int serialPort);
        char* sendTestCommand();
        char* queryBaud();
        char* setBaud(char* baudId);
        char* queryParityBit();
        char* setParityBit(char* parityId);
        char* renewFactorySetting();
        char* setServiceId(char* serviceId);
        char* setAdvertisingDataFlag(char advertisingDataFlag);
        char* getResponse();

    private:
    	Hm10Adapter* adapter;
};

#endif
