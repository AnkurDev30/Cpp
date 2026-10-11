#include<iostream>

#include<stack>
#include<set>
int main()
{
    std::stack<int>s;
    std::set<int>st;
    for(int i=0;i<10;i++)
    {
        s.push(rand()%190);
    }
    for(int i=0;i<10;i++)
    {
        int p =s.top();
        st.insert(p);
        std::cout<<p<<std::endl;
        s.pop();

    }
    for(auto sp:st)
    {
        std::cout<<sp<<" ";
    }
    std::cout<<"\n";

    std::stack<char>rst;

    std::string sn;

    std::cout<<"enter string\n";
    std::cin>>sn;

    for(int i=0;i<sn.length();i++)
    {
        rst.push(sn[i]);
    }
    std::cout<<"reverse str\n";

    while(!rst.empty())
    {
        char p = rst.top();
        std::cout<<p;
        rst.pop();

    }
    std::cout<<"\n";
}