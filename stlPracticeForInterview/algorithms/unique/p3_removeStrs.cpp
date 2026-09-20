//. Student objects — remove consecutive students with same marks
#include<iostream>
#include<vector>
#include<algorithm>
int main()
{
    struct ab{
        int marks;
        std::string name;
    };
    std::vector<ab>vec;
    ab a1;
    std::string ad[] = {
        "asdf",
        "vbn",
        "1234",
        "afds",
        "qwer",
        "lkjh",
        "ujkl",
        "youyu",
        "opop",
        "popo"
    };
    for(int i=0;i<10;i++)
    {
        if(i%2==0)
        {
            a1.marks =45;
        }
        else
        {
            a1.marks =45+i;
        }
        a1.name = ad[i];

        vec.push_back(a1);
    }
    std::cout<<"before remove\n";

    for(auto m:vec)
    {
        std::cout<<m.marks<<" "<<m.name<<std::endl;
    }
//sort.

    std::sort(vec.begin(),vec.end(),[](const ab &a1,const ab &b1){

        return a1.marks<b1.marks;
    });
    auto it = std::unique(vec.begin(),vec.end(),[](const ab &a1,const ab &b1){
        return a1.marks ==b1.marks;

    });

    vec.erase(it,vec.end());

    std::cout<<"after remove\n";

    for(auto m:vec)
    {
        std::cout<<m.marks<<" "<<m.name<<std::endl;
    }
}