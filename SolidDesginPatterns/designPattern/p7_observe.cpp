//
#include<iostream>
#include<vector>

class observer
{
    public:
        virtual void fun(int a)
        {

        }
};
class display:public observer
{
      public:
        void fun(int temp)
        {
            std::cout<<"displaytemp = "<<temp<<std::endl;
        }
};
class logegr:public observer
{
      public:
        void fun(int temp)
        {
            std::cout<<"logegrtemp = "<<temp<<std::endl;
        }
};

class notify
{
    public:
        std::vector<observer*>vec;

        void add(observer *ob)
        {
            vec.push_back(ob);
        }
        void notifyFun(int t)
        {
            for(auto *p:vec)
            {
                p->fun(t);
            }
        }
};
int main()
{
    display d1;
    logegr l1;
    notify n1;
    n1.add(&d1);
    n1.add(&l1);
    n1.notifyFun(45);
}