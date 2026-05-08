/*
🧱 2. Student and Address System
Requirements:

Create class:Address
city
state
pincode

Create class:Student
name
roll number
Address object inside Student

Features:

display student full information

🔥 Very common real-world example
*/

#include<iostream>
class address 
{
    private:
        std::string city;
        std::string state;
        int pin;
    public :
        void getData()
        {
            std::cout<<"enter addres\ncity:\n";
            std::cin>>city;

            std::cout<<"enter state\n";
            std::cin>>state;

            std::cout<<"enter pin\n";
            std::cin>>pin;
        }
        void printData()
        {
            std::cout<<"address     \n"
                     <<"city       : "<<city<<"\n"
                     <<"state      : "<<state<<std::endl;
        }
};
class studentData
{
    private:
        std::string name;
        int roll;
        address a1;
    public:
        void getData()
        {
            std::cout<<"enter name :\n";
            std::cin>>name;

            std::cout<<"enter rollnumber\n";
            std::cin>>roll;

            a1.getData();
        }
        void printData()
        {
            std::cout<<"name       : "<<name<<std::endl;
            std::cout<<"rollnumber : "<<roll<<std::endl;
            a1.printData();
        }
};
int main()
{
    studentData s1;
    s1.getData();
    s1.printData();
    return 0;
}