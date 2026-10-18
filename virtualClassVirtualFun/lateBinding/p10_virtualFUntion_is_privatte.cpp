#include<iostream>

class make 
{
    private:
        virtual void fun()
        {
            std::cout<<"private virtual fun\n";
        }
    public:
        void callFun()
        {
            fun();
        }
};
class d : public make 
{
    public:
        void fun()
        {
            std::cout<<"hi\n";
        }
};

int main()
{
    make *m=new d();
    m->callFun();
}