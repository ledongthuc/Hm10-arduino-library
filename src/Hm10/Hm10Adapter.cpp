#include "Hm10Adapter.h"
#include "ICommand.h"

Hm10Adapter::Hm10Adapter(int txPin, int rxPin) {
    this->txPin = txPin;
    this->rxPin = rxPin;
    this->hm10Serial = new CustomSoftwareSerial(rxPin, txPin);
}

void Hm10Adapter::start(int port) {
    this->hm10Serial->begin(port, CSERIAL_8N1);
}

void Hm10Adapter::send(char* requestData) {
    this->hm10Serial->write(requestData);
}

void Hm10Adapter::send(char requestData) {
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
    int numberOfResponse=0;
    while(this->hm10Serial->available()) {
        numberOfResponse++;
        int responseByte = this->hm10Serial->read();
        if(numberOfResponse == 1000) {
            break;
        }
        if(responseByte <= 0 && index == 0) {
            continue;
        }
        if(responseByte < 0 && index > 0) {
            continue;
        }
        receiveData[index] = (char) responseByte;
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
