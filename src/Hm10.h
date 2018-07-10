#ifndef _Hm10_h_
#define _Hm10_h_
#define SERIAL_PORT 9600

#include "Hm10Adapter.h"

class Hm10 {
    public:
        Hm10(int txPin, int rxPin);
        Hm10(int txPin, int rxPin, int serialPort);
        char* sendTestCommand();
	
    private:
    	Hm10Adapter* adapter;
};

#endif
