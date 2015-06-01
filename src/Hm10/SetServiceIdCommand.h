#ifndef _Hm10_SetServiceUUIDCommand_h_
#define _Hm10_SetServiceUUIDCommand_h_

#include "ICommand.h"

class SetServiceIdCommand : public ICommand {
    public:
        SetServiceIdCommand();
        char* buildRequestMessage();
        void setServiceId(char* serviceId);
    private:
    	char* serviceId;
};

#endif

