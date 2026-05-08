/*
🧱 4. Array of Object Pointers
Requirements:

Create class:

student name
marks

Create:

Student *ptr = new Student[3];

Input and display all students.
*/

#include<iostream>
class student 
{
    private:
        std::string name;
        int marks;
    public:
        void read()
        {
            std::cout<<"enter student name and marks\n";
            std::cin>>name>>marks;
        }
        void print()
        {
            std::cout<<"name -->"<<name<<", marks ->"<<marks<<std::endl;
        }
};
int main()
{
    student *p;
    int number;
    std::cout<<"enter number of student\n";
    std::cin>>number;
    p = new student[number];

    for(int i=0;i<number;i++)
    {
        p[i].read();
    }
    std::cout<<"display:\n";
    for(int i=0;i<number;i++)
    {
        p[i].print();
    }
}