/*
🧱 3. User Login System

Create a login function.

👉 Requirements:

Username required
Role should have default value ("user")
Print different messages based on role
(admin / user / guest)
*/
#include<iostream>
class UserLogin
{
    public:
        void Fun(std::string username,std::string uName ="user")
        {
            
            std::cout<<"welcome "<<uName<<" "<<username<<std::endl;
        }
};
int main()
{
    UserLogin obj;
    std::string username;
    int opt;

    std::cout<<"enter user name"<<std::endl;
    std::cin>>username;

    std::cout<<"enter user type\n 1 for admin\n 2 for guest\n 3 for user"<<std::endl;
    std::cin>>opt;

    if(opt ==1)
    {
        obj.Fun(username,"admin");
    }

    else if(opt == 2)
    {
        obj.Fun(username,"guest");
    }
    else
    {
        obj.Fun(username);
    }
    

}