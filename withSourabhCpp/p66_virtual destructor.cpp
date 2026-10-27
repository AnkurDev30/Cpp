//virtual destructor

#include<iostream>

class base 
{

    public:'

        base()
        {
            std::cout<<"base class construtor\n";
            int *m = new int(10);
        }
        virtual ~base()
        {
            delete m;
            std::cout<<"base class destructot\n";
        }
};
class derived:public base 
{

    public:
        int *z=new int(20);
        derived()
        {
            int *z=new int(20);
            std::cout<<"derived class construtor\n";
        }
        ~derived()
        {
            delete
            std::cout<<"derived class destructot\n";
        }
};
//when base class pointer point to derived class and when resource
//  release so derived class resource not release properly
// solution we need to make base class destructor as a virtual

int main()
{

    base *p =new derived();

    delete p;
}