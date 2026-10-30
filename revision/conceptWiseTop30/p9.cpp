//Overload the == operator for a custom class

#include<iostream>

class equal 
{
    public:
        int x;
        equal(int y)
        {
            x = y;
        }
        void display(std::string str)
        {
            std::cout<<str<<" x = "<<x<<std::endl;
        }
        bool operator ==(equal &obj)
        {
            if(x == obj.x)
            {
                std::cout<<"equal\n";
                return true;
            }
            else
            {
                std::cout<<"not equal\n";
                return false;
            }
        }
};
int main()
{
    equal e1(10),e2(20);
    e1.display("e1");
    e2.display("e2");

    e1==e2;



}