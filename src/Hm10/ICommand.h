#ifndef _Hm10_ICommand_h_
#define _Hm10_ICommand_h_

class ICommand {
    public:
        virtual char* buildRequestMessage();
    protected:
        char* message;
};

#endif
