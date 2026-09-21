#include<iostream>
#include<memory>

class data
{
    public:
        int a;
        int b;

        data(int a,int b)
        {
            this->a=a;
            this->b=b;
        }
        void printData()
        {
            std::cout<<a<<" "<<b<<std::endl;
        }
};
void processData(std::unique_ptr<data>a)
{
    std::cout<<"try to send data\n";
    a->printData();
}
int main()
{
    std::unique_ptr<data>ptr=std::make_unique<data>(1,20);
    ptr->printData();
    processData(std::move(ptr));
}