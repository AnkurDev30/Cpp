/**
Reverse string
Palindrome string
Character frequency
Word count
Remove spaces
Remove duplicate chars
Anagram
Upper to lower
String compare
String copy
String concatenation
Longest word
Count vowels
Count consonants
Substring search
*/
#include<iostream>
#include<string>
#include<map>
class myString
{
    public:
        void reversStr();
        void checkPalindrom();
        void wordCount();
        void characterFrequency();
        void removeSpaces();
        void duplicateCharcterRemve();
        void anagram();
        void UpperToLower();
        void LowerToUper();
        void stringCompare();
        void stringCpy();
        void stringConconating();
        void longestWord();
        void countVowels();
        void countConsonants();
        void subStrSearch();
};
//question1:
void myString::reversStr()
{
    char temp;
    std::string str;
    std::cout<<"Enter string for reverse \n";
    getline(std::cin,str);
    system("clear");
    std::cout<<"String before reverse : "<<str<<std::endl;
    for(int i=0,j=(str.length()-1);j>i;i++,j--)
    {
        temp =str[j];
        str[j]=str[i];
        str[i]=temp;
    }
    std::cout<<"After Reverse : "<<str<<std::endl;
}
//question 2
void myString::checkPalindrom()
{
    char temp;
    std::string str;
    std::string palin;
    std::cout<<"Enter string for check palindrom \n";
    getline(std::cin,str);
    //copy
    palin=str;
    system("clear");
    
    for(int i=0,j=(str.length()-1);j>i;i++,j--)
    {
        temp =str[j];
        str[j]=str[i];
        str[i]=temp;
    }
    if(palin==str)
    {
        std::cout<<"string is palindrom\n"<<str<<"\n"<<palin<<std::endl;
    }
    else
    {
        std::cout<<"string is not palindrom\n"<<str<<"\n"<<palin<<std::endl;
    }
}
//question 3
void myString::characterFrequency()
{
    char temp;

    std::string str;
  
    std::cout<<"Enter string for check character frequency\n";
    getline(std::cin,str);

    std::map<char,int>freq;

    for(char &ch:str)
    {
        freq[ch]++;
    }

    for(auto &dat:freq)
    {
        std::cout<<"character: "<<dat.first<<" frequency "<<dat.second<<std::endl;
    }

}
//question 4
void myString::wordCount()
{
    std::string str;
  
    std::cout<<"Enter string for check Number of word\n";
    getline(std::cin,str);
    std::map<std::string,int>mpWord;
    int count=0;
    for(int i=0;i<str.length()-1;i++)
    {
        if( str[i]==' ' && str[i+1]!=' ')
        {
            count++;
        }
    }
    if(str[0]==' ')
    {
        count--;
    }
    std::cout<<"Number of word = "<<count+1<<std::endl;
}
//Question 5
void myString::removeSpaces()
{
    std::cout<<"enter string for remove space\n";
    std::string str;
    getline(std::cin,str);
    int count =0;
    for(int i=0;i<str.length()-1;i++)//abc cdef ghi
    {
        if(str[i]==' ')
        {
            count++;
            for(int j=i;j<str.length()-1;j++)
            {
                str[j]=str[j+1];
                
            }
        }
    }
    std::cout<<std::endl;
    std::cout<<count<<std::endl;
    for(int i=0;i<count;i++)
    {
        str.pop_back();
    }
    std::cout<<"remove space : "<<str<<std::endl;
}
//Question 6
void myString:: duplicateCharcterRemve()
{
    std::string str;
    std::cout<<"enter string for remove duplicate char : \n";
    getline(std::cin,str);
    int count=0;
    for(int i=0;i<str.length()-1;i++)
    {
        for(int j=i+1;j<str.length();j++)
        {
            if(str[i]==str[j])
            {
                count++;
                std::cout<<str[i]<<std::endl;
                std::cout<<"hi\n";
                for(int k=j;k<str.length()-1;k++)
                {
                    str[k]=str[k+1];
                }
            }
        }
    }
    for(int i=0;i<count;i++)
    {
        str.pop_back();
    }
    std::cout<<"remove duplicate char : "<<str<<std::endl;
}
//question 7 anagram
void myString::anagram()
{
    std::string str1,str2;
    std::cout<<"enter string for remove duplicate char : \n";
    getline(std::cin,str1);   
    std::cout<<"enter string for remove duplicate char : \n";
    getline(std::cin,str2);  
    if(str1.length()==str2.length())
    {
        //short 1;
        for(int i=0;i<str1.length()-1;i++)
        {
            for(int j=i+1;j<str1.length();j++)
            {
                if(str1[i]>str1[j])
                {
                    char temp =str1[i];
                    str1[i]=str1[j];
                    str1[j]=temp;
                }
            }
        }
        std::cout<<"str1 short = "<<str1<<std::endl;
        //short 2;
        for(int i=0;i<str2.length()-1;i++)
        {
            for(int j=i+1;j<str2.length();j++)
            {
                if(str2[i]>str2[j])
                {
                    char temp =str2[i];
                    str2[i]=str2[j];
                    str2[j]=temp;
                }
            }
        }
        std::cout<<"str2 short = "<<str2<<std::endl;

        if(str1==str2)
        {
            std::cout<<"Anagram string\n";
        }
        else
        {
            std::cout<<"Not Anagram string\n";
        }
    }
    else
    {
        std::cout<<"for anagram both length should be smme\n";
    }
}
//question 8 UpperToLower
void myString::UpperToLower()
{
    std::string str1;
    std::cout<<"enter string for upper to lower : \n";
    getline(std::cin,str1);  

    for(int i=0;i<str1.length();i++)
    {
        if(str1[i]>='a' && str1[i]<='z')
        {
            str1[i]=str1[i]-32;
        }
    }
    std::cout<<"New String : "<<str1<<std::endl;
}
//lower to uper
void myString::LowerToUper()
{
    std::string str;
    std::cout<<"enter string for lower to uper : \n";
    getline(std::cin,str);  

    for(int i=0;i<str.length();i++)
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            str[i]=str[i]+32;
        }
    }
    std::cout<<"New String : "<<str<<std::endl;
}
//Q8 string Compare.
void myString::stringCompare()
{
    std::string str1,str2;
    std::cout<<"enter first string \n";
    getline(std::cin,str1);   
    std::cout<<"enter second string \n";
    getline(std::cin,str2);  

    if(str1==str2)
    {
        std::cout<<"strings are matched\n";
    }
    else
    {
        std::cout<<"strings are not matched\n";
    }
}
//Q9 string copy.
void myString::stringCpy()
{
    std::string str1,str2;

    std::cout<<"enter source string \n";
    getline(std::cin,str1);   
    std::cout<<"enter destination string\n";
    getline(std::cin,str2);  

    str1=str2;

    std::cout<<"New String : "<<str1<<std::endl;
}
//Q10 string concanating.
void myString::stringConconating()
{
    std::string str1,str2;

    std::cout<<"enter first string \n";
    getline(std::cin,str1);   
    std::cout<<"enter second string\n";
    getline(std::cin,str2); 

    int length1=str1.length();
    int length2 = str2.length();
    char *str3;
    str3 =new char[length1+length2];
    int i,j;
    for( i=0;i<length1;i++)
    {
        str3[i]=str1[i];
    }

    std::cout<<"str3 I="<<str3<<std::endl;
    for( i=length1,j=0;i<length1+length2;i++)
    {
        str3[i]=str2[j];
        j++;
    }
    std::cout<<"New String : "<<str3<<std::endl;
}
void myString::longestWord()
{
    std::string str1;

    std::cout<<"enter string for max length word\n";
    getline(std::cin,str1); 

    //calculate word.
    std::map<int,int>mp;
    int a=1;
    for(int i=0;i<str1.length();i++)
    {
        if(str1[i]==' ')
        {
            a++;
        }
        else
        {
            mp[a]++;
        }
    }
 
    auto cd = mp.find(1);
    int ab=cd->second;
    int p=cd->first;
    for(auto m:mp)
    {
       if(ab<m.second)
       {
        ab=m.second;
        p=m.first;
       }
    }
    std::cout<<"word ="<<p<<" length = "<<ab<<std::endl;
}
void myString::countVowels()
{
    std::string str1;

    std::cout<<"enter string for found vowels\n";
    getline(std::cin,str1); 

    for(char &ch:str1)
    {
        ch=toupper(ch);
    }
    int count =0;
    for(int i=0;i<str1.length();i++)
    {
        if(str1[i]=='A' || str1[i] == 'E' || str1[i]=='O'
        || str1[i]=='U' || str1[i]=='I')
        {
            count++;
        }
    }
    std::cout<<"Number Of Vowels = "<<count<<std::endl;
}
void myString::countConsonants()
{
   std::string str1;

    std::cout<<"enter string for found vowels\n";
    getline(std::cin,str1); 

    for(char &ch:str1)
    {
        ch=toupper(ch);
    }
    int count =0;
    for(int i=0;i<str1.length();i++)
    {
        if(!(str1[i]=='A' || str1[i] == 'E' || str1[i]=='O'
        || str1[i]=='U' || str1[i]=='I'))
        {
            if(str1[i]>='A'&& str1[i]<='Z')
            {
                count++;
            }
            
        }
    }
    std::cout<<"Number Of Consonants = "<<count<<std::endl;
}
void myString::subStrSearch()
{
    std::string str1,str2;

    std::cout<<"enter  string \n";
    getline(std::cin,str1);   
    std::cout<<"enter sub string\n";
    getline(std::cin,str2); 

    if(str1.find(str2)!=std::string::npos)
    {
        std::cout<<" availabe : "<<std::endl;
    }
    else
    {
        std::cout<<" Not availabe : "<<std::endl;
    }

    
}
int main()
{
    myString m1;
    //  m1.reversStr();
    //  m1.checkPalindrom();
    //  m1.characterFrequency();
    //  m1.wordCount();
    //  m1.removeSpaces();
    //  m1.duplicateCharcterRemve();
    //  m1.anagram();
    //  m1.UpperToLower();
    //  m1.LowerToUper();
    //  m1.stringCompare();
    //  m1.stringCpy();
    //  m1.stringConconating();
    //  m1.longestWord();
    m1.countVowels();
    m1.countConsonants();
    m1.subStrSearch();
}