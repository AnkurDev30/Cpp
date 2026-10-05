#include<iostream>
class target
{
    public:
        virtual void oldFeture()
        {
            std::cout<<"oldFeture\n";
        }
};

class oldClass
{
    public:
        void ImFunOldClass()
        {
            std::cout<<"ImFunOldClass\n";
        }
};

class adaptor:public target
{
    private:
        oldClass obj;
    public:
        void oldFeture()
        {
            obj.ImFunOldClass();
        }
};

int main()
{
    target *p =new adaptor();
    p->oldFeture();
}