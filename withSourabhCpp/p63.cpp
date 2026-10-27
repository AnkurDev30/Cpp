//if virtual function is private then polymorphishm possible?
//yes

#include<iostream>

class engine 
{
    private:
        virtual void fun()
        {
            std::cout<<"engine class"<<std::endl;;
        }
    public:
        void CallFUn()//if virtual function is private then we call this way
        {
            fun();
        }    
        
};
class car : public engine 
{

    public:
        
         void fun()
        {
            std::cout<<"car class\n"<<std::endl;
        }
};

int main()
{
    engine *p = new car();
    p->CallFUn();
}