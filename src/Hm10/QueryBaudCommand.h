#ifndef _Hm10_QueryBaudCommand_h_
#define _Hm10_QueryBaudCommand_h_

#include "ICommand.h"

class QueryBaudCommand : public ICommand {
    public:
        QueryBaudCommand();
        char* buildRequestMessage();
};

#endif
