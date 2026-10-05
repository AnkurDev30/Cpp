#include<iostream>
#include<vector>
int main()
{
    int a;
    std::vector<int> s1;
    s1.resize(10);

    for(int i=0;i<10;i++)
    {
        std::cout<<"enter a: \n";
        std::cin>>a;

        s1[i]=a;
    }
    std::cout<<"display\n";
    for(auto p:s1)
    {
        std::cout<<p<<std::endl;
    }

    std::cout<<"data front: "<<s1.front()<<std::endl;
    std::cout<<"data back: "<<s1.back()<<std::endl;
}