#include<iostream>
#include<memory>

class data
{
    public:
        int a,b;
        data(int p,int q)
        {
            a=p;
            b=q;
        }
        void printData()
        {
            std::cout<<a<<" "<<b<<std::endl;
        }
};

std::unique_ptr<data> processData()
{
    std::unique_ptr<data>p = std::make_unique<data>(7,99);
    return p;
}

int main()
{
    //data d1;
    std::unique_ptr<data>p = processData();
    p->printData();
}