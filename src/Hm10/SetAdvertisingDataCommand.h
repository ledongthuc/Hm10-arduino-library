#ifndef _Hm10_SetAdvertisingDataCommand_h_
#define _Hm10_SetAdvertisingDataCommand_h_

#include "ICommand.h"

class SetAdvertisingDataCommand : public ICommand {
    public:
        SetAdvertisingDataCommand();
        char* buildRequestMessage();
        void setAdvertisingFlag(char advertisingFlag);
        char getAdvertisingFlag();
    private:
    	char advertisingFlag;
};

#endif
