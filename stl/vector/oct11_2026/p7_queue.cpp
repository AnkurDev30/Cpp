#include<iostream>
#include<queue>
#include<stack>
int main()
{
    std::queue<int>q;

    for(int i=0;i<10;i++)
    {
        q.push(i);
    }
   // for(int i=0;i<10;i++)
   // {
   //     int a=q.front();
//
   //     std::cout<<a<<" ";
   //     q.pop();
   // }
    std::cout<<std::endl;
    std::cout<<"reverse\n";

    std::stack<int>st;
    for(int i=0;i<10;i++)
    {
        int a=q.front();
        std::cout<<a<<" ";
        st.push(a);
        q.pop();
    } 
    std::cout<<"\n";
    while(!st.empty())
    {
        int a=st.top();
        std::cout<<a<<" ";
        st.pop();
    }

}