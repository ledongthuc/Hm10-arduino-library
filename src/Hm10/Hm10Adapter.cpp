#include "Hm10Adapter.h"

Hm10Adapter::Hm10Adapter(int txPin, int rxPin) {
    this->txPin = txPin;
    this->rxPin = rxPin;
    this->hm10Serial = new SoftwareSerial(rxPin, txPin);
}

void Hm10Adapter::start(int port) {
    this->hm10Serial->begin(port);
}

char* Hm10Adapter::send(char* requestData) {
    this->hm10Serial->write(requestData);
}

char* Hm10Adapter::getResponse() {
    char receiveData[BUFFER_LENGTH];
    memset(receiveData, 0, BUFFER_LENGTH);
    int index=0;

    while(this->hm10Serial->available()) {
        receiveData[index] = (char)this->hm10Serial->read();
        index++;
        if(index >= BUFFER_LENGTH) {
            break;
    	}
    }

    return receiveData;
}
