// /appMain.h

#ifndef APPMAIN_H
#define APPMAIN_H
#include<iostream>
#include <ctime>
#include"vehicleDetails.h"
#include"genralOperation.h"

#define LOGIN 0

vehicleDetailsN::vehicleDetailsC obj;

namespace menuN
{
    class menuC:public genralOperationN::genralOperationC
    {
        public:
            void menuFun();
    };
}
#endif