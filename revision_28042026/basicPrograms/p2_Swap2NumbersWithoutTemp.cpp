//swap two number withand without temp

#include<iostream>

void SwapWithTemp(int *pnum1,int *pnum2)
{
    int temp = *pnum1;
    *pnum1 =*pnum2;
    *pnum2=temp;
}
void SwapWithOutTemp(int *pnum1,int *pnum2)
{
    *pnum1=*pnum1+*pnum2;
    *pnum2=*pnum1-*pnum2;
    *pnum1=*pnum1-*pnum2;
}
int main()
{
    int num1,num2;
    int opt;
    std::cout<<"enter first num"<<std::endl;
    std::cin>>num1;
    std::cout<<"enter second num"<<std::endl;
    std::cin>>num2;
    std::cout<<"before swap:\n"<<"first number="<<num1<<"\nsecond number="<<num2<<std::endl;
    std::cout<<"choose option 0 for  with temp or 1 for without temp var"<<std::endl;
    std::cin>>opt;
    if(opt>=0 && opt<=9)
    {
        switch(opt)
        {
            case 0:
                SwapWithTemp(&num1,&num2);
            break;
            case 1:
                SwapWithOutTemp(&num1,&num2);
            break;
            default:
                std::cout<<"wrong opt choose"<<std::endl;
            break;
        }
    }
    else
    {
        std::cout<<"choose opt between 0 to 9"<<std::endl;
    }
    std::cout<<"after swap:\n"<<"first number="<<num1<<"\nsecond number="<<num2<<std::endl;
}
