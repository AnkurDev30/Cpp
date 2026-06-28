// string 
// Creating a string
// Traversing using index
// Traversing using range-based for loop
// Traversing using iterator

#include<iostream>
#include<string>
int main()
{
    std::string  str ="GeeksForGeeks\n";
    std::cout<<str<<std::endl;

    for(int i=0;i<str.length();i++)
    {
        std::cout<<str[i];
    }
    std::cout<<std::endl;

    for(char ch:str)
    {
        std::cout<<ch;
    }
    std::cout<<std::endl;
    for(auto i=str.begin();i<str.end();i++)
    {
        std::cout<<*i;
    }
    std::cout<<std::endl;
}