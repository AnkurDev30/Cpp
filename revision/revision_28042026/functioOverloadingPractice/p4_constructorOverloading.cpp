//Constructor overloading.

#include<iostream>

class stu
{
    public:
        stu()
        {
            std::cout<<"no data"<<std::endl;
        }
        stu(std::string name)
        {
            std::cout<<"student name is ="<<name<<std::endl;;
        }
        stu(std::string name,int age )
        {
            std::cout<<"student name is ="<<name<<std::endl;;
            std::cout<<"student age is ="<<age<<std::endl;;
        }
        
};
int main()
{
    stu s1;
    stu s2("shiva");
    stu s3("ram ",23);
}