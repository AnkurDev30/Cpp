//Implement move constructor and move assignment in C++11

#include<iostream>

class mv 
{
    public:
        int *y=nullptr;
        mv(int x)
        {
            y = new int(x);
        }
        void display()
        {
            if(y==nullptr) std::cout<<"nullptr\n";
            std::cout<<"y = "<<*y<<std::endl;
        }
        mv(mv &&obj)
        {
            y = new int(*obj.y);
            obj.y=nullptr;
        }
        mv& operator =(mv &&obj)
        {
            if(this!=&obj)
            {
                int *temp = new int(*obj.y);

                delete y;

                y=temp;

                obj.y = nullptr;
            }
            return *this;
        }
        ~mv()
        {
            delete y;
        }
};

int main()
{
    mv m1(10);
    mv m2(20);
    m1.display();
    m2.display();

    m1 = std::move(m2);

    m1.display();
   // m2.display();

   mv m3(20);
   mv m4=std::move(m3);
   m4.display();


}

