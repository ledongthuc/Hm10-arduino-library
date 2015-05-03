#ifndef _Hm10_QueryParityBitCommand_h_
#define _Hm10_QueryParityBitCommand_h_

#include "ICommand.h"

class QueryParityBitCommand : public ICommand {
    public:
        char* buildRequestMessage();
    private:
    	char* message = "AT+PARI?";
};

#endif
