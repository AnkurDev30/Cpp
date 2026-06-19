//reverse number

#include<iostream>

void reverseNum()
{
    int num;
    std::cout<<"Enter Num : "<<std::endl;
    std::cin>>num;

    int r,sum=0;
    for(auto a=0;num;a++)
    {
        r = num%10;
        sum = sum*10+r;
        num=num/10;
    }

    std::cout<<"reverse number = "<<sum<<std::endl;
}

int main()
{
    reverseNum();
}