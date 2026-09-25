//Extract city code.
#include<iostream>
#include<string>
#include<fstream>
#include<sstream>
class getCityFromMP
{
    private:
        std::string vehicleNum;
        std::string cityCode;
    public:
        std::string giveCity(std::string vh);
        std::string readCityAsPerCityCode(std::string cityCode);
        void operationFun();
        getCityFromMP()
        {
            std::cout<<"Give Vehicle Number\n";
            getline(std::cin,vehicleNum);
        }
        bool checkVehicleNumber(std::string vehicleNumber);
        bool checkVehStr(std::string str);
};
std::string getCityFromMP::readCityAsPerCityCode(std::string cityCode)
{
    std::ifstream f("cityCode.csv",std::ios::in);
    std::string cityNameP="No City";
    if(f.is_open()==true)
    {
        std::string line;
        std::string city;
        std::string cityCodeT;
        while(getline(f,line))
        {
            std::stringstream ss(line);
            getline(ss,cityCodeT,',');
            getline(ss,city,',');
            if(cityCodeT == cityCode)
            {
                cityNameP = city;
                break;
            }
        }
    }
    return cityNameP;
}
void getCityFromMP::operationFun()
{
    bool validity = false;
    validity = checkVehicleNumber(vehicleNum);
    std::string city;
    if(validity == true)
    {
        cityCode = vehicleNum.substr(0,4);
        for(char &ch:cityCode)
        {
            ch=toupper(ch);
        }
        city = readCityAsPerCityCode(cityCode);
        std::cout<<"City Code = "<<cityCode<<std::endl;
        std::cout<<"City Name = "<<city<<std::endl;
    }
}
bool getCityFromMP::checkVehicleNumber(std::string vehicleNumber)
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
bool getCityFromMP::checkVehStr(std::string str)
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

int main()
{
    getCityFromMP obj;
    obj.operationFun();
}