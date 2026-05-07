/*
🎯 3. Swap Private Data
Requirements:

Create two objects.

Friend function should:

swap private values
print updated values

🔥 Very common interview style
*/

#include<iostream>
class swapTest
{
    private:
        int a;
        friend void swapFun(swapTest &s1,swapTest &s2);
    public:
        swapTest(int p):a(p){};
        friend void printData(swapTest s1,swapTest s2);
};

void swapFun(swapTest &s1,swapTest &s2)
{
    int temp = s1.a;
    s1.a=s2.a;
    s2.a=temp;
}
void printData(swapTest s1,swapTest s2)
{
    std::cout<<"after swap = \n";
    std::cout<<"s1 data = "<<s1.a<<std::endl;
    std::cout<<"s2 data = "<<s2.a<<std::endl;
}
int main()
{
    swapTest T1(3),T2(5);
    swapFun(T1,T2);
    printData(T1,T2);
}