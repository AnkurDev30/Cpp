//observer
#include<iostream>
#include<vector>
class observer
{
    public:
       virtual void fun(int temp)
        {
            std::cout<<"temp\n"<<temp<<"\n";
        }
};
class  logegr :public observer
{
        public:
        void fun(int temp)
        {
            std::cout<<"logger temp\n"<<temp<<"\n";
        }
};
class  data :public observer
{
        public:
        void fun(int temp)
        {
            std::cout<<"data temp\n"<<temp<<"\n";
        }
};
class notify
{
    private:
        // /observer &obj;
        std::vector<observer*>obser;
    public:
        //notify(observer &obj2):obj(obj2){}
        void addRegister(observer *obj)
        {
            obser.push_back(obj);
        }
        void notification(int temp)
        {
           for(auto *p:obser)
           {
            p->fun(temp);
           }
        }
};
int main()
{
    logegr l;
    data d;

    notify n1;
    n1.addRegister(&l);
    n1.addRegister(&d);
    
    n1.notification(26);
}