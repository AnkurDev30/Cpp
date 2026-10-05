//remove student rmove 40marks

#include<iostream>
#include<vector>
#include<algorithm>

struct student{
    std::string name;
    int marks;
};
std::string name[20]={
                        "KABIR",
                        "RED",
                        "SAWAN",
                        "SOYA",
                        "I AM BIG",
                        "RAVINA",
                        "JIVIKA",
                        "BHUMI",
                        "VIHAN",
                        "KRISHNA",
                        "ADISH",
                        "SIDDHU",
                        "AGASTYA",
                        "ANNI",
                        "IRA",
                        "OSHI",
                        "RAVI",
                        "MOHAN",
                        "KISAN"  ,
                        "RAHUL"        
};
int main()
{
    student s1;
    int a=30;
    int b=60;
    std::vector<student>vec;
    for(int i=0;i<20;i++)
    {
        if(i%4==0)
        {
            s1.marks =a++;
        }
        else
        {
            s1.marks = (b=b+5);
        }
        s1.name=name[i];

        vec.push_back(s1);
    }

    std::cout<<"student first list\n";
    for(auto m: vec)
    {
        std::cout<<m.marks<<" "<<m.name<<std::endl;
    }
    std::cout<<"\n";
    vec.erase
    (
        std::remove_if
        (
            vec.begin(),
            vec.end(),
            [](const student sw)
            {
                return sw.marks<40;
            }
        ),
        vec.end()
    );

    std::cout<<"student second list\n";
    for(auto m: vec)
    {
        std::cout<<m.marks<<" "<<m.name<<std::endl;
    }
    std::cout<<"\n";
}