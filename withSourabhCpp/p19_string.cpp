#include<iostream>
#include<string>


char a[]="ANKUR";

int main()
{
    std::cout<<a<<std::endl;

    std::string name ="Pakistan";
    
    std::cout<<name<<std::endl;

    std::string name2="Sourabh";
    //its container, dynamically change size 
    std::string newName = name+name2;

    std::cout<<newName<<std::endl;

   
    newName=newName+" ASDFGHJKL12345678";

     auto x = newName.length();
    std::cout<<"length = "<<x<<" "<<sizeof(newName)<<std::endl;

}