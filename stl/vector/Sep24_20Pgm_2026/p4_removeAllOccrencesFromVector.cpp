//. Remove all occurrences → remove() + erase()

#include<iostream>
#include<vector>
#include<algorithm>
struct removeSame
{
    int roll;
    std::string name;
};
std::string schoolGirlsName[10] ={"NILAM","PIYUSHA","RITU","RANI","SANGEETA","POOJA","AARTI","PRACHI","DIKSHA","POOJA"};
class removeDta
{
    private:
        std::vector<removeSame>&rvec;

    public:
       removeDta(std::vector<removeSame>&rvec1):rvec(rvec1){}
       void removeAllOcc();


};
void removeDta::removeAllOcc()
{
    std::cout<<"print data\n";

    for(auto p:rvec)
    {
        std::cout<<p.roll<<" "<<p.name<<std::endl;
    }
    std::cout<<"-----------------------------\n";

    rvec.erase(std::remove_if(rvec.begin(),rvec.end(),[](const removeSame &r1){
            return r1.name == "POOJA";
    }),rvec.end());

    std::cout<<"print data after remove all names\n";

    for(auto p:rvec)
    {
        std::cout<<p.roll<<" "<<p.name<<std::endl;
    }
    std::cout<<"-----------------------------\n";

}
class takeIp
{
    public:
        std::vector<removeSame> takeData();
};
std::vector<removeSame> takeIp::takeData()
{
    std::cout<<"fill data\n";
    std::vector<removeSame>reVec;
    removeSame rsame;
    for(int i=0;i<10;i++)
    {
        if(i%3==0)rsame.roll=7;
        else rsame.roll=i*12;

        rsame.name = schoolGirlsName[i];

        reVec.push_back(rsame);
        
    }
    return reVec;
}
int main()
{
    takeIp t1;
    std::vector<removeSame>vecMain;
    vecMain = t1.takeData();
    removeDta obj(vecMain);
    obj.removeAllOcc();

}