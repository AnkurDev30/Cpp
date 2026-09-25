/**
13. Student Result Processing
Concepts:
friend class 
*/

#include<iostream>
#include<iomanip>
class Teacher;
class student 
{

    private:
        struct stdu
        {
            int roll;
            std::string name;
            float marks;
        };
    public:
    friend class Teacher;
        void printStdData(int roll,std::string name,float marks)
        {
            std::cout<<std::right<<std::setw(15)<<" rollnumber : "<<roll<<std::endl;
            std::cout<<std::right<<std::setw(15)<<" name : "<<name<<std::endl;
            std::cout<<std::right<<std::setw(15)<<" marks : "<<marks<<std::endl;
        }
};
class Teacher
{
    public:
        struct resultStaus
        {
            bool passFailStaus;
            student::stdu s1;
        };
        resultStaus r1;
        Teacher()
        {
            std::cout<<"enter name of student\n";
            std::cin>>r1.s1.name;
            std::cout<<"enter rollnumber of student\n";
            std::cin>>r1.s1.roll;
            std::cout<<"enter marks of student\n";
            std::cin>>r1.s1.marks;
        }
        void printDataStatus()
        {
            student obj;
            obj.printStdData(r1.s1.roll,r1.s1.name,r1.s1.marks);
            if(r1.s1.marks>=35)
            {
                std::cout<<"pass\n";
                r1.passFailStaus=true;
            }
            else
            {
                std::cout<<"fail\n";
                r1.passFailStaus=false;
            }
        }
};
int main()
{
    Teacher T1;
    T1.printDataStatus();
}