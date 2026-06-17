#include<iostream>
#include<string>
class checkPalin
{
    private:
        std::string ipStr;
        std::string s2;
    public:
        checkPalin()
        {
            std::cout<<"Give String for reverse\n";
            getline(std::cin,ipStr);
            s2 = ipStr;
        }
        void checkPalindrom()
        {
           // std::cout<<"Before Reverse : "<<ipStr<<std::endl;
            for(int i =0,j=(ipStr.length()-1);i<j;i++,j--)
            {
                char temp=ipStr[i];
                ipStr[i]=ipStr[j];
                ipStr[j]=temp;
            }
            if(ipStr == s2)
            {
                std::cout<<"Palindrom String\n";
            }
            else
            {
                std::cout<<"Not Palindrom String\n";
            }
        }
};
int main()
{
    checkPalin p1;
    p1.checkPalindrom();
}