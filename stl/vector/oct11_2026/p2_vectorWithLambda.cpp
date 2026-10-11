#include<iostream>
#include<vector>
#include<algorithm>
class vecCheck
{
    public:
        int a;
    void read()
    {
        std::cout<<"enter a element\n";
        std::cin>>a;
    }
    void print()
    {
        std::cout<<"data : "<<a<<std::endl;
    }
    
};

int main()
{
    std::vector<vecCheck>vec;

    for(int i=0;i<10;i++)
    {
        vecCheck v;
        v.read();
        vec.push_back(v);
    }
    std::cout<<"print data \n";
    for(auto m:vec)
    {
        m.print();
    }
    std::cout<<'\n';

    std::cout<<"reverse\n";

    std::reverse(vec.begin(),vec.end());
    std::cout<<"print data \n";
    for(auto m:vec)
    {
        m.print();
    }
    std::cout<<'\n';

    /*for(std::vector<int>::reverse_iterator it=vec.rbegin();it!=rend();it++);

    std::cout<<"print data \n";
    for(auto m:vec)
    {
        m.print();
    }
    std::cout<<'\n';*/


    //count
    int x;
    std::cout<<"enter x\n";
    std::cin>>x;
    int count_o = std::count_if(vec.begin(),vec.end(),[=](vecCheck c){
        return x==c.a;
    });
    std::cout<<"count "<<count_o<<std::endl;
    //find 

    auto find_o = std::find_if(vec.begin(),vec.end(),[=](vecCheck v){
        return x==v.a;

    });

    if(find_o!=vec.end())
    {
        std::cout<<"find "<<" distance = "<<find_o -vec.begin()<<std::endl;
    }
    //sort
    std::sort(vec.begin(),vec.end(),[](vecCheck v1,vecCheck v2){
        return v1.a>v2.a;
    });

    std::cout<<"print data after sort \n";
    for(auto m:vec)
    {
        m.print();
    }
    std::cout<<'\n';  
}