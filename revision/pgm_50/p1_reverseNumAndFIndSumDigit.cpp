//Reverse a number and find sum of digits loops, functions, references

#include<iostream>
class reverseAnumber
{
    public:
        int num;
        void reverseNumber()
        {
            std::cout<<"enter a number\n";
            std::cin>>num;
            int sum=0;
            while(num!=0)
            {
                int r=num%10;
                sum=sum*10+r;
                num=num/10;
            }
            std::cout<<"reverse a number = "<<sum<<std::endl;
        }
};
class sumOfDigit
{
    public:
        int num;
        void sumOfDigitFun()
        {
            std::cout<<"enter a number\n";
            std::cin>>num;
            int sum=0;
            while(num!=0)
            {
                int r=num%10;
                sum=sum+r;
                num=num/10;
            }
            std::cout<<"sum of digit = "<<sum<<std::endl;
        }
};
int main()
{
    reverseAnumber r1;
    r1.reverseNumber();
    sumOfDigit s1;
    s1.sumOfDigitFun();
}