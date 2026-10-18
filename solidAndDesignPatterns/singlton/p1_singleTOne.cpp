#include<iostream>

class singleTOne 
{
    private:
        singleTOne()
        {

        }
        static int count;
    public:
        static singleTOne& getInstance()
        {
            static singleTOne obj;
            return obj;
        }
        void inc()
        {
            count++;
        }
        void display()
        {
           
            std::cout<<"hello : "<<count<<std::endl;
        }
};
int singleTOne::count = 0;
int main()
{
    singleTOne &s1 = singleTOne::getInstance();
    singleTOne &s2 = singleTOne::getInstance();

    std::cout<<&s1<<" "<<&s2<<std::endl;
    s1.display();
    s1.inc();
    s2.display();
}