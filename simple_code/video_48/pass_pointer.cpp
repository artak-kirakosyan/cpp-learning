#include <iostream>
using namespace std;

void Foo(int *pa)
{
    *pa += 1;
}

int main()
{
    int a = 2;
    cout << a << endl;
    // We have to pass the address of the integer, not the integer itself
    Foo(&a);
    cout << a << endl;
}
