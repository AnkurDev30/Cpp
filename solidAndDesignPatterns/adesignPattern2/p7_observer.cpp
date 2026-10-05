#include<iostream>
#include<vector>
class observer 
{
    public:
        virtual void updateFun(int temp)
        {

        }
};
class Display: public observer
{
    public:
        void updateFun(int temp)
        {
            std::cout<<"display temp = "<<temp<<std::endl;
        }
};
class Logger: public observer
{
    public:
        void updateFun(int temp)
        {
            std::cout<<"Logger temp = "<<temp<<std::endl;
        }
};
class mainC 
{
    private:
        std::vector<observer*>vec;
    public:
        void addClass(observer *obj)
        {
            vec.push_back(obj);
        }
        void dataLogger(int temp)
        {
            for(auto m:vec)
            {
                m->updateFun(temp);
            }
        }
};

int main()
{
    Display d1;
    Logger l1;

    mainC mainCls;
    mainCls.addClass(&d1);
    mainCls.addClass(&l1);

    mainCls.dataLogger(78);

}