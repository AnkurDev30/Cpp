//Program 9
//Search substring using find().

#include<iostream>
#include<string>
class findData
{
    private:
        std::string inputStr;
        std::string subStr;
    public:
        findData()
        {
            std::cout<<"Given full name:\n";
            getline(std::cin,inputStr);
            std::cout<<"Enetr substring:\n";
            getline(std::cin,subStr);            
        }
        void findFun()
        {
            if(inputStr.find(subStr)==std::string::npos)
            {
                std::cout<<"Substring not found\n";
            }
            else
            {
                std::cout<<"Substring found\n";
            }
        }
};
int main()
{
    findData f1;
    f1.findFun();
}
