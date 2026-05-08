/**
🧱 3. Dynamic Object Creation
Requirements:

Create class:

employee id
salary

Create object using:

new

Access data using pointer.

Delete memory at end.
*/
#include<iostream>
class employee
{
    private:
        int id;
    public:

        void in()
        {
            std::cout<<"enter var\n";
            std::cin>>id;
        } 
        void out()
        {
            std::cout<<"var = "<<id<<std::endl;
        }

};
int main()
{
    employee *e;
    e = new employee(sizeof(employee));
    e->in();
    e->out();
    delete e;

}