//observer design pattern : 
//in observer design pattern , object is monitor the all object 
// and if anything change it ill notify to all registers

#include<iostream>
#include<vector>

class Obser 
{
    public:
        virtual void updateTemp(int temp)
        {

        }
        virtual ~Obser() 
        {

        }     
};

class display:public Obser
{
        void updateTemp(int temp)
        {
            std::cout<<"display "<<temp<<std::endl;
        }
};
class logger:public Obser
{
        void updateTemp(int temp)
        {
            std::cout<<"logger "<<temp<<std::endl;
        }
};


class addObject
{
    private:
        std::vector<Obser*>vec;
    public:
        void addFun(Obser *p)
        {
            vec.push_back(p);
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
    Obser *p=&d1;
    p->updateTemp(30);
    addObject a1;
    a1.addFun(&d1);
    a1.addFun(&l1);
    a1.updateTemp(24);
}
