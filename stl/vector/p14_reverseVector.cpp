/**
Reverse Vector Using Iterator
Create a vector and print its elements in reverse order using rbegin() and rend()
*/
#include<iostream>
#include<vector>
struct st{

    int n;
    std::string name;
};
int main()
{
    std::vector<st> vec;
    st s1;

    for(int i=0;i<5;i++)
    {
        std::cout<<"enter roll\n";
        std::cin>>s1.n;
        std::cout<<"enter name\n";
        std::cin>>s1.name;

        vec.push_back(s1);
    }
    std::vector<st>::reverse_iterator it;
   // it = vec.rbegin();

    /*for(it = vec.rbegin();it!=vec.rend();it++)
    {
        std::cout<<"roll : = "<<it->n<<"   name : = "<<it->name<<std::endl;
    }*/
    for(it=vec.rbegin();it!=vec.rend();it++)
    {
        std::cout<<"Num  : "<<it->n<<" Name : "<<it->name<<std::endl;
    }
}