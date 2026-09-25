//Sum of two numbers
#include<iostream>
class add
{
    private:
        float a;
        float b;
    public:
        add(float a,float b)
        {
            this->a=a;
            this->b=b;
        }
        void addition()
        {
            float result = a+b;
            std::cout<<"result = "<<result<<std::endl;
        }
};
int main()
{
    float a,b;
    std::cout<<"enter 2 numbers\n";
    std::cin>>a>>b;
    add a1(a,b);
    a1.addition();
}