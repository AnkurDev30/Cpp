#include<iostream>
#include<vector>
class CheckCapacity
{
    public:
        int intA;

};
int main()
{
    std::vector<CheckCapacity> v1;
    CheckCapacity o1;

    v1.reserve(10);

    o1.intA=5;
    v1.push_back(o1);
    std::cout<<"1. size = "<<v1.size()<<" capacity = "<<v1.capacity()<<std::endl;

    o1.intA=5*2;
    v1.push_back(o1);
    std::cout<<"2. size = "<<v1.size()<<" capacity = "<<v1.capacity()<<std::endl;

    o1.intA=5*3;
    v1.push_back(o1);
    std::cout<<"3. size = "<<v1.size()<<" capacity = "<<v1.capacity()<<std::endl;

    o1.intA=5*4;
    v1.push_back(o1);
    std::cout<<"4. size = "<<v1.size()<<" capacity = "<<v1.capacity()<<std::endl;

    o1.intA=5*5;
    v1.push_back(o1);
    std::cout<<"5. size = "<<v1.size()<<" capacity = "<<v1.capacity()<<std::endl;

    o1.intA=5*6;
    v1.push_back(o1);
    std::cout<<"6. size = "<<v1.size()<<" capacity = "<<v1.capacity()<<std::endl;

    o1.intA=5*7;
    v1.push_back(o1);
    std::cout<<"7. size = "<<v1.size()<<" capacity = "<<v1.capacity()<<std::endl;

    o1.intA=5*8;
    v1.push_back(o1);
    std::cout<<"8. size = "<<v1.size()<<" capacity = "<<v1.capacity()<<std::endl;

    o1.intA=5*9;
    v1.push_back(o1);
    std::cout<<"9. size = "<<v1.size()<<" capacity = "<<v1.capacity()<<std::endl;

    o1.intA=5*10;
    v1.push_back(o1);
    std::cout<<"10. size = "<<v1.size()<<" capacity = "<<v1.capacity()<<std::endl;

    o1.intA=5*11;
    v1.push_back(o1);
    std::cout<<"11. size = "<<v1.size()<<" capacity = "<<v1.capacity()<<std::endl;

    v1.resize(20);
    o1.intA=5*12;
    v1.push_back(o1);
    std::cout<<"12. size = "<<v1.size()<<" capacity = "<<v1.capacity()<<std::endl;
}