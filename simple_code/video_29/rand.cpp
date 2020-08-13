#include <iostream>
#include <ctime>
using namespace std;

int main()
{

    srand(time(NULL));
    int a = rand();
    cout << a << endl;

    const int SIZE = 10;
    int modulo = 20;
    int arr[SIZE];
    for (int i = 0; i < SIZE; i++)
    {
        arr[i] = rand() % modulo;
    }

    for (int i = 0; i < SIZE; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

}

