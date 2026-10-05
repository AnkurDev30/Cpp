#include<iostream>

#include<list>
#include<algorithm>

class findTry
{
    private:
        struct stu{
            int r,m;
        };
    public:
        void vFindTryFun();
};
void findTry::vFindTryFun()
{
    std::list<stu>l;
    stu s1;
    int a=40,b=2000;
    for(int i=0;i<10;i++)
    {
        if(i%2==0){
            s1.r=b++;
            s1.m=a++;
            l.push_front(s1);
        }
        else
        {
            s1.r=b=b*2;
            s1.m=a=a*6;
            l.push_back(s1);
        }
    }

    std::cout<<"print data\n";
    for(auto m:l)
    {
        std::cout<<m.r<<" "<<m.m<<std::endl;
    }

    auto it = std::find_if(l.begin(),l.end(),[](const stu s1){
        return s1.m==40;
    });

    std::cout<<"found data index = "<<std::distance(l.begin(),it)<<std::endl;

    if(it!=l.end())
    {
        std::cout<<"found\n";
    }
    else
    {
        std::cout<<"not found\n";
    }

}
int main()
{
    findTry f1;
    f1.vFindTryFun();
}