#include <iostream>
using namespace std;

int main()
{
    const int DAYS_IN_WEEK = 7;

    // This line would generate a compilation error
    //DAYS_IN_WEEK = 1;

    cout << DAYS_IN_WEEK << endl;

    // this line would also generate an error as consts have to be initialized
    // we cannot define and then separately initialize a constant.
    // it should be initialized at the declaration time
    // const int DAYS_IN_YEAR;
}

