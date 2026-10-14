#include<iostream>
#include<vector>
class observ 
{
    public:
        virtual void fun(int temp)=0;
        virtual ~observ()=default;
};

class display:public observ 
{
    public:
        void fun(int temp)
        {
            std::cout<<"diaplay = "<<temp<<std::endl;
        }
};
class logger:public observ 
{
    public:
        void fun(int temp)
        {
            std::cout<<"logger = "<<temp<<std::endl;
        }
};

class observOp 
{
    private:
        std::vector<observ*>vec;
    public:
        void addObject(observ *op)
        {
            vec.push_back(op);
        }
        void notify(int temp)
        {
            for(auto *m:vec)
            {
                m->fun(temp);
            }
        }
};
int main()
{
    display d1;
    logger l1;
    observOp op1;
    op1.addObject(&l1);
    op1.addObject(&d1);

    op1.notify(28);
}