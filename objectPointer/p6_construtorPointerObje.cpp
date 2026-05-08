/*
Create class:

constructor initializes value

Create object dynamically:

new ClassName(...)

Access using pointer.
*/

#include<iostream>
class kt
{
    private:
        int a;
    public:
        kt()
        {
            std::cout<<"enter value\n";
            std::cin>>a;
        }
        void print()
        {
            std::cout<<"a = "<<a<<std::endl;
        }
};
int main()
{
    int n;
    std::cout<<"enter n\n";
    std::cin>>n;

    kt *p =new kt[n];

    for(int i=0;i<n;i++)
    {
        p[i].print();
    }
}