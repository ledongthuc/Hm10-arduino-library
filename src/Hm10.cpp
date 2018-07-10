#include "Hm10.h"
#include "Hm10Adapter.h"

Hm10::Hm10(int txPin, int rxPin) : Hm10(txPin, rxPin, SERIAL_PORT) {}

Hm10::Hm10(int txPin, int rxPin, int serialPort) {
    adapter = new Hm10Adapter(txPin, rxPin);
    adapter->start(serialPort);
}

char* Hm10::sendTestCommand() {
    adapter->send("AT");
    adapter->getResponse();
}
