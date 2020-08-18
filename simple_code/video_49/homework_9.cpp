#include <iostream>
using namespace std;

int swap(int * a, int * b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int swap_no_tmp(int * a, int * b)
{
    *a += *b;
    *b = *a - *b;
    *a = *a - *b;
}

int main()
{
    int a = -1, b = 10;
    cout << "a = " << a << ", b = " << b << endl;
    swap(&a, &b);
    cout << "a = " << a << ", b = " << b << endl;
    swap_no_tmp(&a, &b);
    cout << "a = " << a << ", b = " << b << endl;
}
