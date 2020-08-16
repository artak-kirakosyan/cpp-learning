#include <iostream>
using namespace std;

int Sum(int a, int b)
{
    cout << "All ints" << endl;
    return a + b;
}

int Sum(int a, int b, int c)
{
    cout << "3 args" << endl;
    return a + b + c;
}

double Sum(double a, double b)
{
    cout << "double" << endl;
    return a + b;
}

int main()
{
    int a =1, b = 2;
    double c = 1.3, d = 3.5;
    Sum(a, c);
    Sum(a, c, b);
}
