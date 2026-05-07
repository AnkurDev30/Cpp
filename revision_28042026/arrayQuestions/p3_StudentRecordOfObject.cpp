/*
🧱 1. Student Record System
👉 Requirements:

Create class:

name
roll number
marks

Create array of objects.

Features:

Input all students
Print all students
Find topper
*/

#include<iostream>
class studentRecordSystem
{
    public:
        std::string name;
        int roll;
        int marks;

        void getData()
        {
            std::cout<<"enter student name"<<std::endl;
            std::cin>>name;

            std::cout<<"enter roll number\n";
            std::cin>>roll;

            std::cout<<"enter marks\n";
            std::cin>>marks;
        }
        void printData()
        {
            std::cout<<"student name "<<name<<
            " | rollnumber "<<roll<<" | "<<
            " | marks "<<marks<<" | \n";
        }
};

int main()
{
    studentRecordSystem s1[5];
    for(int i=0;i<3;i++)
    {
        s1[i].getData();

    }
    for(int i=0;i<3;i++)
    {
        s1[i].printData();
        
    }
}