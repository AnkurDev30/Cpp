//Prime number
#include<iostream>
bool primeNumberCheck(int num)
{
    bool valid =false;
    int count=0;
    for(auto a=1;a<=num;a++)
    {
        if(num%a==0)
        {
            count++;
        }
    }
    if(count==2)
    {
        valid=true;
    }
    else
    {
        valid = false;
    }
    return valid;
}
int main()
{
    int nu;
    std::cout<<"enter number for check prime or not\n";
    std::cin>>nu;

    bool pnC = primeNumberCheck(nu);
    if(pnC==true)
    {
        std::cout<<"number is prime \n";
    }
    else
    {
         std::cout<<"number is not prime \n";
    }
}