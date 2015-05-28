
#include "SetServiceIdCommand.h"
#include "Utility.h"

char* SetServiceIdCommand::buildRequestMessage() {
	this->message = str_replace(this->message, "{ServiceId}", this->serviceId);
	return this->message;
}

void SetServiceIdCommand::setServiceId(char* serviceId) {
	this->serviceId = serviceId;
}
