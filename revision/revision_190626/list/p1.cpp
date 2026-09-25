//list demo 
#include<iostream>
#include<list>

class listDemo
{
    private:
        int a;
        char b;
    public:

        void set()
        {
            std::cout<<"enter a"<<std::endl;
            std::cin>>a;
            std::cout<<"enter char b"<<std::endl;
            std::cin>>b;
        }
        void display()
        {
            std::cout<<"a ="<<a<<" b= "<<b<<std::endl;
        }
};
int main()
{
    std::list<listDemo>l;
    listDemo lp;
    lp.set();
    l.push_back(lp);

    lp.set();
    l.push_back(lp);

    lp.set();
    l.push_back(lp);

    for(auto data:l)
    {
        data.display();
    }

}