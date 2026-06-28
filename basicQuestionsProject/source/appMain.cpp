#include"appMain.h"
int main(int argc,char*argv[])
{
    
    int a = std::stoi(argv[1]);
    switch(a)
    {
        case 1:
            arrayProgramCalling();
        break;
        case 2:
            stringPgmFun();
        break;
    }

    return 0;
}