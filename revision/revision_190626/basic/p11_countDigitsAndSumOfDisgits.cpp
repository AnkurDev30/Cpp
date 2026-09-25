//count digits and sum of digits.
#include<iostream>

void countDigits(int num)
{
    int count=0;
    for(auto c=0;num;c++)
    {
        num=num/10;
        count++;
    }
    std::cout<<"count of digits = "<<count<<std::endl;
}
void sumOfDigits(int num)
{
    int sum=0;
    int r;
    for(auto c=0;num;c++)
    {
        r=num%10;
        sum=sum+r;
        num=num/10;

    }
    std::cout<<"sum of digits = "<<sum<<std::endl;
}
int main()
{
    int num;
    std::cout<<"enter num:\n";
    std::cin>>num;
    countDigits(num);
    sumOfDigits(num);
}
