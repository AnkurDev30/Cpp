//Implement a class that performs deep copy using a copy constructor.


#include<iostream>

class deep 
{
    private:
        int *p=nullptr;
    public: 
        deep(int data)
        {
            p = new int (data);
        }
        deep (deep &obj)
        {
            std::cout<<"copy constructor\n";

            p = new int(*obj.p);
        }
        void display()
        {
            std::cout<<"display data = "<<*p<<std::endl;
        }
        void modify()
        {
            int x;
            std::cout<<"enter value\n";
            std::cin>>x;

            *p = x;
        }
        ~deep()
        {
            delete p;
        }
};

int main()
{
    deep d1(5);
    d1.display();

    deep d2 = d1;
    d2.display();

    deep d3(d1);
    d3.display();

    d3.modify();
    d3.display();
}