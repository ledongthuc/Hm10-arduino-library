#include "SetAdvertisingDataCommand.h"
#include "Utility.h"

SetAdvertisingDataCommand::SetAdvertisingDataCommand() {
    this->message = "AT+FLAG";
    this->advertisingFlag = 0;
}

char* SetAdvertisingDataCommand::buildRequestMessage() {
	return this->message;
}

char SetAdvertisingDataCommand::getAdvertisingFlag() {
    return this->advertisingFlag;
}

void SetAdvertisingDataCommand::setAdvertisingFlag(char advertisingFlag) {
	this->advertisingFlag = advertisingFlag;
}
