#ifndef _Hm10_SetNotificationCommand_h_
#define _Hm10_SetNotificationCommand_h_

#include "ICommand.h"

class SetNotificationCommand : public ICommand {
    public:
        SetNotificationCommand();
        char* buildRequestMessage();
        void setNotificationInformation(char* notificationInformation);
    private:
    	char* notificationInformation;
};

#endif
