/*namespace :- namespace is nothing but it will aloow to define variable,
funtion, class user define datatypes.
it will avoide or prevent name collision 
we need to use scope resolution with that 
we we define namesapce before main so we need to use using keyward
it is not close by ; operattor 

*/

#include<iostream>

namespace flower
{
    int x=10;
    int add(int a,int b)
    {
        return a+b;
    }
    class base
    {
        public:
            void fun()
            {
                std::cout<<"hello\n";
            }
    };
    struct raven {
        void fun()
        {
            std::cout<<"hi\n";
        }
    };
}
using namespace flower;
//using namespace std;
int main()
{
    int b = x;
    std::cout<<b<<std::endl;

    int f=99,z=101;
    int result = add(f,z);
    std::cout<<"result = "<<result<<std::endl;

    base b1;
    raven r1;
    b1.fun();
    r1.fun();
}