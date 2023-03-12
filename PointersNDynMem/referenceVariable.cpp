#include <iostream>
using namespace std;
int main()
{
    // &(Reference Variables) creates a nickname for the same object
    // reference variables must be initialised

    int x = 10;
    int &y = x;

    y++;
    x++;

    cout << x << endl;
    cout << y << endl;

    return 0;
}