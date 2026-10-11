#include<iostream>
#include<stack>
#include<string>
int main()
{
    std::string str;
    std::cout<<"enter string\n";
    std::cin>>str;

    std::stack<char>st;
    bool balance=true;
    int i=0;
    while(i<str.length())
    {
        if(str[i]=='(' || str[i]=='{'||str[i]=='[')
        {
            st.push(str[i]);
        }
        else if(str[i]==')' || str[i]=='}'||str[i]==']')
        {
            if(st.empty())
            {
               balance=false ;
               break ; 
            }

            char a = st.top();
            st.pop();
            if((str[i]=='('&& a ==')')
        ||(str[i]=='{'&& a =='}')
        || (str[i]=='['&& a ==']'))
        {
            balance =false;
        }
        }
        i++;
    }
    if(balance ==true)
    {
        std::cout<<"balanced\n";
    }
    else
    {
        std::cout<<"not balanced\n";
    }
    
}
