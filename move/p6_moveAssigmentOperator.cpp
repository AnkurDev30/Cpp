//move assigmenet operator is nothing but its transfer ownership to existing object , itn not create object.

#include<iostream>

class text 
{
    public:
        int *data=nullptr;
    text(int a)
    {
        data =new int (a);
    }
    text& operator=(text && obj)
    {
        delete data;
        data =obj.data;
        obj.data=nullptr;
        return *this;
    }
    void display()
    {
        if(data !=nullptr)
        std::cout<<"display = "<<*data<<"\n";
        else std::cout<<"memory not available\n";
    }
    text()
    {

    }
    ~text()
    {
        delete data;
    }
};

int main()
{
    text t1(12);
    t1.display();

    text t2;

    t2=std::move(t1);
    t2.display();

}