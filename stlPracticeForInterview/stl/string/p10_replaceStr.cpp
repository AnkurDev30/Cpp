#include<iostream>
#include<string>
#include<fstream>
#include<sstream>
class replace
{
    private:
        std::string mainStr;
        std::string replaceStr;
    public:
        replace()
        {
            std::cout<<"Given Name : "<<std::endl;
            getline(std::cin,mainStr);
            std::cout<<"New Name : "<<std::endl;
            getline(std::cin,replaceStr);
        }
        void operation();
        int stringNumValidAndGive(std::string str);
        bool nameValid(std::string);
        
};
bool replace::nameValid(std::string str)
{
    bool val =true;
    for(char &ch:str)
    {
        ch=toupper(ch);
    }
    for(int i =0 ;i<str.length();i++)
    {
        if(((str[i]>='A' && str[i]<='Z')||(str[i]==' '))==false)
        {
            val = false;
            break;
        }
    }
    return val;
}
int replace::stringNumValidAndGive(std::string str)
{
    int num =0;
    if(str.length()==1)
    {
        std::stringstream ss(str);
        ss>>num;
    }
    else
    {
        //num=0;
        std::cout<<"enter number wrong\n";
    }
    return num;
}
void replace :: operation()
{
    bool oldNameValid = nameValid(mainStr);
    std::string startPlace;
    int sp;
    std::string noOfChar;
    int np;
    if(oldNameValid == true)
    {
        bool newNameValid = nameValid(replaceStr);
        if(newNameValid == true)
        {
            std::cout<<"Start point for replace"<<std::endl;
            getline(std::cin,startPlace);
            sp = stringNumValidAndGive(startPlace);

            std::cout<<"Number of character change"<<std::endl;
            getline(std::cin,noOfChar);
            np = stringNumValidAndGive(noOfChar);   
            
            if(sp%1 == 0 && np%1==0)
            {
                std::ofstream f("newNameFile.csv",std::ios::app);
                if(f.is_open())
                {
                    f<<mainStr<<","<<replaceStr<<std::endl;
                    std::cout<<"Data saved\n";
                }
                else
                {
                    std::cout<<"Data not saved\n";
                }
                mainStr.replace(sp,np,replaceStr);
                std::cout<<"New Name  : "<<mainStr<<std::endl;
            }
        }
        else
        {
            std::cout<<"new name incorrect\n";
        }
    }
    else
    {
        std::cout<<"old name incorrect\n";
    }
}
int main()
{
    replace r1;
    r1.operation();
}