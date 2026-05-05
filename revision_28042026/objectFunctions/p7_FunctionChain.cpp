//function chain

#include<iostream>

class function
{

    public:
        function& fun1()
        {
            std::cout<<"hello"<<std::endl;
            return *this;
        }
        function& fun2()
        {
            std::cout<<"hi"<<std::endl;
            return *this;
        }
        function& fun3()
        {
            std::cout<<"Ram"<<std::endl;
            return *this;
        }
        function& fun4()
        {
            std::cout<<"Shyaam"<<std::endl;
            return *this;
        }
};
int main()
{
    function f1;
    f1.fun1().fun2().fun3().fun4();
}