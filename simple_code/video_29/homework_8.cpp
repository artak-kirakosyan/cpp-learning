#include <iostream>
#include <ctime>
using namespace std;


int main()
{
    srand(time(NULL));
    const int SIZE = 10;
    int arr[SIZE];
    int modulo = 20;
    int curr_ind = 0;
    int new_elem;
    bool found = false;
    while (curr_ind < SIZE)
    {
        new_elem = rand() % modulo;
        found = false;
        for ( int i = 0; i < curr_ind; i++)
        {
            if (arr[i] == new_elem)
            {
                found = true;
                break;
            }
        }
        if (!found)
        {
            found = false;
            arr[curr_ind] = new_elem;
            curr_ind++;

        }

    }
    for (int i = 0; i < SIZE; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    // Find smallest element
    int min_elem = arr[0];
    for (int i = 1; i < SIZE; i++)
    {
        if (arr[i] < min_elem)
        {
            min_elem = arr[i];
        }
    }
    cout << "Smallest is " << min_elem << endl;
}
