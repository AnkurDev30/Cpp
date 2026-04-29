//Modify variable using reference parameter
#include<iostream>
class cModifyByRefrence
{
    private:
        int a;
        int &b=a;
    public:
        void vModifyByRefrence()
        {
            std::cout<<"enter value of a"<<std::endl;
            std::cin>>a;
            std::cout<<"b value = "<<b<<std::endl;
            a++;
            std::cout<<"b value after a inc= "<<b<<std::endl;
            b++;
            std::cout<<"a value after b inc= "<<a<<std::endl;
        }
};
int main()
{
    cModifyByRefrence obj1;
    obj1.vModifyByRefrence();
    return 0;
}