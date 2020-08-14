#include <iostream>
using namespace std;

int main()
{
    const int ROW = 3;
    const int COL = 4;

    int arr[ROW][COL];
    // zero initialization
    int arr_2[ROW][COL] = {};
    arr[1][2] = 2;
    cout << arr[1][2] << endl;
    cout << sizeof(arr) << endl;
    cout << sizeof(arr[0]) << endl;
    
    // you have to specify the size 
    // we can omit the number of rows, but we have to show the number of columns
    // we can mot some of the elements, but if we add too many elements, it will 
    // give compile error
    int arr_3[ROW][COL] = 
    {
        {1,2,3,4}, 
        {5,3,1}
    };

}
