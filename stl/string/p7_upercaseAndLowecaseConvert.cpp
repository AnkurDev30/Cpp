#include<iostream>
#include<sstream>
#include<string>
class converstion
{
    public:
        std::string ToLower(std::string);
        std::string ToUpper(std::string);
};
std::string converstion::ToLower(std::string str)
{
    for(int i=0;i<str.length();i++)
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            str[i] = str[i]+32;
        }
    }
    return str;
}
std::string converstion::ToUpper(std::string str)
{
    for(int i=0;i<str.length();i++)
    {
        if(str[i]>='a' && str[i]<='z')
        {
            str[i] = str[i]-32;
        }
    }
    return str;
}
class ipString
{
    private:
        std::string str;
    public:
        ipString()
        {
            std::cout<<"take a name : "<<std::endl;
            getline(std::cin,str);
        }
        void conversion()
        {
            std::string inpt;
            int optn;
            converstion c1;
            std::string op;
            std::cout<<"For Upper Press 1\nFor Lower Press 2\n";
            getline(std::cin,inpt);

            std::stringstream ss(inpt);
            ss>>optn;
            if(optn == 1)
            {
                op = c1.ToUpper(str);
            }
            else if(optn == 2)
            {
                op = c1.ToLower(str);
            }
            else
            {
                std::cout<<"Wrong option select\n";
            }
            std::cout<<"Output : "<<op<<std::endl;
        }
};
int main()
{
    ipString i;
    i.conversion();
    return 0;
}