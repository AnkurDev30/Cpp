a)
#include <iostream>
using namespace std;
int main()
{
    int i = 5;
    int &j = i;
    int p = 10;
    j = p;
    cout << i << endl << j << endl;
    p = 20;
    cout << i << endl << j << endl;
    return 0;
}


(b)
#include <iostream>
using namespace std;
int main()
{
    char *p = "hello";
    char *q = p;
    cout << p << endl << q << endl;
    q = "Good Bye";
    cout << p << endl << q << endl;
    return 0;
}


(c)
#include <iostream>
using namespace std;
int i = 20;
int main()
{
    int i = 5;
    cout << i << endl << ::i << endl;
    return 0;
}

#include <iostream>
using namespace std;
int i = 20;
int main()
{
    int i = 5;
    cout << i << endl << ::i << endl;
    {
        int i = 10;
        cout << i << endl << ::i << endl;
    }
    return 0;
}


(e)
#include <iostream>
using namespace std;
const int i = 10;
int main()
{
    const int i = 20;
    cout << i << endl << ::i << endl;
    cout << &i << endl << &::i << endl;
    return 0;
}


(f)
#include <iostream>
using namespace std;
int main()
{
    int i;
    cout << sizeof(i) << endl << sizeof('i') << endl;
    return 0;
}

#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i <= 10; i++)
        cout << i << endl;
    cout << i;
    return 0;
}

(b)
#include <iostream>
using namespace std;
int main()
{
    int i = 5;
    int &j = i;
    int &k = j;
    int &l = i;
    cout << i << j << k << l;
    return 0;
}


(c)
#include <iostream>
using namespace std;
int main()
{
    int a = 10, b = 20;
    long int c;
    c = a * long int (b);
    cout << c;
    return 0;
}


(d)
#include <iostream>
using namespace std;
const int i = 10;
int main()
{
    const int i = 20;
    cout << &i << endl << &::i;
    return 0;
}


(e)
#include <iostream>
using namespace std;
int main()
{
    char *p = "Hello";
    p = "Hi";
    *p = 'G';
    cout << p;
    return 0;
}

(f)
#include <iostream>
using namespace std;
int main()
{
    enum result { first, second, third };
    result a = first;
    int b = a;
    result c = 1;
    result d = result (1);
    return 0;
}


(g)
#include <iostream>
using namespace std;
int a = 10;
int main()
{
    int a = 20;
    {
        int a = 30;
        cout << a << ::a << :::a;
    }
    return 0;
}


(h)
#include <iostream>
using namespace std;
struct emp
{
    char name[20];
    int age;
    float sal;
};
emp e1 = { "Amol", 21, 2345.00 };
emp e2 = { "Ajay", 19, 2300.00 };
emp &fun();
int main()
{
    fun() = e2;
    cout << endl << e1.name << endl << e1.age
         << endl << e1.sal;
    return 0;
}
emp &fun()
{
    emp e3 = { "Aditya", 21, 3300.75 };
    return e3;
}


(i)
#include <iostream>
using namespace std;
int main()
{
    char t[] = "String functions are simple";
    int l = strlen(t);
    cout << l;
    return 0;
}