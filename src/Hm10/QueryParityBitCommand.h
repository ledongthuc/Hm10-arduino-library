#ifndef _Hm10_QueryParityBitCommand_h_
#define _Hm10_QueryParityBitCommand_h_

#include "ICommand.h"

class QueryParityBitCommand : public ICommand {
    public:
        QueryParityBitCommand();
        char* buildRequestMessage();
};

#endif
