#include <iostream>
using namespace std;


int main()
{
    int symbol_count;
    char symbol;
    bool is_vertical;
    
    cout << "Enter the number of symbols you want: ";
    cin >> symbol_count;

    cout << "Enter the symbol: ";
    cin >> symbol;

    cout << "Enter line type(1 for vertical, 0 for horizontal): ";
    cin >> is_vertical;

    int i = 0;
    if (symbol_count < 0)
    {
        cout << "Are you crazy? How can I print negative number of symbols?" << endl;
        return 1;
    }

    while (i < symbol_count)
    {
        cout << symbol;
        if (is_vertical)
        {
            cout << endl;
        }
        i ++;
    }
    cout << endl;
}
