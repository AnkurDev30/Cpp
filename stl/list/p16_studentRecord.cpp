/*
Store 10 students in a list and:
name roll marks
Print all students
Find student by roll
Find student by name
*/

#include<iostream>
#include<list>
#include<algorithm>
std::string students[] = {
    "Rahul",
    "Amit",
    "Priya",
    "Neha",
    "Rohit",
    "Sneha",
    "Vikas",
    "Pooja",
    "Karan",
    "Anjali"
};
struct stu{
    int roll;
    int marks;
    std::string name;
};
void findByRoll(std::list<stu>&l1)
{
    int r;
    stu s1;
    std::cout<<"enter student rollnumber\n";
    std::cin>>r;
    auto p = std::find_if(l1.begin(),l1.end(),[=](const stu &s1){
        return s1.roll==r;
    });

    if(p!=l1.end())
    {
        std::cout<<"found roll"<<std::endl;
        std::cout<<"data : "<<p->roll<<" "<<p->marks<<" "<<p->name<<"\n";
        
    }
}
void findByName(std::list<stu>&l1)
{
    std::string r;
    stu s1;
    std::cout<<"enter student name\n";
    std::cin>>r;
    auto p = std::find_if(l1.begin(),l1.end(),[=](const stu &s1){
        return s1.name==r;
    });

    if(p!=l1.end())
    {
        std::cout<<"found name"<<std::endl;
        std::cout<<"data : "<<p->roll<<" "<<p->marks<<" "<<p->name<<"\n";
        
    }
}
int main()
{

    std::list<stu>l1;

    stu s1;

    for(int i=0;i<10;i++)
    {
        s1.name = students[i];
        s1.roll = s1.name.length();
        s1.marks=s1.roll*5;

        l1.push_back(s1);
    }

    std::cout<<"print data=\n";

    for(auto m:l1)
    {
        std::cout<<"data : "<<m.roll<<" "<<m.marks<<" "<<m.name<<"\n";
    }

    int opt=0;
    std::cout<<"enter option \n1) find student by roll\n2) find student by name\n";
    std::cin>>opt;


    if(opt==1)findByRoll(l1);
    else if(opt==2)findByName(l1);
}