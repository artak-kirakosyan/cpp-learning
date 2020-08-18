#include <iostream>
using namespace std;

void Foo(int * pa, int * pb, int * pc)
{
    *pa = 123;
    *pb += 1;
    *pc = -20;
}

int main()
{

    int a = 0, b = 1, c = 2;
    cout << "a= " << a << endl;
    cout << "b= " << b << endl;
    cout << "c= " << c << endl;
    Foo(&a, &b, &c);

    cout << "a= " << a << endl;
    cout << "b= " << b << endl;
    cout << "c= " << c << endl;

}
