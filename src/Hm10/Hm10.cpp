#include "Arduino.h"
#include "Hm10.h"
#include "Hm10Adapter.h"
#include "TestCommand.h"
#include "QueryBaudCommand.h"
#include "SetBaudCommand.h"
#include "QueryParityBitCommand.h"
#include "SetParityBitCommand.h"
#include "RenewFactorySettingCommand.h"
#include "SetServiceIdCommand.h"
#include "SetAdvertisingDataCommand.h"


Hm10::Hm10(int txPin, int rxPin) : Hm10(txPin, rxPin, SERIAL_PORT) {}

Hm10::Hm10(int txPin, int rxPin, int serialPort) {
    this->adapter = new Hm10Adapter(txPin, rxPin);
    this->adapter->start(serialPort);
    delay(DELAY_AFTER_START_LISTENING);
}

void Hm10::setSerialPort(int serialPort) {
    this->adapter->start(serialPort);
}

char* Hm10::sendTestCommand() {
	delay(DELAY_BEFORE_SEND);
	TestCommand* command = new TestCommand();
	this->adapter->send(command);
    delete command;
    delay(DELAY_AFTER_SEND);
    return adapter->getResponse();
}

char* Hm10::queryBaud() {
    delay(DELAY_BEFORE_SEND);
	QueryBaudCommand* command = new QueryBaudCommand();
	this->adapter->send(command);
	delete command;
	delay(DELAY_AFTER_SEND);
	return adapter->getResponse();
}

char* Hm10::setBaud(char* baudId) {
    delay(DELAY_BEFORE_SEND);
	SetBaudCommand* command = new SetBaudCommand();
	command->setBaudId(baudId);
	this->adapter->send(command);
	delete command;
	delay(DELAY_AFTER_SEND);
	return adapter->getResponse();
}

char* Hm10::queryParityBit() {
    delay(DELAY_BEFORE_SEND);
	QueryParityBitCommand* command = new QueryParityBitCommand();
	this->adapter->send(command);
	delete command;
	delay(DELAY_AFTER_SEND);
	return adapter->getResponse();
}

char* Hm10::setParityBit(char* parityId) {
    delay(DELAY_BEFORE_SEND);
	SetParityBitCommand* command = new SetParityBitCommand();
	command->setParityId(parityId);
	this->adapter->send(command);
	delete command;
	delay(DELAY_AFTER_SEND);
	return adapter->getResponse();
}

char* Hm10::renewFactorySetting() {
    delay(DELAY_BEFORE_SEND);
	RenewFactorySettingCommand* command = new RenewFactorySettingCommand();
	this->adapter->send(command);
	delete command;
	delay(DELAY_AFTER_SEND);
	return adapter->getResponse();
}

char* Hm10::setServiceId(char* serviceId) {
    delay(DELAY_BEFORE_SEND);
	SetServiceIdCommand* command = new SetServiceIdCommand();
	command->setServiceId(serviceId);
	this->adapter->send(command);
	delete command;
	delay(DELAY_AFTER_SEND);
	return adapter->getResponse();
}

char* Hm10::setAdvertisingDataFlag(char advertisingDataFlag) {
    delay(DELAY_BEFORE_SEND);
	SetAdvertisingDataCommand* command = new SetAdvertisingDataCommand();
	command->setAdvertisingFlag(advertisingDataFlag);
	this->adapter->send(command);
    this->adapter->send(advertisingDataFlag);
	delete command;
	delay(DELAY_AFTER_SEND);
	return adapter->getResponse();
	//return command->buildRequestMessage();
}

char* Hm10::getResponse() {
    return adapter->getResponse();
}

Hm10::~Hm10() {
	delete this->adapter;
}
