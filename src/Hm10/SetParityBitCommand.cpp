#include "SetParityBitCommand.h"
#include "Utility.h"

SetParityBitCommand::SetParityBitCommand() {
    this->message = "AT+PARI{ParityId}";
}

char* SetParityBitCommand::buildRequestMessage() {
	return str_replace(this->message, "{ParityId}", this->parityId);
}

void SetParityBitCommand::setParityId(char* parityId) {
	this->parityId = parityId;
}
