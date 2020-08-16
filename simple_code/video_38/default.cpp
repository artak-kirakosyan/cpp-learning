#include <iostream>
using namespace std;

void foo(int a = 5, int b = 3)
{
    cout << "a=" << a << ", b=" << b << endl;
}


int main()
{
    foo(3);
    foo();
}
