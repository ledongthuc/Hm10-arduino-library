#include "QueryParityBitCommand.h"

QueryParityBitCommand::QueryParityBitCommand() {
    this->message = "AT+PARI?";
}

char* QueryParityBitCommand::buildRequestMessage() {
	return this->message;
}
