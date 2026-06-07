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

#define DEBUG 0


    namespace parkingOperationN
    {
        class parkingOperationC:public vehicleDetailsN::vehicleDetailsC
        {
            private:
                //bool readData();
                bool writeDataEntry(std::vector<vehicleDetailsN::vehicleDetailsC> &vecPark);
                bool writeDataFull(std::vector<vehicleDetailsN::vehicleDetailsC> &vecPark);
                int  getBlankSlot(std::vector<vehicleDetailsN::vehicleDetailsC> &vecPark,bool *boflag,std::string *slot);
                void fillAvailableSlot(   
                    std::vector<vehicleDetailsN::vehicleDetailsC> &v1,
                    std::vector<vehicleDetailsN::vehicleDetailsC> &v2,
                    int index,
                    std::string slt
                );
                void pasteData1(std::vector<vehicleDetailsN::vehicleDetailsC> &v1,int slt);
                void pasteData(std::vector<vehicleDetailsN::vehicleDetailsC> &v1,int slt);
            public:
                void readFullData(std::vector<vehicleDetailsN::vehicleDetailsC> &vecPark);
                void vehicleEnrty();
                void vehicleExit();
                void parkingStatus();
                void History();
                void saveData(vehicleDetailsN::vehicleDetailsC obj,unsigned int money);
                bool checkNumberAvailableOrNot(std::string veh,int *slot );
        };
    }
    namespace calculationN
    {
        class calculationC
        {
            public:
            unsigned int espondHours;
            unsigned int money;
            unsigned int moneyCalcAsPerTime(std::string inTime,std::string outTime);
            unsigned int moneyCalc(int hr,int min);
            int monthCalcFun(int a1,int a2,std::string m1,std::string m2);
            int monthFun(std::string month);
        };
    }
#endif