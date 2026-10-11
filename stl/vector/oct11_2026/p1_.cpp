//define a vectror

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    std::vector<int>vec;

    for(int i=0;i<10;i++)
    {
        vec.push_back(rand()%100);
    }
    for(auto m:vec)
    {
        std::cout<<m<<" ";
    }
    std::cout<<"\n";

    //capacity
    std::cout<<"capacity : "<<vec.capacity()<<"\n";
    std::cout<<"size : "<<vec.size()<<"\n";
    //resize
    vec.resize(120);
    std::cout<<"capacity : "<<vec.capacity()<<"\n";
    std::cout<<"size : "<<vec.size()<<"\n";
    //reserve
    vec.reserve(200);
    std::cout<<"capacity : "<<vec.capacity()<<"\n";
    std::cout<<"size : "<<vec.size()<<"\n";
    //data
    int *f = vec.data();
    std::cout<<"f : "<<*f<<std::endl;
    //shrink_to_fit
    vec.shrink_to_fit();
    std::cout<<"capacity : "<<vec.capacity()<<"\n";
    std::cout<<"size : "<<vec.size()<<"\n";    


    std::vector<int>vec1;

    for(int i=0;i<10;i++)
    {
        if(i%2==0)
        {
            int a=9;
            vec1.emplace_back(a);
        }
        else
        {
            vec1.push_back(rand()%200);
        }
    }
    std::vector<int>vec2 = vec1;
    std::cout<<"data:\n";
    for(auto v:vec2)
    {
        std::cout<<v<<" ";
    }
    std::cout<<"\n";
    //remove duplicate element.
    

    std::sort(vec2.begin(),vec2.end());
    auto u = std::unique(vec2.begin(),vec2.end());

    vec2.erase(u,vec2.end());

    for(auto p : vec2)
    {
        std::cout<<p<<" ";
    }
    std::cout<<"\n";


    std::cout<<"----------------------------------------\n";

    std::vector<int>vec3=vec1;
    std::cout<<"print  data\n";
    for(auto m:vec3)
    {
        std::cout<<m<<" ";
    }
    std::cout<<"\n";
    int d=0;
    std::cout<<"enter element for delete\n";
    std::cin>>d;
    for(std::vector<int>::iterator it=vec3.begin();it!=vec3.end();)
    {
        if(*it==d)
        {
            it =vec3.erase(it);
        }
        else
        {
            it++;
        }
    }
    std::cout<<"remove specific data\n";
    for(auto m:vec3)
    {
        std::cout<<m<<" ";
    }
    std::cout<<"\n";

    std::cout<<"----------------------------------------\n";


    std::cout<<"insert\n";
    int ins,pos ;
    std::vector<int>vec4 = vec1;
    for(auto m:vec4)
    {
        std::cout<<m<<" ";
    }
    std::cout<<"\n";
    std::cout<<"enter elemenet where you want to insert\n";
    std::cin>>pos;
    std::cout<<"enter elemenet want to insert\n";
    std::cin>>ins;

    for(std::vector<int>::iterator it=vec4.begin();it!=vec4.end();)
    {
        if(*it==pos)
        {
            vec4.insert(it,ins);
            break;
        }
        else
        {
            it++;
        }
    }
    std::cout<<"data after insert\n";
    for(auto m:vec4)
    {
        std::cout<<m<<" ";
    }
    std::cout<<"\n";
    std::cout<<"-----------------------------------------\n";
    std::cout<<"remove even or odd\n";

    std::vector<int>vec5 = vec1;
    std::cout<<"vector: \n";
    for(auto m:vec5)
    {
        std::cout<<m<<" ";
    }
    std::cout<<"\n";

    for(std::vector<int>::iterator it=vec5.begin();it!=vec5.end();)
    {
        if(*it%2==0)
        {
            it = vec5.erase(it);
        }
        else
        {
            it++;
        }
    }
    std::cout<<"after even delete \n";
    for(auto m:vec5)
    {
        std::cout<<m<<" ";
    }
    std::cout<<"\n";

    cout<<"=============================\n";
    
    cout<<"find the maximum and minimum elements using STL algorithms\n";

    std::vector<int>vec6 = vec1;

    for(auto m:vec6)
    {
        std::cout<<m<<" ";
    }
    std::cout<<"\n";
    auto max = std::max_element(vec6.begin(),vec6.end());
    std::cout<<"maximum = "<<*max<<std::endl;

    auto min = std::min_element(vec6.begin(),vec6.end());
    std::cout<<"minimum = "<<*min<<std::endl;

    cout<<"++++++++++++++++++++++++++++++++\n";
    cout<<"Reverse a vector using std::reverse().\n";

    std::vector<int>vec7 = vec1;
    std::cout<<"before reverse\n";
    for(auto m:vec7)
    {
        std::cout<<m<<" ";
    }
    std::cout<<"\n";

    std::reverse(vec7.begin(),vec7.end());
    std::cout<<"after reverse\n";
    for(auto m:vec7)
    {
        std::cout<<m<<" ";
    }
    std::cout<<"\n";

    cout<<"_______________________________\n";
    cout<<"Sort a vector in ascending and descending order.\n";

    std::vector<int>vec8=vec1;

    std::cout<<"print before assending order\n";
    for(auto s:vec8)
    {
        std::cout<<s<<" ";
    }
    std::cout<<"\n";

    std::sort(vec8.begin(),vec8.end());
    std::cout<<"print  assending order\n";
    for(auto s:vec8)
    {
        std::cout<<s<<" ";
    }
    std::cout<<"\n";

    std::cout<<"print before desending order\n";
    for(auto s:vec8)
    {
        std::cout<<s<<" ";
    }
    std::cout<<"\n";

    std::sort(vec8.begin(),vec8.end(),[](int x,int y){
        return x>y;
    });
    std::cout<<"print  desending order\n";
    for(auto s:vec8)
    {
        std::cout<<s<<" ";
    }
    std::cout<<"\n";

    cout<<"____________________________________\n";

    std::vector<int>vec9 = vec1;

    std::cout<<"data : \n";

    for(auto m:vec9)
    {
        std::cout<<m<<std::endl;
    }
    std::cout<<"\n";

    int fx;
    std::cout<<"enter element for find\n";
    std::cin>>fx;

    auto fn = std::find(vec9.begin(),vec9.end(),fx);

    if(fn!=vec9.end())
    {
        std::cout<<"find : "<<*fn<<std::endl;
    }
    else
    {
        std::cout<<"not find\n";
    }
    std::cout<<"-------------------------------------------\n";

    cout<<"Count the frequency of each element in a vector.\n";

    std::vector<int>vec10 = vec1;

    std::cout<<"print data for count\n";
    for(auto m:vec10)
    {
        std::cout<<m<<" ";
    }
    std::cout<<"\n";
    int countVal =0;
    std::cout<<"enter element for count\n";
    std::cin>>countVal;

    int cVal = std::count(vec10.begin(),vec10.end(),countVal);

    std::cout<<countVal<<" is "<<cVal<<" times\n";
    cout<<"-------------------------------------------------\n";
    
    std::cout<<"Move all even numbers before odd numbers\n";

    std::vector<int>vec11=vec1;
    for(auto x :vec11)
    {
        std::cout<<x<<" ";
    }
    std::cout<<std::endl;

    std::stable_partition(vec11.begin(),vec11.end(),[](int x){
        return x%2==0;
    });

    std::cout<<"after sepration\n";
    for(auto x : vec11)
    {
        std::cout<<x<<" ";
    }
    std::cout<<std::endl;

    std::cout<<"------------------------------\n";
    std::cout<<"seprate nagtive and positive\n";
    std::vector<int>vecC;

    int a=-1;
    int b=1;
    for(int i=0;i<10;i++)
    {
        if(i%2==0)
        {
            vecC.push_back(a--);
        }
        else
        {
            vecC.push_back(b++);
        }
    }

    for(auto m:vecC)
    {
        std::cout<<m<<" ";
    }
    std::cout<<std::endl;

    std::stable_partition(vecC.begin(),vecC.end(),[](int x){
        return x<0;
    });

    std::cout<<"after separation\n";
    for(auto m:vecC)
    {
        std::cout<<m<<" ";
    }
    std::cout<<std::endl;
}