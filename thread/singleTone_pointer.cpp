#include<iostream>

class singletone
{
    private:
        singletone()
        {

        }
        singletone (singletone& obj)=delete;
        singletone  operator = ( singletone &obj)=delete;
    public:
        static singletone* getInstance()
        {
            static singletone instance;
            return &instance;
        }
        void fun()
        {
            std::cout<<"i m singtone fun\n";
        }
};

int main()
{
    singletone *l1=singletone::getInstance();
    singletone *l2=singletone::getInstance();

    l1->fun();
    l2->fun();
    return 0;
}