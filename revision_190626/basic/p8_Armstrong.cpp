//Armstrong
#include<iostream>
void ArmstrongFun(int num)
{
    int r,cube=1,sum =0;
    int arm=num;
    for(auto a =0;num;a++)//153 27+125
    {
        r =num%10;
        cube = r*r*r;
        sum+=cube;
        num=num/10;
    }

    if(arm==sum)
    {
        std::cout<<"number is armstrong\n";
    }
    else
    {
        std::cout<<"number is not armstrong\n";
    }
}
int main()
{
    int armCheck =0;
    std::cout<<"enter number :\n";
    std::cin>>armCheck;
    ArmstrongFun(armCheck);
}