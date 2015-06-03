#include "SetAdvertisingDataCommand.h"
#include "Utility.h"

SetAdvertisingDataCommand::SetAdvertisingDataCommand() {
    this->message = "AT+FLAG{Data}";
    this->advertisingFlag = 0;
}

char* SetAdvertisingDataCommand::buildRequestMessage() {
    char replacement[] = { this->advertisingFlag, 0 };
    return str_replace(this->message, "{Data}", replacement);
}

char SetAdvertisingDataCommand::getAdvertisingFlag() {
    return this->advertisingFlag;
}

void SetAdvertisingDataCommand::setAdvertisingFlag(char advertisingFlag) {
	this->advertisingFlag = advertisingFlag;
}
