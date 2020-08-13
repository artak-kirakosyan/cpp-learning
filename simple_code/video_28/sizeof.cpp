#include <iostream>
using namespace std;

int main()
{
    cout << "int: " << sizeof(int) << endl;
    cout << "float: " << sizeof(float) << endl;
    cout << "double: " << sizeof(double) << endl;


    const int SIZE = 10;
    int arr[SIZE];

    cout << "array with " << SIZE << "integers: " << sizeof(arr) << endl;
    
    const int SIZE_FROM_SIZEOF = sizeof(arr) / sizeof(int);
    cout << "size of the array is " << SIZE_FROM_SIZEOF << endl;
}
