#include<iostream>
int main()
{
    int a;
    int sum=0;
    std::cout<<"enter a number\n";
    std::cin>>a;

    try
    {
        if(a==0)
        {
            throw "zero not expected\n";
        }
        for(int i=0;a;i++)
        {
            int r = a%10;
            sum=sum+r;
            a=a/10;
        }
          std::cout<<"sum of digits = "<<sum<<std::endl;
    }
    catch(const char*msg)
    {
        std::cout<<msg<<std::endl;
    }
    
  
    return 0;
}