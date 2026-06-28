
//Remove Duplicate Characters
#include<iostream>
#include<string>
int main()
{
    std::string str;
    std::cout<<"Enter string : \n";
    std::cin>>str;
    int count =0;
    for(int i=0;i<str.length()-1;i++)
    {
        //std::cout<<"hi"<<std::endl;
        for(int j=i+1;j<str.length();j++)
        {
            //std::cout<<"hello"<<std::endl;
            if(str[i]==str[j])
            {
                for(int k=j;k<str.length()-1;k++)
                {
                    str[k]=str[k+1];
                }
                j--;
                str.pop_back();
            }
        }
    }

    std::cout<<"data : "<<str<<std::endl;

}