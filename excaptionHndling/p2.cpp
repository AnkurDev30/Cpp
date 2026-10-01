#include<iostream>
int main()
{
    int a;
    std::cout<<"reverse a number\n";
    std::cin>>a;
    int sum=0;
    int r;
    try{
        if(a==0)
        {
            throw "ERROR! dont enter zero\n";
        }
        for(int i=0;a;i++)
        {
            r =a%10;//1234
            sum=sum*10+r;
            a=a/10;
        }
        std::cout<<sum<<std::endl;
    }
    catch(const char *msg)
    {
        std::cout<<msg<<std::endl;
    }
}