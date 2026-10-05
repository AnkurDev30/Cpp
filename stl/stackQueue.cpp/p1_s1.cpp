//stack all 5 functions push top pop empty size 

//push add element
//top read from top
//pop remove
//empty check its have data or not
//size number of element.


#include<iostream>
#include<stack>

int main()
{
   std::stack <int>st;
   
   for(int i=0;i<10;i++)
   {
        st.push(i*10);
   }

   std::cout<<"size = "<<st.size()<<std::endl;

   if(st.empty())
   {
    std::cout<<"satck is empty\n";
   }
   else
   {
    std::cout<<"satck is not empty\n";
   }

   for(int i=0;i<10;i++)
   {
        std::cout<<"data: "<<st.top()<<std::endl;
        st.pop();//remove
   }

   if(st.empty())
   {
    std::cout<<"satck is empty\n";
   }
   else
   {
    std::cout<<"satck is not empty\n";
   }
}