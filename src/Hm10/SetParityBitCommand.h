#ifndef _Hm10_SetParityBitCommand_h_
#define _Hm10_SetParityBitCommand_h_

#include "ICommand.h"

class SetParityBitCommand : public ICommand {
    public:
        SetParityBitCommand();
        char* buildRequestMessage();
        void setParityId(char* parityId);
    private:
    	const char* parityId;
};

#endif
