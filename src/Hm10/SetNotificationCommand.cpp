#include "SetNotificationCommand.h"
#include "Utility.h"

SetNotificationCommand::SetNotificationCommand() {
    this->message = "AT+NOTI{NotifyInfo}";
}

char* SetNotificationCommand::buildRequestMessage() {
	return str_replace(this->message, "{NotifyInfo}", this->notificationInformation);
}

void SetNotificationCommand::setNotificationInformation(char* notificationInformation) {
	this->notificationInformation = notificationInformation;
}
