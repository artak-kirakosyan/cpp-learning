#include <iostream>
using namespace std;


int main()
{
    int a = 1;
    cout << a << endl;
    a = a + 1;
    cout << a << endl;
    a += 1;
    cout << a << endl;
    a++;
    cout << a << endl;
    ++a;
    cout << a << endl;

    // print, then increment
    a = 1;
    cout << "a=" << a++ << endl;
    a = 1;
    cout << "a=" << ++a << endl;
    // increment then print
    
    // the increment prefixed has the highest priority here
    // first the value of the a would be incremented
    // a = 1 -> ++a -> a= 2 -> b = a*a = 4
    a = 1;
    int b = ++a * a;
    cout << "b=" << b << endl;
    cout << "a=" << a << endl;

    
    // how about this case?
    // here the same applies, the value of b becomes 4
    // then the value of a gets incremented:
    // a = 1 -> ++a -> a= 2 ->  a++ -> a = 3, b = a*a = 4,
    a = 1;
    b = ++a*a++;
    cout << "b=" << b << endl;
    cout << "a=" << a << endl;
    // This might seem weird but each operator has a priority, 
    // and that is how the compiler decides which one to do first.
    // You can read more about it here: 
    // https://ravesli.com/urok-38-prioritet-operatsij-assotsiativnost/
}
