#include<iostream>
#include<string>
class reverseString
{
    private:
        std::string ipStr;
    public:
        reverseString()
        {
            std::cout<<"Give String for reverse\n";
            getline(std::cin,ipStr);
        }
        void reversing()
        {
            std::cout<<"Before Reverse : "<<ipStr<<std::endl;
            for(int i =0,j=(ipStr.length()-1);i<j;i++,j--)
            {
                char temp=ipStr[i];
                ipStr[i]=ipStr[j];
                ipStr[j]=temp;
            }
            std::cout<<"After Reverse : "<<ipStr<<std::endl;
        }
};
int main()
{
    reverseString r1;
    r1.reversing();
}