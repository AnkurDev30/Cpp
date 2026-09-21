//obersever design pattern is a behaviral design patten
//when object is change then it will notify to all.
//register objects

#include<iostream>
#include<vector>

class obs
{
    public:
        virtual void updateTemp(int temp)
        {
            std::cout<<"hi\n";
        }
        virtual ~obs()
        {

        }
};
class display:public obs
{
    public:
        void updateTemp(int temp) override
        {
            std::cout<<"display:"<<temp<<std::endl;
        }
};
class logger:public obs
{
    public:
        void updateTemp(int temp)override
        {
            std::cout<<"logger:"<<temp<<std::endl;
        }
};

class updateTempC
{
    private:
       std::vector<obs*>vec;
    public:
        void addObject(obs *ob)
        {
            vec.push_back(ob);
        } 
        void updateTemp(int temp)
        {
            for(auto m:vec)
            {
                m->updateTemp(temp);
            }
        }
};

int main()
{
    display d1;
    logger l1;
    updateTempC u;
    u.addObject(&d1);
    u.addObject(&l1);

    u.updateTemp(23);
}