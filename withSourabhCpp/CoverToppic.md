//c with class 10 days.
//opps:reuseablity + security

//modern c++, cpp develper


// what are diffrence b/w c and cpp

c:- c is not secure.
    c follow top down down approch : soln1 + soln +sol 3  = sw
    c is combination of function, its function oriented langauage.
c++: cpp is secure,
    cpp follow bottom up approch, big pblm = b1+ b2+b3
    c is combination of object , its object oriented language.


//c++ ?
/*
    c++ is nothing but its object oriented, high level, 
    compiler based programing language

    1. why obect orient ? big program divided into objects.
    2. high level why? user can write s/w and compiler
     and computer can understand.
     compilation process:-same as c, preproceessor 
     translator assmenbler linker(namemangling)
*/


//cpp :

1) operating system : linux,windows
2) database : msSql,SQL, Oracle
3) editor: notepade and notepade++
4) compiler: tasking 
5) device driver : epsom printer 
6) protacal: http,https, FTP
7) mobile games and vedio games 
8) comercial applicatoions: bank shoping pharmacy lab 


c: c with class.
c++: - c (all funtionality )+ extra funtionality
extension of .

c++ : fetures
1. class
2. object
3. encapsulation
4. inheritance
5. data abstarction
6. polymophishm
7. data hiding
8. message communications

c++ 4 pillers
* encapsulation
* inheritance
* data abstarction
* polymophishm

class : class is nothing but extension of c struture 

c strture:
strutcure is nothing but user define data type, which can able to store diffrent data types.

c struture
struct A
{
    int a;
    char b;
    int *p;
    float d[10];

    void fun();//can not define
}

class is nothing but combination of diffrent data type 
and data members funtions.

class is blue print : when we define a class no memory alloacted 

by default class is private:

when we define a object(class variable) then memory allocated.

access specifier: public / private/ protected.



private member can access only with in class.
for private members no need to take object inside of class


onject : object is instance of class, logical unit 
            when we define class memory allocated




control statement :- they can able to contro program

                            control statement
                                    |
                           --------------------
                           |                   |
                        conditional          unconditional
                           |                        |
                     |---------------|              |  return;
               ittreative       no-itterative       |  goto
                for                 if              |  continue
                while               elese if        |  exit
                do while            switch



1.(7)  data hiding
hide the data(data members + member funtions ) from end user.
it will achive by access specifier (private , public );

class functions or variable we cna define in 2 ways ; inside of class and outside of class


if function is inside of class so compiler treated its inline funtion
and if funtion is big so it will not useful

function prototype:
funtion calling 
function defination

void sk(int a);//function prototype
inline void funq();
int main()
{
    //
    //
    sk(5);//function calling
    //
    //
    std::cout<<hello;//funq();//step 3
    std::cout<<hello;//funq();//step 3
    std::cout<<hello;//funq();//step 3
}
inline void funq()
{
    std::cout<<hello;
}

void sk(int a)//function defination
{
    std::cout<<a;
}

class Ab
{
    public:
        void fun()  //inside of class, 
        {
            std::cout<<"hello"<<std::endl;
        }
        void fun2();
};
void Ab::fun2():- outside of class
{
    std::cout<<"hi"<<std::endl;
}


/*
iostream:-istream and ostream

istream: cin>>

ostream : cout<<

stream : flow of charcter

*/

encapsulation : encapsultion is one piller of oop
encapsulation is nothing binding the data member and 
member functions in a single unit. 

composition: when we make a object from other class and use that properties 
its call composition.
in composition size of object will increase,  
it will take memory also from other class.

this pointer :- 
1. this pointer belongs to object.
2. each object have one hidden pointer its call this pointer 
3. this keyword use for it 
4. it will provide the current object address 
5. its very useful for global and local variable
6. its very useful for method/function chain mechanishm 

constructor: 
construtor is nothing but a special function
which is call when we create object.
constructor name should be same as class name
no return type 
constructor call only once when object create 
constructor 3 type: default, parmeter , copy
#copy construtor :- use cases :rule of 3, rule of 5, deep copy shallow copy

use case : initialization of data
read value


desconstrutor : deconstructor call when object destroy
no prameter no return type
name should be same as class start with tild symbole '~'

release memory, resource

construtor vs fun

1. when we create object constructor call automatically.
2. construtor call one  time only when object create.
3. construtor is a special funtion , its have no return type
4. construtor name should be same as class 

1. when we call funtion that time it will call no automatically calling.
2. funtion can call multiple times
3. funtion have return type
4. funtion can have any name, as per identifier name.


construtor vs deconstrutor 

1. when object create construtor call
2. name same a class.
3. can pass arguments
4. its have 3 types :- default parameterzied and copy

1. when object destroy de-constructor call
2. name same as class with tild~
3. not pass arguments
4. no types


/-------------------

auto : it can automatically determin data type

auto a= 10;//its integer
auto b=10.5// float
auto name="sk"//string

int x=10;
auto a=10;

if(a==x)
{
    std::cout<<true;
}

* must be initilize 
auto x;

std::cout<<x;//compiler error

auto x=40;
std::cout<<x;//compiler no error

iterators --> stl
range base loop--> done p18.pp


//refrence 
//refrence is nothing but its constant pointer
// it will provide alias name of variable.
// it will not create copy variable
// initaization and decalartion should be same time
// again initilization not posiible
// datatype_name& variable_name = initilize with other variable.

5 oct 2026
auto, bool, string, range base loop, refrence
2       2    5      3                   5
