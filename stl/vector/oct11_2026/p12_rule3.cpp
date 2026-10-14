#include<iostream>

class A 
{
    public:
        int *p=nullptr;
        A(int a)
        {
            p=new int (a);
        }
        A(A& obj)
        {
            p=new int(*obj.p);
            std::cout<<"copy constructor\n";
        }
        A& operator=(A& obj )
        {
            delete p;
            p=new int(*obj.p);
            std::cout<<"copy Assigment constructor\n";
            return *this;
        }
        ~A()
        {
            std::cout<<"destrutor\n";
            delete p;
        }
        void display()
        {
            std::cout<<"p = "<<*p<<std::endl;
        }
        void modify(int b)
        {
            *p=b;
        }
};

int main()
{
    A one(9);
    one.display();

    A two(one);
    two.display();
    two.modify(8);
    two.display();

    one = two;
    one.display();


}