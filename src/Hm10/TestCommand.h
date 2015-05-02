#ifndef _Hm10_TestCommand_h_
#define _Hm10_TestCommand_h_

#include "ICommand.h"

class TestCommand : public ICommand {
    public:
        char* buildRequestMessage();
    private:
        char* message = "AT";
};

#endif
