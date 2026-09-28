//Show Copy vs Move ⭐⭐⭐

#include<iostream>
class text
{
    public:
        int *data = nullptr;
    text(int value)
    {
        data =new int (value);
    }
    void display()
    {
        if(data!=nullptr)
        std::cout<<"display data : "<<*data<<std::endl;
        else
        std::cout<<"no memory\n";
    }
    void modify(int x)
    {
        *data = x;
    }
    //copy constructor.
    text(text&obj)
    {
        data = new int(*obj.data);
    }

    text (text&& obj)
    {
       

        data =new int(*obj.data);
        obj.data = nullptr;
    }
};

int main()
{
    //first we create a obect 
    text t1(6);
    t1.display();

    text t2(t1);
    t2.display();

    //std::move.
    text t3=std::move(t2);

    t3.display();
    t2.display();
}