//Print Memory Addresses ⭐⭐⭐

#include<iostream>

class text
{
    public:
        int *data=nullptr;
        text(int a)
        {
            data = new int(a);
        }
        text(text&obj)
        {
            data = new int(*obj.data);
        }
        text (text && obj)
        {
        
            data = obj.data;
            obj.data=nullptr;
        }
        text& operator=(text && obj)
        {
            delete data;
            obj.data=nullptr;
            return *this;
        }
        void display()
        {
            std::cout<<"display = "<<*data<<std::endl;
        }
};

int main()
{
    text t1(8);
    t1.display();

    text t2=std::move(t1);

    std::cout<<"address of  t1 = "<<&t1<<std::endl;
    std::cout<<"address of  t2 = "<<&t2<<std::endl;
}