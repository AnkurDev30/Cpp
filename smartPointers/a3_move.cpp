//Why unique_ptr cannot be copied ⭐⭐⭐

#include<iostream>
#include<memory>

class str 
{
    private:
        int a,b;
    public:
        str(int a,int b)
        {
            this->a=a;
            this->b=b;
        }
        ~str()
        {
            std::cout<<"I am deconstrutor\n";
        }
        void printData()
        {
            std::cout<<a<<" "<<b<<std::endl;
        }
};

int main()
{
    std::unique_ptr<str>p=std::make_unique<str>(1,200);
    std::unique_ptr<str>p2=std::make_unique<str>(1,300);

    std::cout<<"p data print\n";
    p->printData();
    std::cout<<"p1 data print\n";
    p2->printData();

    std::unique_ptr<str>p3=std::move(p2);

    std::cout<<"p3 data print\n";
    p3->printData();

    std::cout<<"p2 again data print\n";
    //p2->printData();
}