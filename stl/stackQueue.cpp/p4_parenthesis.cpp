#include<iostream>
#include<stack>
#include<string>
int main()
{
    std::string str;
    std::stack<char>st;

    std::cout<<"enter str\n";
    std::cin>>str;
    bool balance =true;

    for(int i=0;i<str.length();i++)
    {
        if(str[i]=='}'||str[i]==')'||str[i]==']'||
        str[i]=='['||str[i]=='('||str[i]=='{')
        {
            if(str[i]=='['||str[i]=='('||str[i]=='{')
            {
                st.push(str[i]);
            }
            else
            {
                if((str[i]=='}'&& st.top()!='{')||
                (str[i]==']'&& st.top()!='[')||
                (str[i]==')'&& st.top()!='('))
                {
                    balance=false;
                }
                st.pop();
            }
            
        }
        else
        {
            balance=false;
            break;
        }
    }

    if(balance==true)std::cout<<"str is balanced\n";
    else std::cout<<"str is not balanced\n";
}