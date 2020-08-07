#include <iostream>
using namespace std;


int main()
{
    int sum = 0;
    int lower, upper;
    cout << "Enter the lower bound: ";
    cin >> lower;
    cout << "Enter the upper bound: ";
    cin >> upper;
    if (lower > upper)
    {
        cout << "Lower bound is bigger than upper. Sum is obviously " << sum << endl;
        return 1;
    }
    if (lower < 0)
    {
        cout << "Parity is not defined for negative numbers!" << endl;
        return 1;
    }
    if (lower % 2 == 0)
    {
        lower++;
    }
    while (lower <= upper)
    {
        sum += lower;
        lower += 2;
    }
    cout << "Sum of all odd numbers within specified range is " << sum << endl;
}
