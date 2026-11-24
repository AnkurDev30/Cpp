//emplace back

#include<iostream>
#include<vector>
class em 
{
    public:
        int data;
        void read()
        {
            std::cout<<"enter data\n";
            std::cin>>data;
        }
        void display()
        {
            std::cout<<"display data = "<<data<<std::endl;
        }
};


int main()
{
    std::vector<em>vec;

    em e1;
    for(int i=0;i<5;i++)
    {
        e1.read();
        vec.push_back(e1);
    }

    std::cout<<"print data\n";

    for(auto m : vec)
    {
        m.display();
    }


    vec.emplace_back(5);
    std::cout<<"print data after emplace back\n";

    for(auto m : vec)
    {
        m.display();
    }
}