//a class have create only one object in whole program this is called singetone class
//its use for congiguration data resource management and logger
#include<iostream>


class singleTone
{
    private:
        //copy constructor =delete
        singleTone(singleTone&)=delete;
        singleTone operator=(singleTone& obj)=delete;
        singleTone()
        {

        }
    public:
        static singleTone& getInstance()
        {
            static singleTone obj;

            return obj;
        }
        void fun()
        {
            std::cout<<"logger\n";
        }
};
int main()
{
    singleTone &l1=singleTone::getInstance();
    singleTone &l2=singleTone::getInstance();

    l1.fun();
    l2.fun();

    std::cout<<"address = %d\n"<<&l1<<std::endl;
    std::cout<<"address = %d\n"<<&l2<<std::endl;
}