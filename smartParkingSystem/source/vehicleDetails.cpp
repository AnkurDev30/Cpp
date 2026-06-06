//vehicleDetails.cpp
#include"vehicleDetails.h"
#include<vector>
#include<fstream>
#include<sstream>
void vehicleDetailsN::vehicleDetailsC::readUpdateVehicleNumber(std::string vn)
{
    vehicleNumber = vn;
}
void vehicleDetailsN::vehicleDetailsC::readUpdateVehicleOwner(std::string ow)
{
    vehicleOwner = ow;
}
void vehicleDetailsN::vehicleDetailsC::readUpdateInTime(std::string it)
{
    inTime= it;
}
void vehicleDetailsN::vehicleDetailsC::readUpdateOutTime(std::string ot)
{
    outTime = ot;
}
void vehicleDetailsN::vehicleDetailsC::readUpdateMobileNumber(std::string mb)
{
    mobileNumber = mb;
}
void vehicleDetailsN::vehicleDetailsC::readUpdateVehicleType(std::string vt)
{
    vehicleType = vt;
}
void vehicleDetailsN::vehicleDetailsC::readUpdateSlotNumber(std::string st)
{
    slotNum =st;
}
void vehicleDetailsN::vehicleDetailsC::enterVehicleDetails
(
    vehicleDetailsN::vehicleDetailsC &obj
)
{
    //!< clear screen.
    clearScreen();
    parkingFirmName();//!< parking company name.

    //!< set vehicle details. 
      obj.setVehicleType();
      obj.setVehicleNumber();
      obj.setVehicleOwner();
      obj.setInTime();
      obj.readUpdateOutTime("------");
      obj.setMobileNumber();   
      obj.setSlotNumber();
}
void vehicleDetailsN::vehicleDetailsC::setVehicleType()
{
    bool retVal = false;
    std::string wrongopt;

    do
    {
        clearScreen();
        parkingFirmName();

        std::cout<<"1 Vehicle Type \n";
        getline(std::cin,vehicleType);

        std::cout<<"2 Vehicle Type \n";
        retVal = checkVehicleType(vehicleType);

        if(retVal==false)
        {
            std::cout<<"Parking for 2 wheeler or 4 wheeler \n";
            std::cout<<"Press Any Key For Re-Enter \n";
            getline(std::cin,wrongopt);
        }
    }
    while(retVal==false );
}
std::string vehicleDetailsN::vehicleDetailsC::getVehicleType()
{
    return vehicleType;
}
std::string vehicleDetailsN::vehicleDetailsC::getVehicleNumber()
{
    return vehicleNumber;
}
std::string vehicleDetailsN::vehicleDetailsC::getVehicleOwner()
{
    return vehicleOwner;
}
std::string vehicleDetailsN::vehicleDetailsC::getInTime()
{
    return inTime;
}
std::string vehicleDetailsN::vehicleDetailsC::getOutTime()
{
    return outTime;
}
std::string vehicleDetailsN::vehicleDetailsC::getMobileNumber()
{
    return mobileNumber;
}
void vehicleDetailsN::vehicleDetailsC::readDataFromVehicleData
(
    vehicleDetailsN::vehicleDetailsC &obj
)
{
    obj.vehicleNumber = getVehicleNumber();
    obj.vehicleOwner = getVehicleOwner();
    obj.inTime = getInTime();
    obj.outTime = getOutTime();
    obj.mobileNumber = getMobileNumber();
    obj.vehicleType = getVehicleType();
    
}
std::string vehicleDetailsN::vehicleDetailsC::getSlotNum()
{
    return slotNum;
}
void vehicleDetailsN::vehicleDetailsC::setSlotNumber()
{
    std::string slot;
    std::ifstream file("data/slotFile.csv");
    std::string line;
    std::string lastline;
    
    if(file.is_open()==true)
    {

        if(file.peek()==true)
        {
            slotNum="1";
        }
        else
        {
            while(getline(file,line))
            {
                if(!line.empty())
                {
                    lastline =line;
                }
            }      
            std::stringstream st(lastline);
            
            getline(st,slotNum,',');      
        }

        std::cout<<"slotNumber = "<<slotNum<<std::endl;
    }
}
void vehicleDetailsN::vehicleDetailsC::setVehicleNumber()
{
    bool retVal =false;
    std::string wrongEnt;
    do
    {
        clearScreen();
        parkingFirmName();

        std::cout<<"Vehicle Number \n";
        getline(std::cin,vehicleNumber);

        //check number is valid or not.
        retVal = checkVehicalNumber(vehicleNumber);
        //std::cout<<"retVal = "<<retVal<<std::endl;

        int length = vehicleNumber.length();
        //std::cout<<"length = "<<length<<std::endl;


        if(length!=10)
        {
            retVal = false;
        }

        if(retVal == false)
        {
            std::cout<<"Please Entered Vehicle Number In Correct Format\n";
            std::cout<<"Example : MP09WE1234\n";
            std::cout<<"Press Any Key For Re-Enter\n";
            getline(std::cin,wrongEnt);
        }
        else
        {
            for(char &ch:vehicleNumber)
            {
                ch = toupper(ch);
            }
            break;
        }
    }
    while(retVal==false );
}
void vehicleDetailsN::vehicleDetailsC::setVehicleOwner()
{
    bool retVal =false;
    std::string wrongopt;
    do
    {
        clearScreen();
        parkingFirmName();

        std::cout<<"Driver Name \n";
        getline(std::cin,vehicleOwner);

        retVal = checkNameWithSpace(vehicleOwner);

        if(retVal==false)
        {
            std::cout<<"Driver Name Should Be Combination of UperCase and LowerCase No Special Symbole \n";
            std::cout<<"Press any key for Re-Enter\n";
            getline(std::cin,wrongopt);
        }
    }
    while(retVal==false );
}
void vehicleDetailsN::vehicleDetailsC::setInTime()
{
    std::time_t now = std::time(0);
    inTime = std::ctime(&now);
    inTime.pop_back();

}
void vehicleDetailsN::vehicleDetailsC::setOutTime()
{
    std::time_t now = std::time(0);
    outTime = std::ctime(&now);
    outTime.pop_back();
}
void vehicleDetailsN::vehicleDetailsC::updateOutTime(std::string oT)
{
    outTime = oT;
}
void vehicleDetailsN::vehicleDetailsC::setMobileNumber()
{
    bool validFlag = false;
    int length;
    std::string wrongOpt;
    do
    {
        clearScreen();
        parkingFirmName();

        std::cout<<"Driver Mobile Number\n";
        getline(std::cin,mobileNumber);

        validFlag = checkOnlyNumber(mobileNumber);
        length = mobileNumber.length();
        if(length!=10)
        {
           validFlag=false; 
        }
        if(validFlag == false)
        {
            std::cout<<"Mobile Number Should Not Contain, Letters\n";
            std::cout<<"Press Any Key for Re-Enter\n";
            getline(std::cin,wrongOpt);
        }
    }while(validFlag == false);
}
void vehicleDetailsN::vehicleDetailsC::displayVehicalDetails()
{
    clearScreen();
    parkingFirmName();

    std::cout<<"Vehicle Number      : "<<getVehicleNumber()<<std::endl;
    std::cout<<"Driver Name         : "<<getVehicleOwner()<<std::endl;
    std::cout<<"In Time             : "<<getInTime();
    std::cout<<"Mobile Number       : "<<getMobileNumber()<<std::endl;
    lines();
}