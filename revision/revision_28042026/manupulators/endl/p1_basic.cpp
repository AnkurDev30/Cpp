/*
✅ Program 1: Basic difference

Print same output using both:

'\n'
std::endl
*/

#include<iostream>
class endlDemo
{
    std::string name;
    public:
        endlDemo(std::string name1):name(name1){};
        void endlManupulatorFunction();
};
void endlDemo::endlManupulatorFunction()
{
    //print by endl;
    std::cout<<"name : "<<name<<std::endl;

    //print by \n
    std::cout<<"name : "<<name<<"\n";
}
int main()
{
    std::string name;
    std::cout<<"enter the name "<<std::endl;
    std::cin>>name;

    endlDemo obj1(name);
    obj1.endlManupulatorFunction();
    return 0;
}