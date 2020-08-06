#include <iostream>
using namespace std;

int main()
{
    int a = 1;
    int b = 2;
    int c = 3;

    // Here, all 3 operators are sequential, so all of them are being evaluated 
    // and then the final result is constructed as follows:
    // a == 1 -> true
    // b == 2 -> true
    // c == 1 -> false
    // true || true && false
    // as the first one is true, true or something else gives us true, so no need
    // to proceed further
    cout << ((a == 1) || (b == 2) && (c == 1)) << endl;
    // This case is different because of additional brackets.
    // a == 1 -> true
    // b == 2 -> true
    // c == 1 -> false
    // (true || true) && false -> true && false -> false
    cout << (((a == 1) || (b == 2)) && (c == 1)) << endl;

}

