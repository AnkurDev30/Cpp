//static mebers :- its belongs to class
// need to define globaly with class name 
// only single vcopy for all object 


//static member function can only read static members 
#include<iostream>

class India 
{
    public:
        static int a;
        int x{100};
        void readA()
        {
            std::cout<<"enter a\n";
            std::cin>>a;
        }
        void display(std::string name)
        {
            std::cout<<name<<" : a = "<<a<<std::endl;
        }
        static void fun()
        {
            std::cout<<"diaplay a = "<<a<<std::endl;
        }
};

int India::a=0;//globally define with class name 

int main()
{
    India ab,bc;//300
    ab.readA();//300
    ab.display("ab");//300
    bc.display("bc");//300

    bc.a++;//301
    ab.a++;//302

    ab.fun();//100
    bc.fun();//100

    ab.x=200;//ab x 200
    bc.fun();//100
    ab.fun();

    ab.display("ab");//302
    bc.display("bc");//302




}




