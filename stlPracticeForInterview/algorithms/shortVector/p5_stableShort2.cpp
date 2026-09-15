#include<iostream>
#include<vector>
#include<algorithm>
int main()
{
    
    class sh
    {
        public:
            int a;
            int b;
        
    };
    sh a1;
    std::vector<sh>ab;
    for(int i=0;i<5;i++)
    {
        std::cout<<"enter a and b value\n";
        std::cin>>a1.a>>a1.b;
        ab.push_back(a1);
    }
    std::cout<<"display data\n";
    for(auto m:ab)
    {
        std::cout<<m.a<<" "<<m.b<<std::endl;
    }
    std::cout<<"sorting data\n";
    std::stable_sort(ab.begin(),ab.end(),[](const sh &s1,const sh &s2){
        return s1.a<s2.a;
    });

    std::cout<<"after sorting data\n";
    for(auto m:ab)
    {
        std::cout<<m.a<<" "<<m.b<<std::endl;
    }
}