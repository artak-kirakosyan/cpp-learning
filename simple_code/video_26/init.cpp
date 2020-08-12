#include <iostream>
using namespace std;

int main()
{
    int array[3] = {1, 2, 3};
    int array_2[] = {1, 2, 3};
    // This also works
    int array_3[]{1,2,3,4};

    // Zero initialization
    int array_4[4]{};
    int array_5[3] = {};
}
