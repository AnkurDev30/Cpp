//virtual fun under constructor
#include<iostream>
class engine 
{
    public:
        virtual void fun()
        {
            std::cout<<"engine class"<<std::endl;;
        }
        void CallFUn()//if virtual function is private then we call this way
        {
            fun();
        }    
        
};
class car : public engine 
{

    public:
        car()
        {
            engine *p = this;
            p->fun();
        }
         void fun()
        {
            std::cout<<"car class\n"<<std::endl;
        }
};

int main()
{
    car c1;
}