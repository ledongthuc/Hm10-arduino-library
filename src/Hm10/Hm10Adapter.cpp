#include "Hm10Adapter.h"
#include "ICommand.h"

Hm10Adapter::Hm10Adapter(int txPin, int rxPin) {
    this->txPin = txPin;
    this->rxPin = rxPin;
    this->hm10Serial = new NewSoftwareSerial(rxPin, txPin);
}

void Hm10Adapter::start(int port) {
    this->hm10Serial->begin(port);
}

void Hm10Adapter::send(char* requestData) {
    this->hm10Serial->write(requestData);
}

void Hm10Adapter::send(ICommand* command) {
	char* requestData = command->buildRequestMessage();
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

Hm10Adapter::~Hm10Adapter() {
	delete this->hm10Serial;
}
