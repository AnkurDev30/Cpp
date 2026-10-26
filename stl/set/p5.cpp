//5. Find minimum and maximum elements

#include<set>
#include<iostream>

int main()
{
    std::set <int>s;
    
    for(int i=0;i<10;i++)
    {
        s.insert((i+1)*2);
    }
    std::cout<<"print data\n";

    for(auto p : s)
    {
        std::cout<<p<<" ";
    }
    std::cout<<"\n";

    int min = *s.begin();
    int max = *s.rbegin();

    std::cout<<"max = "<<max<<" "<<"min = "<<min<<std::endl;
}