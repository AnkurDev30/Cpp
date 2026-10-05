#include<iostream>
#include<stack>

int main()
{
    std::stack<int>st;
    int a=67;
    for(int i=1;i<10;i++)
    {
        if(i%2==0)
        st.push(i*89);
        else st.push(i*a++);

     //   std::cout<<st.top()<<std::endl;
    }

    int min=st.top();
    std::cout<<"min"<<min<<" "<<st.size()<<std::endl;
    while(!st.empty())
    {
        //std::cout<<st.top()<<std::endl;
        if(min>st.top())
        {
            min=st.top();
        }
        st.pop();
    }
    std::cout<<"minimum element = "<<min<<std::endl;
}