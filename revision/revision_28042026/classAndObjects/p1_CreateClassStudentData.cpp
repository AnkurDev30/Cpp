//create class Student (name, age, display)
#include<iostream>
class cStudentData
{
    private:
        std::string name;
        int age;
    public:
        void vGetData();
        void vDisplayData();
};
void cStudentData::vGetData(void)
{
    std::cout<<"enter name of student and age"<<std::endl;
    std::cin>>name>>age;
}
void cStudentData::vDisplayData(void)
{
    std::cout<<"student name = "<<name<<std::endl;
    std::cout<<"student age = "<<age<<std::endl;
}
int main()
{
    cStudentData objStudentData;
    objStudentData.vGetData();
    objStudentData.vDisplayData();
}