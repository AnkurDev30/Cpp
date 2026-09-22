#include<iostream>
#include<set>
int main()
{
    std::set<int>st;

    for(int i=0;i<10;i++)
    {
        st.insert(i);
    }

    for(auto s:st)
    {
        std::cout<<s<<" ";
    }
    std::cout<<"\n";

    st.reverse();

    std::cout<<"after reverse dta\n";
    for(auto s:st)
    {
        std::cout<<s<<" ";
    }
    std::cout<<"\n";
}