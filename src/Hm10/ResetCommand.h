
#ifndef _Hm10_ResetCommand_h_
#define _Hm10_ResetCommand_h_

#include "ICommand.h"

class ResetCommand : public ICommand {
    public:
        ResetCommand();
        char* buildRequestMessage();
};

#endif
