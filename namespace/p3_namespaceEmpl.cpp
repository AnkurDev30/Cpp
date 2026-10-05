/**
3. Namespace variable + function
Create namespace Employee containing:
int id;
std::string name;

void display();

Initialize the variables from main() and call display().
Practice: Accessing namespace-level variables and functions.
*/

#include<iostream>

namespace employee 
{
    class empClass 
    {
        private:
            int id;
            std::string name;
        public:
            void readData();
            void displayData();
    };
    
    void empClass::readData()
    {
        std::cout<<"enter id and name\n";
        std::cin>>id>>name;
    }
    
    void empClass::displayData()
    {
        std::cout<<"id : "<<id<<" "<<"name : "<<name<<std::endl;
    }
}

int main()
{
    employee::empClass obj;
    obj.readData();
    obj.displayData();
}