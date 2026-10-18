/*
implement a string class containing the following funtions:
-Overload + operator funtion to carry out the concatennation
of strings.

-Overlaod = operator funtion to carry out string copy.

-overload +=  for concatenation and copy

- funtion to display string length and size of string
-funtion toLower and toUpper()
*/

#include<iostream>
#include<string>
class strClass 
{
    private:
        std::string strMy;
    public:
        strClass()=default;
        strClass(std::string strM1)
        {
            strMy = strM1;
        }
        //+ overload
        strClass operator +(strClass &obj)
        {
           strClass temp ;
           temp.strMy = strMy+obj.strMy;
           return temp;
        }
        //+= overload
        strClass& operator +=(strClass &obj)
        {
           //strClass temp ;
           strMy += obj.strMy;
           return *this;
        }
        void displayLength(std::string str=" ")
        {
            if(str == " ")
            {
                str = strMy;
            }
            int l = str.length();
            std::cout<<"length of string : "<<l<<std::endl;
        }
        void displaySize(std::string str=" ")
        {
            if(str == " ")
            {
                str = strMy;
            }
            int s = str.size();
            std::cout<<"size of string : "<<s<<std::endl;
        }
        void strDisplay()
        {
            std::cout<<"display str : "<<strMy<<std::endl;
        }
};
int main()
{
    std::string data1,data2;
    std::cout<<"enter first string \n";
    std::cin>>data1;
    strClass str1(data1);
    std::cout<<"enter second string \n";
    std::cin>>data2; 
    strClass str2(data2);

    strClass str3;

    str3 = str1+str2;

    str3.strDisplay();

    str3 +=str2;
    str3.strDisplay();

    str3.displayLength();
    str3.displaySize();
}