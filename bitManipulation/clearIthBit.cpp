#include <iostream>
using namespace std;

void clearIthBit(int &n, int i)
{
    int mask = ~(1 << i);
    n = (n & mask);
    cout << n << endl;
}

int main()
{
    int n = 13;
    int i;
    cin >> i;
    clearIthBit(n, i);
    return 0;
}