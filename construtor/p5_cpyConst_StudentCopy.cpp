/*
🧱 1. Student Copy
Requirements:

Create one student object.

Create second object using:

Student s2 = s1;

Print both objects.
*/

#include<iostream>

class studentCpy
{
    private:
        int stuId;
    public:
        studentCpy(int id)
        {
            this->stuId = id;
        }
        studentCpy(studentCpy &oldData)
        {
            stuId = oldData.stuId;
        }
        void displyData()
        {
            std::cout<<"student id = "<<stuId<<std::endl;
        }
};

int main()
{
    int id;
    std::cout<<"enter id"<<std::endl;
    std::cin>>id;

    studentCpy obj1(id);
    obj1.displyData();

    studentCpy obj2(obj1);
    obj2.displyData();

}