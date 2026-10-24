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


/*************************** 06 oct **************************/

refrence vs pointer

refrence:-
    1.  refrence is a constant pointer.
    2.  initialization and decalration at same time
    3.  refrence is seure 

pointer:
    1.  pointer is not always constant , but it can be.
    2.  initialization and decalration at same time not nessasry
    3.  pointer not secure

please make at least 10 pgm.

initilization techniq in Cpp

int a=10;
int b(10);
int c{10};

a==b==c

inheritence: inheritence is a very important feture of oop
it is relationship
a class have ability to derive properties and fetures and charcterstics from other class 
and create new class 

its very useful for resuseability

:- single inheritence, multiple , multileval, hybrid,

inheritance : 
1. it is a relationship
2. no need to create object

composition 
1. it has a relationship
2. need to create object

// inhertance single 5 multiple 5
// one program : class object encapsulation show auto refrence inheritance

/*****************************************************************************************
07 oct 2026
pending in inheritance : public private protected , diamaond problem


/*
inheritance

construtor 
base class construtor
derived class construtor

deconstrutor
derived deconstrutor
base deconstrutor

*/

dma:- dyanmaic memory allocation

malloc and calloc : runtime memory allocation
are functions in  c

c++ :- 
new and delete :- operators 

syntax 

datatype _pointer = new datatype();-->|    0  |
or
datatype _pointer = new datatype(value);---> |   value|

delete syntax :
  
delete pointer name 


malloc/calloc and new

new: - new is a operator
no spefic header required 
new is fast 

malloc/c: is a funtion
cstdlib required
slow 

public private or protected in inheritance.
new and delete 3 array 3
with funtion 3 
//////////////////////////////////////////////////////////////

13 10 26

Base 
{

}
child : public/private/protected 
{

}
1. public :
B
{
//data
};
c:public B
{
//b data(public and protected)
}
D:public c or B
{
    //b and c : if u use c 
    //b data : if u use B
}
private member can access with in class not access derived calss or main.

public: anywhere 

protected : only in inherited class
//////////////////////////////////////////////////////////////////////

14 oct 2026

polymorphism:- compile time and runtime
                1. function overloadimng and operator overloading
                2. virtual funtion

funtion overloading :- define a same name functions , but aruguments nd return type should diffrent 
10 - 10 default argument 

funtion overloading 10
default argument 10
static mebers 10
static funtion 5

//////////////////////////////////////////////////////////////////////

15 :- oct 2026
operator overloading : we perform operation with user define data types

int x,y,z;

z=x+y;

struct A 
{
    int a,b;
};
struct B 
{
    int a,b;
};

A A1;
B b1;

A1.a+b1.a;
A1.b+b1.b;

with operator overloading :  A1+b1;//possible

operator overloading is nothing its techniqe to create a funtions for perform the opertions on userdefine data types.
they cant change basic operations of operator.

not possible operator overloading with .
?; , sizeof(), . .* 

+,-,*, /

///////////////////////////////////////////////////////////////////////
16 oct 2026

copy construtor :  create a object with copy data from source object to new object;
Take care if DMA data members

diffrence b/w shallow copy and deep copy.

shallow copy :- both object data point to same memory
if one object data change so other also change becuase both point to same memory.
its fast becuse no new memory allocation


deep copy :- both object data point to diffrent  memory.
if one object data change so other not change becuase both point to diffrent memory.
its slow because new mwmeory aloocation

improtanint in "rule of 3":

if we define any one of them :
copy constructor
destructor
copy assigment operator 


so we should define all of them.
for safety of sw, prevent to crash

deep copy and shallow copy :
copy assigment operator  : 

copy constructor 5
deep copy 5
shallow 5
opertor overloading 4 + 1 copy assigment operator
///////////////////////////////////////////////////////////////////
17 oct 2026

polymorphishm :- funtion overloading done , opertor overloading done
virtual funtions
//////////////////////////////////////////////////////////////////

18 oct 2026

->  pre increment operator overload
->  post 
->  stack

-> runtime polymorphishm
-> virtual fun
-> virtual class 
///////////////////////////////////////////////////////
24-10-2026

-> pure virtual fun
-> abstrct class
-> pure vs virtual
-> namespace
/////////////////////////////////////////////////////////
25-10-2026
-> friend class and friend funtion.
-> difference between struct and class?
-> c and c++
///////////////////////////////////////////////////////////////////
abstraction A
deconstructor overloading A
inline function B
friend class and friend function B
compile time polymorphism and Runtime polymorphism C
difference between struct and class? C
virtual function from a constructor? D
What are templates in C++? Explain function templates vs class templates. D
What is RAII in C++? Why is it considered a best practice? E
What are lambda expressions in C++? Explain capture clauses.F
What are move semantics and rvalue references in C++11? Why are they important? G
What are smart pointers in C++? Explain unique_ptr, shared_ptr, and weak_ptr. H

STL :- 
vector,  1-2
array 2
string 3
list 4
map 5
set 6
stack 7 
queue 8
deque, 9
unorderd map 10
multiset 11
multimap 12


thred /RTOS 13

SOLID 14/ 15
Design pattern 3 days


c/ C++, data struture with Cpp, SOLID, design pattern multithread 
/////////////////////////////////////////////////////
cpp:- programing easy array a[10];
a.stable_partion(int x %2==0);
print array 35792468

vector and list and map

c++:

class 
object :-
encapsulation done
data hiding  done
DMA : done
inheritence 
polyorphishm :-compile time (funtion overloading, operator )runtime virtual fun and pure 
static member static funtion

application c++
    os(layer)  capi
    elad







