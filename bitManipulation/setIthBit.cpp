#include <iostream>
using namespace std;

void setIthBit(int &n, int i)
{
    int mask = (1 << i);
    n = (n | mask);
    cout << n << endl;
}

int main()
{
    int n = 19;
    int i;
    cin >> i;
    setIthBit(n, i);
    return 0;
}