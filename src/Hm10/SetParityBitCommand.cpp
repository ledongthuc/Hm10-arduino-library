#include "SetParityBitCommand.h"
#include "Utility.h"

char* SetParityBitCommand::buildRequestMessage() {
	this->message = str_replace(this->message, "{ParityId}", this->parityId);
	return this->message;
}

void SetParityBitCommand::setParityId(char* parityId) {
	this->parityId = parityId;
}
