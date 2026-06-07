#include<fstream>
#include<cctype>
#include<string>
#include<sstream>
#include<ctime>
#include<vector>
#include"parkingOperation.h"

void parkingOperationN::parkingOperationC::fillAvailableSlot
(
    std::vector<vehicleDetailsN::vehicleDetailsC> &v1,
    std::vector<vehicleDetailsN::vehicleDetailsC> &v2,
    int index,
    std::string slt
)
{

    vehicleDetailsN::vehicleDetailsC lastIndexDataObj;
    
    lastIndexDataObj.readUpdateSlotNumber(slt);
    lastIndexDataObj.readUpdateVehicleNumber(v2[0].getVehicleNumber());
    lastIndexDataObj.readUpdateVehicleOwner(v2[0].getVehicleOwner());
    lastIndexDataObj.readUpdateInTime(v2[0].getInTime());
    lastIndexDataObj.readUpdateOutTime(v2[0].getOutTime());
    lastIndexDataObj.readUpdateMobileNumber(v2[0].getMobileNumber());
    lastIndexDataObj.readUpdateVehicleType(v2[0].getMobileNumber());

    v1[index] = lastIndexDataObj;

}
//bool parkingOperationN::parkingOperationC::readData()
//{
//    bool readStatus = false;
//    
//    std::string line;
//    std::ofstream file("data/slotFile.txt");
//    std::ifstream fileR("data/slotFile.txt");
//    if(file.is_open()==true)
//    {
//        readStatus = true;
//        if(fileR.peek() == EOF)
//        {
//            std::cout<<"File is Empty\n";
//        }
//        else
//        {
//
//        }
//       
//    }
//    return readStatus;
//}
void parkingOperationN::parkingOperationC::readFullData
(
    std::vector<vehicleDetailsN::vehicleDetailsC> &vecPark
)
{
    //open file
    std::ifstream file("data/slotFile.csv");
    //local object
    vehicleDetailsN::vehicleDetailsC object;
    //local variable.
    std::string vehicleNumber;
    std::string vehicleOwner;
    std::string inTime;
    std::string outTime;
    std::string mobileNumber;
    std::string vehicleType;
    std::string line;
    std::string slot;
    //if file is open
    if(file.is_open()==true)
    {
        //read line by line
        while(getline(file,line))
        {
            //keep data in ss.vecPark
            std::stringstream ss(line);
            //diffrentiate by ,
            getline(ss,slot,',');
            getline(ss,vehicleNumber,',');
            getline(ss,vehicleOwner,',');
            getline(ss,mobileNumber,',');
            getline(ss,vehicleType,',');
            getline(ss,inTime,',');
            getline(ss,outTime,',');

            //update on object.
            object.readUpdateSlotNumber(slot);
            object.readUpdateVehicleNumber(vehicleNumber);
            object.readUpdateVehicleOwner(vehicleOwner);
            object.readUpdateMobileNumber(mobileNumber);
            object.readUpdateVehicleType(vehicleType);
            object.readUpdateInTime(inTime);
            object.readUpdateOutTime(outTime);
            //update in vector.
            vecPark.push_back(object);

        }
    }
    else
    {

    }
}
int  parkingOperationN::parkingOperationC::getBlankSlot
(
    std::vector<vehicleDetailsN::vehicleDetailsC> &vecPark,
    bool *avaliableFlag,
    std::string *slot
)
{
    int index = 0;
    std::string slt;

    for(size_t i=0;i<vecPark.size();i++)
    {
    #if(DEBUG == 1)
        std::cout<<"vehicle number = "<<vecPark[i].getVehicleNumber()<<std::endl;
    #endif

        if("XXXXX" == vecPark[i].getVehicleNumber())
        {
            index =i;
            slt = vecPark[i].getSlotNum();
            *slot=slt;
            *avaliableFlag = true;
            break;
        }
    }
    return index;
}
bool parkingOperationN::parkingOperationC::writeDataEntry
(
    std::vector<vehicleDetailsN::vehicleDetailsC> &vecPark
)
{
    bool writeStatus = false;
    bool availableFalg=false;
    
    std::ifstream fileR("data/slotFile.csv");
    std::vector<vehicleDetailsN::vehicleDetailsC> vecReadFull;

    std::string line;
    std::string lastline;
    int slotNumber = 0;
    std::string slotNumberFromAvailFalg;
    readFullData(vecReadFull);

    int index = getBlankSlot(vecReadFull,&availableFalg,&slotNumberFromAvailFalg);
    #if(DEBUG == 1)
        std::cout<<" index = "<<index<<std::endl;
        std::cout<<" availableFalg = "<<availableFalg<<std::endl;
    #endif
    if(availableFalg == true)
    {
        #if(DEBUG == 1)
        std::cout<<"slot available\n";
        #endif
        fillAvailableSlot(vecReadFull,vecPark,index,slotNumberFromAvailFalg);
        pasteData(vecReadFull,slotNumber);
    }
    else
    {
        while(getline(fileR,line))
        {
            if(!line.empty())
            {
                lastline =line;
            }
        }

        std::stringstream st(lastline);
        st>>slotNumber;
        #if(DEBUG == 1)
        std::cout<<"slotNumber = "<<slotNumber<<std::endl;
        #endif
        slotNumber++;

        pasteData1(vecPark,slotNumber);
    }

return writeStatus;
}
void parkingOperationN::parkingOperationC::pasteData1
(
    std::vector<vehicleDetailsN::vehicleDetailsC> &v1,
    int slt
)
{
    int  slotNumber = slt;  
    std::string vehicleNumber;
    std::string vehicleOwner;
    std::string inTime;
    std::string outTime;
    std::string mobileNumber;
    std::string vehicleType;
    std::ofstream fileW("data/slotFile.csv",std::ios::app);
    for(size_t i=0;i<v1.size();i++)
    { 
        vehicleNumber   = v1[i].getVehicleNumber();
        vehicleOwner    = v1[i].getVehicleOwner();
        inTime          = v1[i].getInTime();
        outTime         = v1[i].getOutTime(); ;
        mobileNumber    = v1[i].getMobileNumber() ;
        vehicleType     = v1[i].getVehicleType();

        fileW<<slotNumber<<","
        <<vehicleNumber<<","
        <<vehicleOwner<<","
        <<mobileNumber<<","
        <<vehicleType<<","
        <<inTime<<","
        <<outTime<<std::endl;
        
    }
}
void parkingOperationN::parkingOperationC::pasteData
(
    std::vector<vehicleDetailsN::vehicleDetailsC> &v1,
    int slt
)
{
    int  slotNumber = slt;  
    std::string vehicleNumber;
    std::string vehicleOwner;
    std::string inTime;
    std::string outTime;
    std::string mobileNumber;
    std::string vehicleType;

    std::ofstream fileW("data/slotFile.csv");

    for(size_t i=0;i<v1.size();i++)
    { 
        vehicleNumber   = v1[i].getVehicleNumber();
        vehicleOwner    = v1[i].getVehicleOwner();
        inTime          = v1[i].getInTime();
        outTime         = v1[i].getOutTime(); ;
        mobileNumber    = v1[i].getMobileNumber() ;
        vehicleType     = v1[i].getVehicleType();

        std::string  slt = v1[i].getSlotNum();
        std::stringstream st(slt);
        st>>slotNumber;

        fileW<<slotNumber<<","
        <<vehicleNumber<<","
        <<vehicleOwner<<","
        <<mobileNumber<<","
        <<vehicleType<<","
        <<inTime<<","
        <<outTime<<std::endl;

    }
}
bool parkingOperationN::parkingOperationC::writeDataFull(std::vector<vehicleDetailsN::vehicleDetailsC> &vecPark)
{
    bool writeStatus = false;
    
    std::string vehicleNumber;
    std::string vehicleOwner;
    std::string inTime;
    std::string outTime;
    std::string mobileNumber;
    std::string vehicleType;
    std::string line;
    std::string lastline;
    int slotNumber = 0;
    #if(DEBUG == 1)
    std::cout<<"slotNumber = "<<slotNumber<<std::endl;
    #endif
    std::ofstream fileW("data/slotFile.csv"); 
    if((fileW.is_open())==true)
    {
        for(int i=0;i<(int)vecPark.size();i++)
        {
            vehicleNumber   = vecPark[i].getVehicleNumber();
            vehicleOwner    = vecPark[i].getVehicleOwner();
            inTime          = vecPark[i].getInTime();
            outTime         = vecPark[i].getOutTime(); ;
            mobileNumber    = vecPark[i].getMobileNumber() ;
            vehicleType     = vecPark[i].getVehicleType();
            
            slotNumber++;
            fileW<<slotNumber<<","
            <<vehicleNumber<<","
            <<vehicleOwner<<","
            <<mobileNumber<<","
            <<vehicleType<<","
            <<inTime<<","
            <<outTime<<std::endl;
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
    (void)writeDataEntry(vecPark);

}
void parkingOperationN::parkingOperationC::vehicleExit()
{
    #if(DEBUG == 1)
    std::cout<<"exit option\n";
    #endif
    int slotNum;
    std::string vehicleNumber;

    std::vector<vehicleDetailsN::vehicleDetailsC> vecPark;
    vehicleDetailsN::vehicleDetailsC objectVeh;
    calculationN::calculationC calObj;
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
        readFullData(vecPark);

        for(size_t i=0;i<vecPark.size();i++)
        {
            if(vehicleNumber == vecPark[i].getVehicleNumber())
            { 

                unsigned int money = calObj.moneyCalcAsPerTime
                                    (
                                        vecPark[i].getInTime(),
                                        vecPark[i].getOutTime()
                                    ); 
                vecPark[i].setOutTime();  
                std::cout<<"Please pay : "<<money<<"/- INR"<<std::endl;                  
                saveData(vecPark[i],money);
                vecPark[i].readUpdateVehicleNumber("XXXXX");
                vecPark[i].readUpdateVehicleOwner("XXXXX");
                vecPark[i].readUpdateInTime("XXXXX");
                vecPark[i].readUpdateOutTime("XXXXX");
                vecPark[i].readUpdateMobileNumber("XXXXX");
                vecPark[i].readUpdateVehicleType("XXXXX");
                
            }
        }
        writeDataFull(vecPark);
    }
    else
    {
        std::cout<<"no successfully";
    }

}
void parkingOperationN::parkingOperationC::saveData
(
    vehicleDetailsN::vehicleDetailsC obj,
    unsigned int money
)
{
    //std::cout<<"data/save data\n";
    std::ofstream fsave("data/saveDta.csv",std::ios::app);
    std::ifstream fread("data/saveDta.csv");
    
    if(fsave.is_open()==true)
    {
       if(fread.peek()==true)
       {
            fsave<<"Slot no"<<","
            <<"Vehicle no"<<","
            <<"Vehicle Owner"<<","
            <<"Vehicle Type"<<","
            <<"In Time"<<","
            <<"Out Time"<<","
            <<"Mobile"<<","
            <<"Money"<<","<<std::endl;
       }

       fsave<<obj.getSlotNum()<<","
       <<obj.getVehicleNumber()<<","
       <<obj.getVehicleOwner()<<","
       <<obj.getVehicleType()<<","
       <<obj.getInTime()<<","
       <<obj.getOutTime()<<","
       <<obj.getMobileNumber()<<","
       <<money<<","<<std::endl;

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
        
        while(getline(file,line))
        {
            std::stringstream ss(line);
            getline(ss,slotNum,',');
            getline(ss,veh,',');
            //std::cout<<"read "<<slotNum<<veh<<std::endl;
            if(veh == vehicleNumber)
            {
                std::stringstream slotR(slotNum);
                checkVehicleNum=true;
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
unsigned int calculationN::calculationC::moneyCalcAsPerTime
(
    std::string inTime,std::string outTime
)
{
    //Sat Jun  6 15:24:14 2026
    unsigned int money ;
    std::string dayNameIn;
    std::string monthNameIn;
    int dayIn;
    std::string timeIn;
    int yearIn;

    std::string dayNameOut;
    std::string monthNameOut;
    int dayOut;
    std::string timeOut;
    int yearOut;

    int hr[2];
    int min[2];

    int hrOutput;
    int minOutput;
    std::stringstream ssIn(inTime);
    ssIn >> dayNameIn >> monthNameIn >> dayIn >> timeIn >> yearIn;

    std::stringstream ssOut(inTime);
    ssOut >> dayNameOut >> monthNameOut >> dayOut >> timeOut >> yearOut;

    int noOfDays  ;
    int monthCalc = monthCalcFun(yearIn,yearOut,monthNameIn,monthNameOut);
    std::string hrSS,minSS;
    if(monthCalc == 2)//same  month
    {
        //date diffrence.
        noOfDays = dayOut-dayIn;
        std::stringstream inT(timeIn);
        getline(inT,hrSS,':');
        getline(inT,minSS,':');

        std::stringstream(hrSS)>>hr[0];
        std::stringstream(minSS)>>min[0];

        std::stringstream ouT(timeOut);
        getline(ouT,hrSS,':');
        getline(ouT,minSS,':');
        std::stringstream(hrSS)>>hr[1];
        std::stringstream(minSS)>>min[1];
        if(noOfDays == 0)
        {
            hrOutput    = hr[1] -   hr[0];
            minOutput   = min[1]-   min[0];
            money = moneyCalc(hrOutput,minOutput);
        }
        else
        {
            money = 1000;
        }
    }
    else if(monthCalc == 100)
    {
        money =15000;
    }
    else if(monthCalc<100)//diffrent  month
    {
        if(monthCalc==1)  money=5000;
        else if(monthCalc>=2)  money=6000;
        else if(monthCalc>=3)  money=9000;
        else if(monthCalc>=6)  money=12000;
        else if(monthCalc>11) money=12000;
    }    
    return money;
}
int calculationN::calculationC::monthCalcFun
(
    int y1,
    int y2,
    std::string m1,
    std::string m2
)
{
    int mo1 = monthFun(m1);
    int mo2 = monthFun(m2);
    int val=0;
    if(y1==y2)
    {
        if(mo1<mo2)
        {
            val = mo2-mo1;
        }
        else
        {
            if(mo1==mo2)
            {
                 val=2;
            }
        }
    }
    else
    {
        if(y1<y2)   
        {
            val =100;
        }
    }
    return val;
}
int calculationN::calculationC::monthFun(std::string month)
{
    int mon =0;

    if(month == "Jan") mon = 1;
    if(month == "Feb") mon = 2;
    if(month == "Mar") mon = 3;
    if(month == "Apr") mon = 4;
    if(month == "May") mon = 5;
    if(month == "Jun") mon = 6;
    if(month == "Jul") mon = 7;
    if(month == "Aug") mon = 8;
    if(month == "Sep") mon = 9;
    if(month == "Oct") mon = 10;
    if(month == "Nov") mon = 11;
    if(month == "Dec") mon = 12;

    return mon;
};
unsigned int calculationN::calculationC::moneyCalc(int hr,int min)
{
    unsigned int money = 0;
    if(hr<1)
    {
        money =50;
    }
    else if(hr>1)
    {
        money =70;
    }
    else if(hr>2)
    {
        money =100;
    }
    else if(hr>6)
    {
        money =200;
    }
    else if(hr>12)
    {
        money =300;
    }
    else if(hr>23)
    {
        money =300;
    }
    return money;
}
