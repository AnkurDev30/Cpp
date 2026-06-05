#include"parkingOperation.h"
#include<fstream>
#include<cctype>
#include<string>
#include<sstream>
#include<ctime>
#include<vector>
bool parkingOperationN::parkingOperationC::readData()
{
    bool readStatus = false;
    
    std::string line;
    std::ofstream file("data/slotFile.txt");
    std::ifstream fileR("data/slotFile.txt");
    if(!(file.is_open()))
    {
        readStatus = true;
        if(fileR.peek() == EOF)
        {
            std::cout<<"File is Empty\n";
        }
        else
        {

        }
       
    }
    return readStatus;
}
void parkingOperationN::parkingOperationC::readFullData
(
    std::vector<vehicleDetailsN::vehicleDetailsC> &vecPark
)
{
    std::ifstream file("slotFile.csv");
    vehicleDetailsN::vehicleDetailsC object;
    std::string vehicleNumber;
    std::string vehicleOwner;
    std::string inTime;
    std::string outTime;
    std::string mobileNumber;
    std::string vehicleType;
    std::string line;
    if(file.is_open()==true)
    {
        while(getline(file,line))
        {
            
        }
    }
    else
    {

    }


}
bool parkingOperationN::parkingOperationC::writeDataEntry(std::vector<vehicleDetailsN::vehicleDetailsC> &vecPark)
{
    bool writeStatus = false;
    
    std::ofstream fileW("data/slotFile.csv",std::ios::app); 
    std::ifstream fileR("data/slotFile.csv");

    std::string vehicleNumber;
    std::string vehicleOwner;
    std::string inTime;
    std::string outTime;
    std::string mobileNumber;
    std::string vehicleType;
    std::string line;
    std::string lastline;
    int slotNumber = 0;
    
    
    while(getline(fileR,line))
    {
        if(!line.empty())
        {
            lastline =line;
        }
    }
    std::stringstream st(lastline);

 //   std::getline(st);

    st>>slotNumber;

    std::cout<<"slotNumber = "<<slotNumber<<std::endl;
    if((fileW.is_open())==true)
    {
        slotNumber++;
        for(int i=0;i<(int)vecPark.size();i++)
        {
            vehicleNumber   = vecPark[i].getVehicleNumber();
            vehicleOwner    = vecPark[i].getVehicleOwner();
            inTime          = vecPark[i].getInTime();
            mobileNumber    = vecPark[i].getMobileNumber() ;
            vehicleType     = vecPark[i].getVehicleType();
            
            fileW<<slotNumber<<","
            <<vehicleNumber<<","
            <<vehicleOwner<<","
            <<mobileNumber<<","
            <<vehicleType<<","
            <<inTime;
        }
    

    }
    else
    {
        writeStatus =false;
    }
return writeStatus;
}
void parkingOperationN::parkingOperationC::vehicleEnrty()
{
    //vector.
    std::vector<vehicleDetailsN::vehicleDetailsC> vecPark;

    vehicleDetailsN::vehicleDetailsC objectVeh;


    clearScreen();//clear the screen.
    parkingFirmName();//display the header.
    //take vehicle data.
    enterVehicleDetails(objectVeh);
    
    vecPark.push_back(objectVeh);
    writeDataEntry(vecPark);

}
void parkingOperationN::parkingOperationC::vehicleExit()
{
    std::cout<<"exit option\n";
    int slotNum;
    std::string vehicleNumber;

    std::vector<vehicleDetailsN::vehicleDetailsC> vecPark;
    vehicleDetailsN::vehicleDetailsC objectVeh;

     //enter vehicle number.
    std::cout<<"enter vehicle number\n";
    getline(std::cin,vehicleNumber);

    for(char &ch:vehicleNumber)
    {
        ch =toupper(ch);
    }
    bool checkVehicleNumber = checkNumberAvailableOrNot(vehicleNumber,&slotNum);
    if(checkVehicleNumber)
    {
        readFullData(objectVeh);

    }
    else
    {
        std::cout<<"no successfully";
    }

}
bool parkingOperationN::parkingOperationC::checkNumberAvailableOrNot
(
    std::string vehicleNumber,
    int *slot
)
{
    bool checkVehicleNum=false;
    std::ifstream file("data/slotFile.csv");
    std::string line;
    int slotNumVar;
    std::string slotNum;
    std::string veh;
    if(file.is_open()==true)
    {
        checkVehicleNum=true;
        while(getline(file,line))
        {
            std::stringstream ss(line);
            getline(ss,slotNum,',');
            getline(ss,veh,',');
            //std::cout<<"read "<<slotNum<<veh<<std::endl;
            if(veh == vehicleNumber)
            {
                std::stringstream slotR(slotNum);
                slotR>>slotNumVar;
                *slot=slotNumVar;
            }
        }
    }
    else
    {
        checkVehicleNum=false;
        std::cout<<"file not read successfully\n";
    }
    return checkVehicleNum;
}
void parkingOperationN::parkingOperationC::parkingStatus()
{

}
void parkingOperationN::parkingOperationC::History()
{

}

