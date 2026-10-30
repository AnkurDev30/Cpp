//Implement deep copy using a copy constructor

#include<iostream>

class p 
{
    public:
        int *p1;
        p(int x)
        {
            p1 = new int (x);
        }
        p(p& obj)
        {
            p1 = new int(*obj.p1);
            std::cout<<"copy construtor\n";
        }
        p& operator =(p &obj)
        {
            if(&obj!=this)
            {
                std::cout<<"copy assigment operator\n";
                int *temp =new int(*obj.p1);
                delete p1;
                p1=temp;
            }
            return *this;
        }
        ~p()
        {
            std::cout<<"destructor\n";
            delete p1;
        }
        void display()
        {
            std::cout<<"p1 = "<<*p1<<std::endl;
        }
};

int main()
{
    p p1(10);
    p1.display();

    p p2(20);
    p2.display();

    p2=p1;
    p2.display();

    p p3(p2);
    p3.display();
}