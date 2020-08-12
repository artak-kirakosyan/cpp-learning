#include <iostream>
using namespace std;

int main()
{
    cout << "Garbage values" << endl;
    int array[3];
    cout << array[0] << endl;  
    cout << array[1] << endl;  
    cout << array[2] << endl;  

    cout << "All zeros" << endl;
    int array_2[3] = {0};
    cout << array_2[0] << endl;  
    cout << array_2[1] << endl;  
    cout << array_2[2] << endl;  

    cout << "Init after declaration" << endl;
    int array_3[3];
    array_3[0] = 2;
    array_3[2] = 12;
    array_3[1] = 32;

    cout << array_3[0] << endl;  
    cout << array_3[1] << endl;  
    cout << array_3[2] << endl;  
    
    cout << "Trying to access invalid indexes" << endl;
    cout << array[10] << endl;
    cout << array_2[10] << endl;
    cout << array_3[10] << endl;

}
