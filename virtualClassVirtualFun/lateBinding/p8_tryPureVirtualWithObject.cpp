#include<iostream>

class kannon 
{
    public:
        virtual void fun()=0;
        void rama()
        {
            std::cout<<"rama\n";
        }
};
class may :public kannon 
{
    public:
        void fun()
        {
            std::cout<<"hello\n";
        }
};

int main()
{
    kannon a;
    

}