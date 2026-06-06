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
            std::string  slotNum;
            std::string vehicleNumber;
            std::string vehicleOwner;
            std::string inTime;
            std::string outTime;
            std::string mobileNumber;
            std::string vehicleType;
        public:

            void setVehicleNumber();
            void setVehicleOwner();
            void setInTime();
            void setOutTime();
            void setMobileNumber();
            void setVehicleType();
            void setSlotNumber();

            void readUpdateVehicleNumber(std::string a);
            void readUpdateVehicleOwner(std::string a);
            void readUpdateInTime(std::string a);
            void readUpdateOutTime(std::string a);
            void readUpdateMobileNumber(std::string a);
            void readUpdateVehicleType(std::string a);
            void readUpdateSlotNumber(std::string a);

            std::string getVehicleNumber();
            std::string getVehicleOwner();
            std::string getInTime();
            std::string getOutTime();
            std::string getMobileNumber();
            std::string getVehicleType();
            
            std::string getSlotNum();
            void updateOutTime(std::string oT);
            void displayVehicalDetails();
            void enterVehicleDetails(vehicleDetailsN::vehicleDetailsC &obj);
            void readDataFromVehicleData(vehicleDetailsN::vehicleDetailsC &obj);
    };
}
#endif