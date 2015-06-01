#include "TestCommand.h"

TestCommand::TestCommand() {
    this->message = "AT";
}

char* TestCommand::buildRequestMessage() {
	return this->message;
}
