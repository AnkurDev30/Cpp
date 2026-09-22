#include<iostream>
#include<stack>
#include<string>

int main()
{
   std::stack<char> st;

   std::string str,str2;

   std::cout<<"enter a string\n";
   std::cin>>str;

   for(int i=0;i<str.length();i++)
   {
        st.push(str[i]);
   }


   for(int i=0;i<str.length();i++)
   {
       // std::cout<<st.top()<<std::endl;
        char ab =st.top();
        str2.push_back(ab);
        st.pop();
   }

   str=str2;

   std::cout<<"new str = "<<str<<std::endl;
}