//Implement a singleton class

#include<iostream>

class singleton
{
    private:
        singleton()
        {
            x=20;
            std::cout<<"construtor\n";
        }
    public:
        int x;
        static singleton& fun()
        {
            static singleton obj;
            return obj;
        }
        void display()
        {
            std::cout<<"x = "<<x<<std::endl;
        }
};
int main()
{
   singleton &obj = singleton::fun();
   singleton &obj2 = singleton::fun();
   obj.display();
   obj2.display();
   
}