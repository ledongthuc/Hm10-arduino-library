#ifndef _Hm10_Adapter_h_
#define _Hm10_Adapter_h_

#include "SoftwareSerial.h"
#include "ICommand.h"
#define BUFFER_LENGTH 1000

class Hm10Adapter {
    public:
        Hm10Adapter(int txPin, int rxPin);
        void send(char* requestData);
        void send(ICommand* command);
        char* getResponse();
        void start(int port);
    private:
        int txPin;
        int rxPin;
    	SoftwareSerial* hm10Serial;
};

#endif
