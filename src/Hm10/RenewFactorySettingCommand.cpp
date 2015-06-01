#include "RenewFactorySettingCommand.h"

RenewFactorySettingCommand::RenewFactorySettingCommand() {
    this->message = "AT+RENEW";
    //this->message = "AT+RESET";
}

char* RenewFactorySettingCommand::buildRequestMessage() {
	return this->message;
}
