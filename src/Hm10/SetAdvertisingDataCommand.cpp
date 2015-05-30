
#include "SetAdvertisingDataCommand.h"
#include "Utility.h"

char* SetAdvertisingDataCommand::buildRequestMessage() {
	return this->message;
}

void SetAdvertisingDataCommand::setAdvertisingFlag(char advertisingFlag) {
	this->advertisingFlag = advertisingFlag;
}
