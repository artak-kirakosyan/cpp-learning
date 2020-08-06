#include <iostream>
using namespace std;


int main()
{
    cout << "Enter an integer: ";
    int num;
    cin >> num;
    if (num < 0)
    {
        cout << "Number less than 0, parity not defined for negative numbers" << endl;
    }
    else if (num % 2 == 0)
    {
        cout << "Even number!" << endl;
    }
    else
    {
        cout << "Odd number!" << endl;
    }
}
