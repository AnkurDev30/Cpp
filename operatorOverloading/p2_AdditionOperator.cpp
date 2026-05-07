//Addition operator

#include<iostream>
class Addition{

    private:
        int a;
    public:
        static int c;
        Addition(int p):a(p){
            std::cout<<"construtor "<<this<<std::endl;
        }
        int operator +(Addition a1)
        {
            std::cout<<"add done\n";
            return (this->a+a1.a);
        }

};
int main()
{
    int var;
    std::cout<<"enter var for first object\n";
    std::cin>>var;
    Addition obj1(var);
    std::cout<<"enter var for second object\n";
    std::cin>>var;
    Addition obj2(var);

    int sum = obj1+obj2;

    std::cout<<"some of 2 object = "<<sum<<std::endl;
}