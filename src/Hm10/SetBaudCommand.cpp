#include "SetBaudCommand.h"
#include "Utility.h"

SetBaudCommand::SetBaudCommand() {
    this->message = "AT+BAUD{BaudId}";
}

char* SetBaudCommand::buildRequestMessage() {
	return str_replace(this->message, "{BaudId}", this->baudId);
}

void SetBaudCommand::setBaudId(char* baudId) {
	this->baudId = baudId;
}
