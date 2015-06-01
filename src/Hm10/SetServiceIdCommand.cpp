#include "SetServiceIdCommand.h"
#include "Utility.h"

SetServiceIdCommand::SetServiceIdCommand() {
    this->message = "AT+UUID{ServiceId}";
}

char* SetServiceIdCommand::buildRequestMessage() {
	return str_replace(this->message, "{ServiceId}", this->serviceId);
}

void SetServiceIdCommand::setServiceId(char* serviceId) {
	this->serviceId = serviceId;
}
