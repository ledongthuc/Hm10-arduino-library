#ifndef _Hm10_h_
#define _Hm10_h_
#define SERIAL_PORT 9600
#define DELAY_BEFORE_SEND 10

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
	
    private:
    	Hm10Adapter* adapter;
};

#endif
