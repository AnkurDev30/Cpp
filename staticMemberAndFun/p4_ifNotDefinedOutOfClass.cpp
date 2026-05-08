//
#include<iostream>
class staticCheck
{
    public:
        static int a;
};
//int staticCheck::a=0;
int main()
{
    std::cout<<"a= "<<staticCheck::a<<std::endl;
}