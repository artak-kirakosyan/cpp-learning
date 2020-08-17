#include <iostream>
using namespace std;

template <typename T>
T Sum(T a, T b)
{
    return a + b;
}

template <typename T1, typename T2>
T1 Sum_mix(T1 a, T2 b)
{
    cout << "T1 size: " << sizeof(T1) << endl;
    cout << "T2 size: " << sizeof(T2) << endl;
    return a + b;
}



int main()
{
    cout << Sum(5, 10) << endl;
    cout << Sum(5.1, 10.4) << endl;
    // Notice that the result of these 2 will not be the same as in first case
    // we will convert everything to int and lose some accuracy, in second case
    // we will convert everything to  double.
    cout << Sum_mix(5, 10.2) << endl;
    cout << Sum_mix(10.2, 5) << endl;

}
