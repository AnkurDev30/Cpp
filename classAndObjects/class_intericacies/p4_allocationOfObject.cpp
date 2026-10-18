#include<iostream>

class sample 
{
    private:
        int x;
    public:
        void readData()
        {
            std::cout<<"enter data\n";
            std::cin>>x;
        }
        void displayData()
        {
            std::cout<<x<<std::endl;
        }
};

int main()
{
    sample *x =new sample();

    x->readData();
    x->displayData();

    delete x;
    //delete x;
}