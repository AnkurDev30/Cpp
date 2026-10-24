#include<iostream>

class memory//:-  vtable : virtual table [ fun |fun1  ]
{

    public:
        //int a;//4 
        //int b;//4
        //int *p;//8:- 64 bit 8byte
        virtual void fun()
        {
            std::cout<<"\n";
        }
        virtual void fun1()
        {
            std::cout<<"\n";
        }
};
class derived :public memory  //virtual table [ fun |fun1  ]
{
    public:
         void fun()
        {
            std::cout<<"hello\n";
        }
         void fun1()
        {
            std::cout<<"ram\n";
        }
};
class derived2 :public memory //virtual table [ fun |fun1  ]
{
    public:
         void fun()
        {
            std::cout<<"hi\n";
        }
         void fun1()
        {
            std::cout<<"bye\n";
        }
};
int main()
{
    memory *m1;//vptr 
    m1=new derived();
    m1->fun();
    m1->fun1();
    m1=new derived2();
    m1->fun();
    m1->fun1();
    std::cout<<"base : "<<sizeof(memory)<<std::endl;
    std::cout<<"derived  : "<<sizeof(derived)<<std::endl;
    std::cout<<"derived 2 : "<<sizeof(derived2)<<std::endl;
}