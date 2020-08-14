#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    srand(time(NULL));
    const int ROWS = 5;
    const int COLS = 8;
    int arr[ROWS][COLS];

    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            arr[i][j] = rand() % 10;
        }
    }

    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

}

