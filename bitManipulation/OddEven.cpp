#include <iostream>
using namespace std;
int main()
{
    int x;
    cin >> x;

    if (x & 1)
    {
        cout << "Odd" << endl;
    }
    else
    {
        cout << "Even" << endl;
    }

    return 0;
}