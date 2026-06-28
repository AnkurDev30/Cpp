
//Modifying a String
#include<iostream>
#include<string>
int main()
{
    std::string str1;
    std::cout<<"enter strinng \n";
    getline(std::cin,str1);

    str1.push_back('!');

    std::cout<<str1<<std::endl;

    str1.pop_back();

    std::cout<<str1<<std::endl;

    str1.insert(5,"p");
    std::cout<<str1<<std::endl;

    str1.erase(5,1);
    std::cout<<str1<<std::endl;
}