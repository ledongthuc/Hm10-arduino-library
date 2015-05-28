#ifndef _Hm10_SetServiceUUIDCommand_h_
#define _Hm10_SetServiceUUIDCommand_h_

#include "ICommand.h"

class SetServiceUUID : public ICommand {
    public:
        char* buildRequestMessage();
        void setServiceId(char* serviceId);
    private:
    	char* message = "AT+UUID{ServiceId}";
    	char* serviceId = "";
};

#endif

