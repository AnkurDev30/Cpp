#include<iostream>
#include<vector>

class data{
    public:
        int a;
};
int main()
{
    data d1;
    std::vector<data> v1;

    d1.a=7;
    v1.push_back(d1);

    std::cout<<"data = "<<v1[0].a<<std::endl;

    d1.a=9;
    v1.insert(v1.begin()+1,d1);
    std::cout<<"data = "<<v1[1].a<<std::endl;

    for(auto &b:v1)
    {
        std::cout<<"auto = "<<b.a<<std::endl;
    }
    v1.erase(v1.begin());

    for(auto &b:v1)
    {
        std::cout<<"auto = "<<b.a<<std::endl;
    }
    for(int i=0;i<10;i++)
    {
        data d2;
        d2.a=i*2;
        v1.insert(v1.begin()+i,d2);
    }
    for(auto &c:v1)
    {
        std::cout<<"All = "<<c.a<<std::endl;
    }
    v1.clear();
    for(auto &c:v1)
    {
        std::cout<<"After clear = "<<c.a<<std::endl;
    }
    std::cout<<"clear\n";
}