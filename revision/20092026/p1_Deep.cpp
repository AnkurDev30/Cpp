#include<iostream>
class deep
{
    public:
        int *p=nullptr;
        deep(int x)
        {
            p=new int(x);
        }
        void printData()
        {
            std::cout<<*p<<std::endl;
        }
        deep(deep &obj)
        {
            //int a=
            p=new int(*obj.p);
        }
        void modifyData(int x)
        {
            *p=x;
        }
        ~deep()
        {
            std::cout<<"deconstuctor\n";
            delete p;
        }
};
int main()
{
    deep a1(3);
    a1.printData();

    deep a2(a1);
    a2.printData();

    a2.modifyData(5);

    a2.printData();
    a1.printData();
}
