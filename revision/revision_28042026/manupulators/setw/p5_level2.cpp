/**
🧱 Level 2 (Table Formatting)
Create a table with headers:
Name, Age
Align:
Name → left
Age → right
Print 3 students:
Align properly using fixed width
Make sure columns look straigh
*/

#include<iomanip>
#include<iostream>

int main()
{
    char name[3][10];
    int age[3];

    //taking i/p

    for(int i=0;i<3;i++)
    {
        std::cout<<"enter name"<<std::endl;
        std::cin>>name[i];
        std::cout<<"enter age"<<std::endl;
        std::cin>>age[i];
    }
    std::cout<<std::left<<std::setw(10)<<"Name"<<"|"<<std::right<<std::setw(4)<<"Age"<<"|"<<std::endl;
    
    for(int i=0;i<3;i++)
    {
        std::cout<<std::left<<std::setw(10)<<name[i]<<"|"<<std::right<<std::setw(4)<<age[i]<<"|"<<std::endl;
    }
    
}