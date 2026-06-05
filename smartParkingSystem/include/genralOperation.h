//genralOperation.h
#ifndef GENRALOPERATION_H
#define GENRALOPERATION_H

#include<iostream>
#include<string>
#include<ctime>
#include<cctype>
#include<limits>
#define PARKING_NAME "RAMA PARKING"
#define MAX_2_WHEELER 200
#define MAX_4_WHEELER 100

#define ADMIN_LOGIN "ADMIN1234"
#define OPER_LOGIN  "OPER1234"

#define PASS_KEY_ADMIN "1234"
#define PASS_KEY_OPER "5678"

#define MAX_4_WHEELER_SLOT 50
#define MAX_2_WHEELER_SLOT 100
namespace genralOperationN
{
    class genralOperationC
    {
        public:
            void clearScreen();
            void parkingFirmName();
            
            void lines();
            bool checkNameAndNumStaus(std::string name);
            bool checkNameStaus(std::string name);
            bool checkVehicalNumber(std::string vehicleNumber);
            bool checkOnlyNumber(std::string numberStr);
            bool checkNameWithSpace(std::string str);
            
            bool checkVehicleType(std::string vType);
            void cinIgnore();

    };
}
namespace loginRightsN
{
    class loginRightsC:public genralOperationN::genralOperationC
    {
        public:
            void login();
            int rightsFlag;
            void adminUser();
            void operatorUser();
    };
}
#endif