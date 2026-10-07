#include<iostream>

class Apple
{
    public:
        int *p;
        Apple()
        {
            std::cout<<"apple construtor\n";
            p=new int ();
        }
        //void readApple()
        //{
        //    std::cout<<"enter p value\n";
        //    std::cin>>*p;
        //}
        //void display()
        //{
        //    std::cout<<"display = "<<*p<<std::endl;
        //}
        ~Apple()
        {
            std::cout<<"apple destructor\n";
            delete p;   
        }
};
class Ball:public Apple
{
    public:
        int *q;
        Ball()
        {
            std::cout<<"ball construtor\n";
            q=new int ();
        }
        ~Ball()
        {
            std::cout<<"ball destructor\n";
            delete q;
        }    

        
};

/*
inheritance 
construtor 
base class construtor
derived class construtor

deconstrutor
derived deconstrutor
base deconstrutor


*/
int main()
{
    Ball b1;
}