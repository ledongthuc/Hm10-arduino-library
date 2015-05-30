#ifndef _Hm10_SetAdvertisingDataCommand_h_
#define _Hm10_SetAdvertisingDataCommand_h_

#include "ICommand.h"

class SetAdvertisingDataCommand : public ICommand {
    public:
        char* buildRequestMessage();
        void setAdvertisingFlag(char advertisingFlag);
    private:
    	char* message = "AT+FLAG";
    	char advertisingFlag = 0;
};

#endif
