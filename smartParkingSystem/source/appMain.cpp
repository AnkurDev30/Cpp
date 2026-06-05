//appMain.cpp
#include"appMain.h"
#include<sstream>
#include"genralOperation.h"
#include"parkingOperation.h"

int main(int argc, char *argv[])
{
    std::time_t now = std::time(0);
    
    std::string dt = std::ctime(&now);

    menuN::menuC obj;

    if(argc<1)
    {
        std::cout<<"error!\n";
    }
    else
    {
        //obj.enterVehicleDetails();
        //obj.displayVehicalDetails();
        obj.menuFun();
    }
}
void menuN::menuC:: menuFun()
{
    std::string option;

    loginRightsN::loginRightsC loginObj;
    parkingOperationN::parkingOperationC obj;
    clearScreen();
    parkingFirmName();

    std::string ss;
    int opt;
    
#if(LOGIN==1)
    loginObj.login();
#else
    loginObj.rightsFlag=1;
#endif

    if(loginObj.rightsFlag!=0)
    {
        std::cout<<"Select Option: \n";
        std::cout<<"Press 1: for Vehicle Entry\n";
        std::cout<<"Press 2: for Vehicle Exit\n";
        std::cout<<"Press 3: for Parking Status\n";
        if(loginObj.rightsFlag==1)
        {
            std::cout<<"Press 4: For History \n";
        }
        getline(std::cin,option);

        std::cout<<option<<std::endl;
        std::stringstream ss(option);
        ss>>opt;

        switch(opt)
        {
            case 1:
                obj.vehicleEnrty();
            break;
            case 2:
                obj.vehicleExit();
            break;
            case 3:
                //parkingStatus();
            break;
            case 4:
                if(loginObj.rightsFlag==1)
                {
                    //history();
                }
            break;
        }
    }

    
}