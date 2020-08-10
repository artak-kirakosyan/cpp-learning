#include <iostream>
using namespace std;


int main()
{
    int height, width;
    cout << "Enter the height: ";
    cin >> height;
    cout << "Enter the width: ";
    cin >> width;

    if (height <= 0 || width <= 0)
    {
        cout << "Rectangle cant have non positive edges." << endl;
        return 1;
    }
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

