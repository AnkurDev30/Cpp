#ifndef PARKINGOPERATION_H
#define PARKINGOPERATION_H

#include<iostream>
#include<fstream>
#include<ctime>
#include<cctype>
#include<string>
#include<vector>
#include"vehicleDetails.h"
#include"parkingOperation.h"
#include"genralOperation.h"


    namespace parkingOperationN
    {
        class parkingOperationC:public vehicleDetailsN::vehicleDetailsC
        {
            private:
                bool readData();
                bool writeDataEntry(std::vector<vehicleDetailsN::vehicleDetailsC> &vecPark);
            public:
                void readFullData(std::vector<vehicleDetailsN::vehicleDetailsC> &vecPark);
                void vehicleEnrty();
                void vehicleExit();
                void parkingStatus();
                void History();
                bool checkNumberAvailableOrNot(std::string veh,int *slot );
        };
    }
#endif