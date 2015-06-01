#ifndef _Hm10_TestCommand_h_
#define _Hm10_TestCommand_h_

#include "ICommand.h"

class TestCommand : public ICommand {
    public:
        TestCommand();
        char* buildRequestMessage();
};

#endif
