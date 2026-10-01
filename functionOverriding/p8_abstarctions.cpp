//data abstraction demo
#include<iostream>
class apple
{
    public:
    virtual void fun()
    {
        std::cout<<"hi"<<std::endl;
    }
};
class ball:public apple
{
    public:
    void fun()
    {
        std::cout<<"ball"<<std::endl;
    }
};
class alfhabate
{
    private:
        apple &a;
    public:
        alfhabate ( apple &a1):a(a1){}
        void alfha()
        {
            a.fun();
        }

};

int main()
{
    ball b1;
    alfhabate f(b1);
    f.alfha();
}