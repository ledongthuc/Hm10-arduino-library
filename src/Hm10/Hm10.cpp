#include "Arduino.h"
#include "Hm10.h"
#include "Hm10Adapter.h"
#include "TestCommand.h"
#include "QueryBaudCommand.h"
#include "SetBaudCommand.h"
#include "QueryParityBitCommand.h"
#include "SetParityBitCommand.h"


Hm10::Hm10(int txPin, int rxPin) : Hm10(txPin, rxPin, SERIAL_PORT) {}

Hm10::Hm10(int txPin, int rxPin, int serialPort) {
    this->adapter = new Hm10Adapter(txPin, rxPin);
    this->adapter->start(serialPort);
}

void Hm10::setSerialPort(int serialPort) {
    this->adapter->start(serialPort);
}

char* Hm10::sendTestCommand() {
	TestCommand* command = new TestCommand();
	this->adapter->send(command);
    delete command;
    delay(DELAY_BEFORE_SEND);
    return adapter->getResponse();
}

char* Hm10::queryBaud() {
	QueryBaudCommand* command = new QueryBaudCommand();
	this->adapter->send(command);
	delete command;
	delay(DELAY_BEFORE_SEND);
	return adapter->getResponse();
}

char* Hm10::setBaud(char* baudId) {
	SetBaudCommand* command = new SetBaudCommand();
	command->setBaudId(baudId);
	this->adapter->send(command);
	delete command;
	delay(DELAY_BEFORE_SEND);
	return adapter->getResponse();
}

char* Hm10::queryParityBit() {
	QueryParityBitCommand* command = new QueryParityBitCommand();
	this->adapter->send(command);
	delete command;
	delay(DELAY_BEFORE_SEND);
	return adapter->getResponse();
}

char* Hm10::setParityBit(char* parityId) {
	SetParityBitCommand* command = new SetParityBitCommand();
	command->setParityId(parityId);
	this->adapter->send(command);
	delete command;
	delay(DELAY_BEFORE_SEND);
	return adapter->getResponse();
}

Hm10::~Hm10() {
	delete this->adapter;
}
