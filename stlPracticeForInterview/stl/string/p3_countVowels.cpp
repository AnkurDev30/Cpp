#include<iostream>
#include<string>
class IP 
{
    public:
        std::string input;
        IP()
        {
            std::cout<<"Give Name\n";
            getline(std::cin,input);
        }
        void countAndDisplayVowels()
        {
            int count = 0;
            for(char &ch:input)
            {
                ch = toupper(ch);
            }
            for(int i =0;i<input.length();i++)
            {
                if(input[i]>='A'&&input[i]<='Z')
                {
                    if(input[i] == 'A'
                    ||input[i]  == 'E'
                    ||input[i]  == 'I'
                    ||input[i]  == 'O'
                    ||input[i]  == 'U')
                    {
                        count++;
                    }
                }
            }
            std::cout<<"Number of vowels = "<<count<<std::endl;
        }
};
int main()
{
    IP i;
    i.countAndDisplayVowels();
}