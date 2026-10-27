//abstarction: hide the implementaion details provide only essential details

#include<iostream>

class base 
{
    private:
        int x;
        void readX()
        {
            std::cout<<"x = "<<x<<std::endl;
        }
    public:
        base()
        {
            x=10;
        }
        void printData()
        {
            readX();
        }
};
int main()
{
    base o1;
    o1.printData();
}