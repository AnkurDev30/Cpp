//vehicleDetails.h
#ifndef VEHICLEDETAILS_H
#define VEHICLEDETAILS_H

#include<iostream>
#include<ctime>
#include<cctype>
#include"genralOperation.h"
//!< this namespace defined a class where 
//!< we take entry when vehicle will 
//!< come in parking place.
namespace vehicleDetailsN
{
    class vehicleDetailsC:public genralOperationN::genralOperationC
    {
        private:
            int slotNum;
            std::string vehicleNumber;
            std::string vehicleOwner;
            std::string inTime;
            std::string outTime;
            std::string mobileNumber;
            std::string vehicleType;
            int espondHours;
            int money;
        public:

            void setVehicleNumber();
            void setVehicleOwner();
            void setInTime();
            void setOutTime();
            void setMobileNumber();
            void setVehicleType();
            void setSlotNumber(int num);

            std::string getVehicleNumber();
            std::string getVehicleOwner();
            std::string getInTime();
            std::string getOutTime();
            std::string getMobileNumber();
            std::string getVehicleType();
            
            int getSlotNum();
            void updateOutTime(std::string oT);
            void displayVehicalDetails();
            void enterVehicleDetails(vehicleDetailsN::vehicleDetailsC &obj);
            void readDataFromVehicleData(vehicleDetailsN::vehicleDetailsC &obj);
    };
}
#endif