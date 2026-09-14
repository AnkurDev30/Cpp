//emplace back.
#include<iostream>
#include<vector>
//emplace_back add object at the end of vector,list and dueue
//like push_back but it will creat object and then add it

int main()
{
    std::vector<int >vc;
    int op;
    vc.emplace_back(1);
    std::cout<<vc[0]<<std::endl;
    op=7;
    vc.emplace_back(op);
    std::cout<<vc[1]<<std::endl;
    int&b=op;
    op=9;
    vc.emplace_back(op);
    std::cout<<vc[2]<<std::endl;

    std::vector<int>bin;
    unsigned int number;
    std::cout<<"enter number\n";
    std::cin>>number;

    for(int i=31;i>=0;i--)
    {
        int bit=0;
        if(number&1<<i)
        {
            bit=1;
        }
        else{
            bit=0;
        }
        bin.emplace_back(bit);
    }
    for(int i=0;i<bin.size();i++)
    {
        

        std::cout<<bin[i];

        if(i%8==0 && i!=0)
        std::cout<<" ";
    }
    std::cout<<"\n";
    std::cout<<"reverse\n";

    unsigned int result = number;

    //for(int i=0;i<32;i++)
    //{
    //    result = result<<1 | number&1;
    //    number = number>>1;
    //}

    result = (((result>>24)&0x000000ff)
            |((result>>8)&0x0000ff00)
            |((result<<8)&0x00ff0000)
            |((result<<24)&0xff000000));

    std::vector<int>binRev;
    for(int i=31;i>=0;i--)
    {
        int bit=0;
        if(result&1<<i)
        {
            bit=1;
        }
        else{
            bit=0;
        }
        binRev.emplace_back(bit);
    }
    for(int i=0;i<bin.size();i++)
    {
        

        std::cout<<binRev[i];

        if(i%8==0 && i!=0)
        std::cout<<" ";
    }
    std::cout<<"\n";
}