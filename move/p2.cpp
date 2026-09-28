#include<iostream>
class text
{
    public:
        int *data;
    text(int value)
    {
        data =new int (value);
    }   
    text(text &obj)
    {
        data=new int(*obj.data);
    }
    text& operator=(text&obj)
    {
        delete data;

        data = new int(*obj.data);
        return *this;
    }
    
    text(text &&obj)
    {
        data = new int(*obj.data);
        obj.data=nullptr;
    }
    void display()
    {
        std::cout<<"data : "<<*data<<std::endl;
    }
};
int main()
{
    text t1(9);
    t1.display();
    text t2=std::move(t1);

    t2.display();
   // t1.display();

    text t3(t2);
    t3.display();
}