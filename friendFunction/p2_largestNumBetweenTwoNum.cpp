/*
🎯 2. Largest Number Between Two Objects
Requirements:

Class:

private integer

Friend function should:

compare two objects
print greater value
*/

#include<iostream>

class sample
{
    private:
        int a;
    public:
        sample(int a)
        {
            this->a =a;
        }
    friend int largerNum(sample s1, sample s2);
};
int largerNum(sample s1, sample s2)
{
    if(s1.a==s2.a)
    {
        std::cout<<"both are equal "<<std::endl;
        return -1;
    }
    if(s1.a>s2.a)
    {
        return s1.a;
    }
    else
    {
        return s2.a;
    }

}
int main()
{

    int a,b;
    std::cout<<"enter value for obj1 \n";
    std::cin>>a;
    std::cout<<"enter value for obj2 \n";
    std::cin>>b;   

    sample s1(a),s2(b);

    int large = largerNum(s1,s2);
    if(large!=-1)
    {
        std::cout<<"larger number is "<<large<<std::endl;
    }
    return 0;
}
