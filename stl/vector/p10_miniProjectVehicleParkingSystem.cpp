/*
🎯 Mini Assignment (Industrial Style)

Create:

Parking Vehicle Database

1. Add Vehicle
2. Search Vehicle
3. Display All Vehicles
4. Delete Vehicle
*/
#include<iostream>
#include<vector>
#include<sstream>
#include<fstream>
#include<iomanip>
class Vehicle{

    private:
        std::string vehicleOwner;
        std::string vehicleNumber;
        
    public:
        bool checkVehicleNumber(std::string vehicleNumber);
        bool checkVehStr(std::string str);
        bool checkOwnerName(std::string vehicleOwner);
        void setVehicleNumber(bool *b);
        void setVehicleOwner(bool *b);
        std::string getVehicleNumber();
        std::string getVehicleOwner();
        bool enterVehicle();
        void updateData(std::string vehN,std::string vehO);
};
void Vehicle::updateData(std::string vehN,std::string vehO)
{
    bool valid = checkVehicleNumber(vehN);
    if(valid == true)
    {
        vehicleNumber = vehN;
        for(char &ch:vehicleNumber)
        {
            ch=toupper(ch);
        }
    }  
    else
    {
        std::cout<<"Invalid vehicle number\n";
    } 

    bool valid1 = checkOwnerName(vehO);
    
    if(valid1 == true)
    {
        vehicleOwner = vehO;
        for(char &c:vehicleOwner)
        {
            c=toupper(c);
        }
    }
    else
    {
        std::cout<<"Invalid vehicle owner name\n";
    } 
}
bool Vehicle::enterVehicle()
{
    bool valid =false;
    bool valid1 =false;
    bool reValid = false;
    setVehicleNumber(&valid);
    setVehicleOwner(&valid1);
    if(valid==true&& valid1==true)
    {
        reValid =true;
    }
    return reValid;
}
std::string Vehicle::getVehicleNumber()
{
    return vehicleNumber;
}
std::string Vehicle::getVehicleOwner()
{
    return vehicleOwner;
}
bool Vehicle::checkVehStr(std::string str)
{
    bool valid =false;
    for(char &ch:str)
    {
        ch=toupper(ch);
    }
    if(str[0]>='A'&& str[0]<='Z')
    {
        if(str[1]>='A'&& str[1]<='Z')
        {
            if(str[2]>='0'&& str[2]<='9')
            {
                if(str[3]>='0'&& str[3]<='9')
                {
                    if(str[4]>='A'&& str[4]<='Z')
                    {
                        if(str[5]>='A'&& str[5]<='Z')
                        {
                            if(str[6]>='0'&& str[6]<='9')
                            {
                                if(str[7]>='0'&& str[7]<='9')
                                {
                                    if(str[8]>='0'&& str[8]<='9')
                                    {
                                        if(str[9]>='0'&& str[9]<='9')
                                        {
                                            valid=true;
                                        }
                                    }
                                }
                            } 
                        }
                    }
                }
            }
        }
    }
    return valid;
}
bool Vehicle::checkVehicleNumber(std::string vehicleNumber)
{
    bool valid = false;
    int length = vehicleNumber.length();
    if(length == 10)
    {
        valid = checkVehStr(vehicleNumber);
    }
    else
    {
        std::cout<<"Invaild Vehicle Number\n";
    }
    return valid;
}
void Vehicle::setVehicleNumber(bool *b)
{
    std::string str;
    std::cout<<"Vehicle Number : \n";
    getline(std::cin,str);
    bool valid = checkVehicleNumber(str);
    *b=valid;
    if(valid == true)
    {
        vehicleNumber = str;
        for(char &ch:vehicleNumber)
        {
            ch=toupper(ch);
        }
    }
}
void Vehicle::setVehicleOwner(bool *b)
{
    std::string str;
    std::cout<<"Driver Name : \n";
    getline(std::cin,str);  

    bool valid = checkOwnerName(str);
    *b =valid;
    if(valid == true)
    {
        vehicleOwner = str;
        for(char &c:vehicleOwner)
        {
            c=toupper(c);
        }
    }
}
bool Vehicle::checkOwnerName(std::string name)
{
    bool valid =true;
    for(char &ch:name)
    {
        ch=toupper(ch);
    }
    for(int i=0;i<name.length();i++)
    {
        if(!(name[i]>='A' && name[i]<='Z'))
        {
            valid = false;
            break;
        }
    }
    return valid;
}
class fileWork
{
    public:
        bool write(Vehicle obj);
        bool remove();
        bool writeAfterRemove(Vehicle obj);
        void search();
        void display();
};
void fileWork::display()
{
    #ifdef _WIN32
        system("cls");     // Windows
    #else
        system("clear");   // Linux/Ubuntu
    #endif

    std::cout<<"Display Data\n";

    std::ifstream f("data.csv",std::ios::in);
 
    Vehicle objVehicle;
    std::vector<Vehicle> vect;

    if(f.is_open()==true)
    {
        std::string line;
        std::string vh;
        std::string vo;
        while(getline(f,line))
        {
            std::stringstream ss(line);
            getline(ss,vh,',');
            getline(ss,vo,',');
            objVehicle.updateData(vh,vo);
            vect.push_back(objVehicle);
        }

        for(size_t i =0;i<vect.size();i++)
        {
            if(i == 0)
            {
                std::cout<<" | "<<std::left<<std::setw(15)<<"Vehicle Num"<<" | "
                <<" | "<<std::left<<std::setw(15)<<"Driver Name"<<" | "<<std::endl;
            }

            std::cout<<" | "<<std::left<<std::setw(15)<<vect[i].getVehicleNumber()<<" | "
            <<" | "<<std::left<<std::setw(15)<<vect[i].getVehicleOwner()<<" | "<<std::endl;
        }
        std::cout<<std::endl;
    }

}
void fileWork::search()
{
    std::cout<<"Search Vehicle\n";
    std::cout<<"Vehicle Number : \n";
    std::string str;
    std::ifstream f("data.csv",std::ios::in);
    getline(std::cin,str);
    Vehicle objVehicle;
    bool vaild = objVehicle.checkVehicleNumber(str);
    if(vaild == true)
    {
        for(char &ch:str)
        {
            ch=toupper(ch);
        }
        if(f.is_open()==true)
        {
            std::string line;
            std::string vh;
            while(getline(f,line))
            {
                std::stringstream ss(line);
                getline(ss,vh,',');
                if(vh == str)
                {
                    std::cout<<"Vehicle number availble\n";
                    break;
                }
            }
        }
    }
    else
    {
        std::cout<<"Enter Correct Vehicle Number\n";
    }

}
bool fileWork::write(Vehicle obj)
{
    bool boreturn =false;
    std::ofstream f("data.csv",std::ios::app);
    if(f.is_open()==true)
    {
        boreturn=true;
        std::cout<<"Save Start\n";
        f<<obj.getVehicleNumber()<<","<<obj.getVehicleOwner()<<"\n";
        f.close();
    }
    return boreturn;
}
bool fileWork::writeAfterRemove(Vehicle obj)
{
    bool boreturn =false;
    std::ofstream f("data.csv");
    if(f.is_open()==true)
    {
        boreturn=true;
        std::cout<<"Save Start\n";
        f<<obj.getVehicleNumber()<<","<<obj.getVehicleOwner()<<"\n";
        f.close();
    }
    return boreturn;
}
bool fileWork::remove()
{
    bool boreturn =false;
    std::ifstream f("data.csv",std::ios::in);
    std::string veh[2];
    Vehicle vehObj;
    std::vector<Vehicle> vect;
    //read data.
    if(f.is_open()==true)
    {
        boreturn=true;
        std::string data;
        std::cout<<"Read start\n";
        while(getline(f,data))
        {
            std::stringstream ss(data);
            getline(ss,veh[0],',');
            getline(ss,veh[1],',');
            vehObj.updateData(veh[0],veh[1]);
            vect.push_back(vehObj);
        }

        //search
        std::string vehNu;

        std::cout<<"Vehicle Number : \n";
        getline(std::cin,vehNu);
        bool valid = vehObj.checkVehicleNumber(vehNu);
        if(valid != true)
        {
            std::cout<<"Enter correct vehicle number\nExample: MP12ER7500\n";
        }
        else
        {
            int index;
            for(char &ch:vehNu)
            {
                ch=toupper(ch);
            }
            
            for(size_t i=0;i<vect.size();i++)
            {
                if(vehNu == vect[i].getVehicleNumber())
                {
                    index=i;
                    break;
                }
            }
            vect.erase(vect.begin()+index);
            for(size_t i=0;i<vect.size();i++)
            {
                bool val= writeAfterRemove(vect[i]);
                if(val == false)
                {
                    std::cout<<"Issue with firl opening at index = "<<i<<std::endl;
                }
            }
        }
    }
    return boreturn;
}
int main()
{
    std::string opt;
    int optn;
    std::cout<<"Select Option\n";
    std::cout<<"1) Enter Vehicle\n";
    std::cout<<"2) Exit Vehicle\n";
    std::cout<<"3) Search Vehicle\n";
    std::cout<<"4) Display All Vehicle\n";
    getline(std::cin,opt);
    std::stringstream ss(opt);
    ss>>optn;
    bool stateVar =false;

    Vehicle opt1;
    fileWork fileW;
    switch(optn)
    {
        case 1:
            stateVar = opt1.enterVehicle();
            if(stateVar == true)
            {
                fileW.write(opt1);
                stateVar = false;
            }
            break;
        case 2:
            fileW.remove();
            stateVar = false;
            break;
        case 3:
            fileW.search();
            stateVar = false;
            break;
        case 4:
            fileW.display();
            stateVar = false;
            break;
        default:
            break;
    }
}
