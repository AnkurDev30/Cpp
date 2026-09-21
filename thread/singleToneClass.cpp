//single tone class

#include<iostream>

class singletone
{
    private:
        singletone()
        {
            std::cout<<"single tone\n";
        }
    public:
        static singletone& getInstance()
        {
            static singletone instance;
            return instance;
        }
        void fun()
        {
            std::cout<<"single tone fun\n";
        }

};

int main()
{
    singletone &l1 = singletone::getInstance();
    singletone &l2 = singletone::getInstance();

    l1.fun();
    l2.fun();

    std::cout<<&l1<<" "<<&l2<<std::endl;
}