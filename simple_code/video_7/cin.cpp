#include <iostream>
using namespace std;

int main()
{
    int v1, v2;
    cout << "Enter first integer: ";
    cin >> v1;
    cout << "Enter second integer: ";
    cin >> v2;
    cout << "First: " << v1 << endl;
    cout << "Second: " << v2 << endl;
    cout << "Sum: " << v1 + v2 << endl;
    cout << "Product: " << v1 * v2 << endl;
   
    // Not very user friendly, but possible
    cout << "Enter 2 numbers: ";
    cin >> v1 >> v2;
    cout << "First: " << v1 << endl;
    cout << "Second: " << v2 << endl;
    cout << "Sum: " << v1 + v2 << endl;
    cout << "Product: " << v1 * v2 << endl;
    
}
