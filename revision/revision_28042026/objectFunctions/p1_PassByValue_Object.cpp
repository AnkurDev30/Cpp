//pass by value simple program

#include<iostream>
class Student
{
    public:
        int marks;
        Student(int m):marks(m){};
};
void updateMarks(Student s)
{
    int newMarks;
    std::cout<<"enter new marks for update\n";
    std::cin>>newMarks;
    s.marks = newMarks;
}

int main()
{
    
    int setMarks;
    std::cout<<"enter marks for set\n";
    std::cin>>setMarks;
    Student S1(setMarks);
    updateMarks(S1);

    //marks not update because its pass by value 
    // and inside of function object is only local 
    std::cout<<"new marks ="<<S1.marks<<std::endl;

}