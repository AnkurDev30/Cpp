#include<iostream>
#include<stdexcept>

int main()
{
    int a;
    int pro=1;

    std::cout<<"enter a number\n";
    std::cin>>a;

    try{
        if(pro==0|| a==0)
        {
            throw ("0 not expected\n");
        }
        while(a!=0)
        {
            int r= a%10;
            pro=pro*r;
            a=a/10;
        }
        std::cout<<"product of number = "<<pro<<std::endl;
    }
    catch(const char*msg)
    {
        std::cout<<msg<<std::endl;
    }

}