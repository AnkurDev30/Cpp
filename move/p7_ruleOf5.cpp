#include<iostream>

class text
{
    public:
        int *data=nullptr;

        text(int a)
        {
            data = new int (a);
        }
        //copy constructor
        text(text& obj)
        {
            data =new int(*obj.data);
        }
        //destrutor
        ~text()
        {
            delete data;
        }
        //copy assigmenet operator
        text& operator=(text &obj)
        {
            delete data;
            data =new int (*obj.data);
            return *this;
        }

        //move constructor.
        text(text &&t)
        {
            data=new int(*t.data);
            t.data=nullptr;

        }
        //move assigment
        text& operator=(text &&ob)
        {
            delete data;
            data = ob.data;
            ob.data=nullptr;
            return *this;
        }
        void display()
        {
            if(data!=nullptr)
            std::cout<<"display = "<<*data<<std::endl;
            else std::cout<<"no memeory available = "<<std::endl;
        }
        text()=default;
};

int main()
{
    text t1(12);
    t1.display();

    text t2=std::move(t1);
    t2.display();

    text t3;

    t3=std::move(t2);

    t3.display();


}