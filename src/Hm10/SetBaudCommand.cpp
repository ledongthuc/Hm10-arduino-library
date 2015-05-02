#include "SetBaudCommand.h"
#include "Utility.h"


char* SetBaudCommand::buildRequestMessage() {
	this->message = str_replace(this->message, "{BaudId}", this->baudId);
	return this->message;
}

void SetBaudCommand::setBaudId(char* baudId) {
	this->baudId = baudId;
}
