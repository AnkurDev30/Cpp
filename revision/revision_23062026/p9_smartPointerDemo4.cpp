//class with unique_ptr
#include<iostream>
#include<memory>

class rabber
{
    public:
    void fun()
    {
        std::cout<<"I am fun\n";
    }
};
int main()
{
    std::unique_ptr<rabber>ptr(new rabber());
    ptr->fun();
}