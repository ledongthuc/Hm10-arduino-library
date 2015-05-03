#ifndef _Hm10_RenewFactorySettingCommand_h_
#define _Hm10_RenewFactorySettingCommand_h_

#include "ICommand.h"

class RenewFactorySettingCommand : public ICommand {
    public:
        char* buildRequestMessage();
    private:
        char* message = "AT+RENEW";
        //char* message = "AT+RESET";
};

#endif
