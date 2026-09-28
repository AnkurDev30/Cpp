//show a rule of 3.

#include<iostream>

class text 
{
    public:
        int *data;
    text(int value)
    {
        data = new int  (value);
    }
   text(text &obj)
    {
        int b=*obj.data;

        data =new int(b);
        
    }
    text& operator=(text&obj)
    {
        delete data;

        data=new int(*obj.data);
        return *this;
    }
    ~text()
    {
        delete data;
    }

    void display()
    {
        std::cout<<"data = "<<*data<<std::endl;
    }
    void modify(int newData)
    {
        *data=newData;
       // std::cout<<"new data = "<<*data<<std::endl;
    }
};

int main()
{
    int p=5;
    text t1(p);

    text t2(t1);

    t1.display();
    t2.display();
    t2.modify(9);

    t1.display();
    t2.display();

}