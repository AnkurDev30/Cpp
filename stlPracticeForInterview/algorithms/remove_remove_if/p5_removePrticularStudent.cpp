#include<iostream>
#include<vector>
#include<algorithm>
struct student
{
    int number;
    std::string name;
};

int main()
{
    student s1;
    std::string namearray[10]={
        "JIVIKA",
        "BHUMI",
        "VIHAN",
        "KRISHNA",
        "ADISH",
        "SIDDHU",
        "AGASTYA",
        "ANNI",
        "IRA",
        "OSHI"
    };
    std::vector<student>vec;

    for(int i=0;i<10;i++)
    {
        if(i%3==0)
        {
            s1.number = 11;
        }
        else
        {
            s1.number=i;
        }
        s1.name=namearray[i];

        vec.push_back(s1);
    }

    std::cout<<"before remove\n";

    for(auto m:vec)
    {
        std::cout<<m.number<<"     "<<m.name<<std::endl;
    }

    student key={11,""};
    vec.erase
    (
        std::remove_if
        (
            vec.begin(),
            vec.end(),
            [](const student &s1)
            {
                return s1.number==11;
            }
        ),
        vec.end()
    );
    std::cout<<"after remove\n";

    for(auto m:vec)
    {
        std::cout<<m.number<<"     "<<m.name<<std::endl;
    }
}