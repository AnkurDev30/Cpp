//Basic Move Constructor ⭐
#include<iostream>

class text
{
    public:
        int *data;
    //parametrized constructor.
    text(int val)
    {
        data = new int (val);
    }
    //copy constructor
    text(text&obj)
    {
        data = new int(*obj.data);
    }
    //copy assigmenet operator
    text& operator=(text &obj)
    {
        delete data;

        data = new int(*obj.data);

        return *this;
    }
    //move constructor.
   text(text&&obj)
    {
        

        data = new int(*obj.data);
        obj.data=nullptr;
    }
    //move asigmenet operator.

    text& operator=(text &&obj)
    {
        delete data;

        data = new int(*obj.data);

        obj.data=nullptr;
        return *this;
    }
    void display()
    {
        std::cout<<"data = "<<*data<<std::endl;
    }

};

int main()
{
    text t1(2);
    t1.display();

    text t2 =std::move(t1);
    text t3(5);

    t2.display();
    t3.display();

    t3=std::move(t2);
    t3.display();
}