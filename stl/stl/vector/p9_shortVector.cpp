//Program 9
//Sort vector.

#include<iostream>
#include<vector>
#include<sstream>
class shorted
{
    private:
        std::string name;
        int roll;
    public:

        void read();
        std::string getName();
        int getRoll();
        void display(std::vector<shorted>&v);
};
void shorted:: display(std::vector<shorted>&v)
{
    for(size_t i=0;i<v.size();i++)
    {
        std::cout<<"Data [ "<<i<<" ] | "
        <<"Rollnumber "<<v[i].getRoll()<<" | "
        <<"Name       "<<v[i].getName()<<" |"<<std::endl;
    }
}
void shorted::read()
{
    std::string roll;

    std::cout<<"Enter name\n";
    getline(std::cin,name);

    std::cout<<"Enter rollnumber\n";
    getline(std::cin,roll);

    std::stringstream ss(roll);
    ss>>this->roll;

}
std::string shorted::getName()
{
    return name;
}
int shorted::getRoll()
{
    return roll;
}
class short1:public shorted
{
    public:
        void shortByName(std::vector<shorted>&v);
        void shortByRoll(std::vector<shorted>&v);
};
void short1::shortByName(std::vector<shorted>&v)
{
    std::cout<<"Short by name:"<<std::endl;
    std::vector<shorted> vtemp;
    shorted object;
    for(size_t i =0;i<v.size()-1;i++)
    {
        for(size_t j =i+1;j<v.size();j++)
        {
            if(v[i].getName()>v[j].getName())
            {
                object = v[i];
                v[i]=v[j];
                v[j]=object;
            }
        }
    }
    object.display(v);
}
void short1::shortByRoll(std::vector<shorted>&v)
{
    std::cout<<"Short by rollnumber:"<<std::endl;
    std::vector<shorted> vtemp;
    shorted object;
    for(size_t i =0;i<v.size()-1;i++)
    {
        for(size_t j =i+1;j<v.size();j++)
        {
            if(v[i].getRoll()>v[j].getRoll())
            {
                object = v[i];
                v[i]=v[j];
                v[j]=object;
            }
        }
    }
    object.display(v);
}
int main(int argc,char* argv[])
{
    if(argc<2)
    {
        std::cout<<"give correct input\n";
        return 0;
    }
    else
    {
        int numberOfElement;
        std::string opt;
        std::stringstream ss(argv[1]);
        ss>>numberOfElement;

        std::vector<shorted> vect;
        shorted obj;

        for(size_t i=0;i<numberOfElement;i++)
        {
            obj.read();
            vect.push_back(obj);
        }
        obj.display(vect);

        std::cout<<"Select option:"<<"\n1) Short By Name\n"<<"\n2) Short By Roll\n";
        getline(std::cin,opt);
        std::stringstream ss1(opt);
        int optn;
        ss1>>optn; 
        short1 sh1;
        switch(optn)
        {
            case 1:
                sh1.shortByName(vect);
                break;
            case 2:
                sh1.shortByRoll(vect);
                break;
            default:
                std::cout<<"wrong opt\n";
                break;
        }
    }
}