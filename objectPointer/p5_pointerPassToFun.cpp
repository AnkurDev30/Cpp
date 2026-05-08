/*
🧱 5. Pointer Passing to Function
Requirements:

Create class:

two integers

Create function:

take object pointer as parameter
print object data
*/

#include<iostream>
class twoInt
{
    private:
        int a,b;
    public:
        void readData()
        {
            std::cout<<"enter a,b\n";
            std::cin>>a>>b;
        }
        void printData()
        {
            std::cout<<"a = "<<a<<"b = "<<b<<std::endl;
        }
        friend void funReciveObje(twoInt *obj);
};
void funReciveObje(twoInt *obj)
{
    std::cout<<"a = "<<obj->a<<"b ="<<obj->b<<std::endl;
}
int main()
{
    twoInt as;
    as.readData();
    as.printData();
    funReciveObje(&as);
}

