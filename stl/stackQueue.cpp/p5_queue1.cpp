#include<iostream>
#include<queue>
#include<stack>

int main()
{
    std::queue<int>q;
    std::stack<int>s;
    for(int i=0;i<10;i++)
    {
        q.push(i);
        s.push(i);
    }
    for(int i=0;i<10;i++)
    {
        std::cout<<q.front()<<" "<<s.top()<<std::endl;
        q.pop();
        s.pop();
    }
}