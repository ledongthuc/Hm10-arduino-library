
#include "SetServiceUUID.h"
#include "Utility.h"

char* SetServiceUUID::buildRequestMessage() {
	this->message = str_replace(this->message, "{ServiceId}", this->serviceId);
	return this->message;
}

void SetServiceUUID::setServiceId(char* serviceId) {
	this->serviceId = serviceId;
}
