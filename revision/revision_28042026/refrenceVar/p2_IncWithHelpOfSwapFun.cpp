//Function to increment value using reference
#include<iostream>
class cRefrenceSwapVar
{
    public:
    void vIncVar(int &b);
};
void cRefrenceSwapVar::vIncVar(int &b)
{
    b++;
}
int main()
{
    int a;
    cRefrenceSwapVar obj;
    std::cout<<"enter a variable initial value"<<std::endl;
    std::cin>>a;
    obj.vIncVar(a);
    std::cout<<"first time after call = "<<a<<std::endl;
    obj.vIncVar(a);
    std::cout<<"second time after call = "<<a<<std::endl;
    obj.vIncVar(a);
    std::cout<<"third time after call = "<<a<<std::endl;

}