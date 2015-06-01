#include "QueryBaudCommand.h"

QueryBaudCommand::QueryBaudCommand() {
    this->message = "AT+BAUD?";
}

char* QueryBaudCommand::buildRequestMessage() {
	return this->message;
}
