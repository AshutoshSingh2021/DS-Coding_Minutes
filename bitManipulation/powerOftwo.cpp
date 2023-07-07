#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if ((n & (n - 1)) == 0)
    {
        cout << "The number is power of two!";
    }
    else
    {
        cout << "The number is not a power of two!";
    }

    return 0;
}