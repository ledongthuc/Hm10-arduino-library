#ifndef _Hm10_SetBaudCommand_h_
#define _Hm10_SetBaudCommand_h_

#include "ICommand.h"

class SetBaudCommand : public ICommand {
    public:
        char* buildRequestMessage();
        void setBaudId(char* baudId);
    private:
    	char* message = "AT+BAUD{BaudId}";
    	char* baudId = "";
};

#endif
