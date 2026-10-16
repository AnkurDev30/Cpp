//it will copy data from one object to another object 
//but both object should exist.

#include<iostream>
//one o1 --> 20000
//one o2-->30000

//delete old memory
//o2=new memory  35000 7
class one 
{
    private:
        int *p =nullptr;
    public:
        one(int a)
        {
            p = new int (a);
        }
        void display()
        {
            std::cout<<"p : "<<*p<<std::endl;
        }
        one& operator =(one &obj)
        {
            delete p;
            p = new int(*obj.p);
            return *this;
        }
        ~one()
        {
            delete p;
        }
};

int main()
{
    one o1(7);
    o1.display();
    one o2(22);
    o2.display();

    o2=o1;
    o2.display();
}