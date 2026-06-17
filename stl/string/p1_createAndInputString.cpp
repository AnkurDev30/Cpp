#include<iostream>
#include<string>
class strOpt
{
    public:
        std::string inp;
        strOpt()
        {
            std::cout<<"enter string\n";
            getline(std::cin,inp);
        }
        void display()
        {
            std::cout<<"o/p : ="<<inp<<std::endl;
        }
};
int main()
{
    strOpt obj;
    obj.display();
}