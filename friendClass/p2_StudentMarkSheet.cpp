/*
🎯 1. Student Marks Access
Requirements:

Class Student

private:
marks
roll number

Friend class Teacher

display student details
check pass/fail

🔥 Focus:

friend class accessing private data
*/

#include<iostream>
class student
{
    private:
        int marks;
        int roll;
    public:
        void getData();
        friend class teacher;
};
void student::getData()
{
    std::cout<<"enter marks and rollnumber\n";
    std::cin>>marks>>roll;
}
class teacher
{
    private:
    public:
        void printData();
};
void teacher::printData()
{
    student s1;
    s1.getData();
    std::cout<<"display : student rollnumber = "<<s1.roll<<std::endl;
    std::cout<<"display : student marks = "<<s1.marks<<std::endl;

    if(s1.marks<40)std::cout<<"fail\n";
    else if(s1.marks>=40)std::cout<<"pass\n";


}
int main()
{
    teacher t1;
    t1.printData();
}