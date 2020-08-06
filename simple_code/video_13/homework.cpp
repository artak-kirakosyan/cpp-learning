#include <iostream>
using namespace std;


int main()
{
    int a, b;
    char operation;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter operation(+-*/): ";
    cin >> operation;
    cout << "Enter second number: ";
    cin >> b;
    
    switch (operation)
    {
        case '+':
            cout << "Result=" << a + b << endl;
            break;
        case '-':
            cout << "Result=" << a - b << endl;
            break;
        case '*':
            cout << "Result=" << a * b << endl;
            break;
        case '/':
            cout << "Result=" << a / b << endl;
            break;
        default:
            cout << "Invalid operation" << endl;
    }
}
