//Use a list of objects of a class Employee and display each employee's data.
#include<iostream>
#include<list>

class emp 
{
    private:
        int id;
        std::string name;
    public:
        void read()
        {
            std::cout<<"enter id and name \n";
            std::cin>>id>>name;
        }
        void print()
        {
            std::cout<<"Id : "<<id<<" Name : "<<name<<std::endl;
        }
};
int main()
{
    std::list<emp>eList;

    for(int i=0;i<3;i++)
    {
        emp e1;
        e1.read();
        eList.push_back(e1);
    }
    for(auto m:eList)
    {
        m.print();
    }
    
}