//range base loop : work with containers 
//container array, string , vector, list map ,set


#include<iostream>
int main()
{
    int a[10]={1,2,3,4,5,6,7,8,9,0};

    std::cout<<"\nrange base loop\n";
    for(auto x:a)
    {
        std::cout<<x<<" ";
    }
    std::cout<<"\nnormal loop\n";
    for(int i=0;i<10;i++)
    {
        std::cout<<a[i]<<" ";
    }
    std::cout<<"\n";
    std::cout<<"\nrange base loop with operation\n";
    for(auto x:a)
    {
        int v=x*5;
        std::cout<<v<<" ";
    }
    std::cout<<"\n";

     std::cout<<"\nwith string\n";
    std::string name = "Sourabh";
    for(auto x:name)
    {
        std::cout<<x<<" ";
    }
    

    std::cout<<"\n";
}