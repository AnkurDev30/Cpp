/*🎯 1. Add Two Numbers Using Friend Function
Requirements:

Create class:

private number

Create friend function to:

add values of two objects
print result

🔥 Focus:

friend access private data*/

#include<iostream>

class sample
{
    private :
        int a;
    public:
        sample(int a)
        {
            this->a=a;
        }
    friend int addObj(sample s1, sample s2);
};
int addObj(sample s1,sample s2)
{
    return s1.a+s2.a;
} 
int main()
{
    sample s1(5),s2(6);
    int r = addObj(s1,s2);
    std::cout<<"result = "<<r<<std::endl;
}