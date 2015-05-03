#ifndef _Hm10_SetParityBitCommand_h_
#define _Hm10_SetParityBitCommand_h_

#include "ICommand.h"

class SetParityBitCommand : public ICommand {
    public:
        char* buildRequestMessage();
        void setParityId(char* parityId);
    private:
    	char* message = "AT+PARI{ParityId}";
    	char* parityId = "";
};

#endif
