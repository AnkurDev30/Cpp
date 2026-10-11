#include<iostream>
#include<vector>
class observe 
{
    public:
        virtual void fun(int temp)
        {

        }

};
class display:public observe
{
    public:
        void fun(int temp)
        {
            std::cout<<"display : "<<temp<<std::endl;
        }
};
class logger:public observe
{
    public:
        void fun(int temp)
        {
            std::cout<<"logger : "<<temp<<std::endl;
        }
};
class observer_Patten 
{
    private:
        std::vector<observe*>vec;
    public:
        void addClass(observe *obj)
        {
            vec.push_back(obj);
        }
        void observation(int temp)
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
    observer_Patten o1;
    o1.addClass(&d1);
    o1.addClass(&l1);
    o1.observation(23);
}

