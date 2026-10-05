/**
emplace_front() and emplace_back()

Create a Student class.
Construct students directly inside the list
*/

#include<iostream>
#include<list>

int main()
{
    struct stu
    {
        int r;
        int m;

        //stu(roll.marks):r(roll),m(marks){}
    };
    stu s1;
    std::list<stu>l;
    static int roll=1000,marks=70;
    for(int i=0;i<10;i++)
    {
        
        if(i%2==0) {
            int a=roll++;
            int b= marks++;
            l.emplace_back(stu{a,b});
        }
        else {
             int a=roll+2;
            int b= marks+3;
            l.emplace_front(stu{a,b});
        }
    }

    for(auto m:l)
    {
        std::cout<<"data "<<m.r<<" "<<m.m<<std::endl;
    }
}