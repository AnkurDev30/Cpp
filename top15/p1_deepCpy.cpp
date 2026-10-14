#include<iostream>

class deep 
{
    private:
        int *p;
    public:
        deep(int a)
        {
            p=new int (a);
        }
        deep(deep &ob)
        {
            p =new int(*ob.a);
            std::cout<<"cpy constructor\n";
        }
        deep& operator = (deep &ob)
        {
            delete p;
            p=new int(*ob.a);
            return *this;
            std::cout<<"cpy assigment constructor\n";
        }
        deep(deep&& ob)
        {
            p=new int (*ob.a);
            ob.a=nullptr;
            std::cout<<"move constructor\n";
        }
        deep & operator=(deep&& ob)
        {
            delete p;
            p=new int(*ob.p);
            ob.p=nullptr;
            std::cout<<"move assigment constructor\n";
            return *this;
        }
}