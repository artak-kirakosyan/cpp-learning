#include <iostream>
using namespace std;

int a = 0;
void Foo()
{
    cout << ++a << endl;
    Foo();
}


int main()
{
    Foo();
}
