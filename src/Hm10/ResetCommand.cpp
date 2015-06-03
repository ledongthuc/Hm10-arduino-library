#include "ResetCommand.h"

ResetCommand::ResetCommand() {
    this->message = "AT+RESET";
}

char* ResetCommand::buildRequestMessage() {
	return this->message;
}
