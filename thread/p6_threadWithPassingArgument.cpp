#include<iostream>
#include<list>
#include<thread>
#include<algorithm>
void newline()
{
    std::cout<<"\n";
}
void funForInsertValue(std::list<int>&l)
{
    std::cout<<"after insert\n";
    for(auto m :l)
    {
        std::cout<<m<<" ";
    }
    newline();

    auto f = std::find_if(l.begin(),l.end(),[](int x){
        return x == 4;
    });

    if(f!=l.end())
    {
        l.insert(f,44);
    }
    
    std::cout<<"after insert\n";

    for(auto m :l)
    {
        std::cout<<m<<" ";
    }
    newline();


}

int main()
{
    std::list<int>l;

    for(int i=0;i<10;i++)
    {
        if(i%2==0)
        {
            l.push_back(i*2);
        }
        else
        {
            l.push_front(i*3);
        }
    }

    std::thread t(funForInsertValue,std::ref(l));

    t.join();
}