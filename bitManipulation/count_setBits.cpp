#include <iostream>
using namespace std;

int count_setBits(int n)
{
    int cnt = 0;
    while (n > 0)
    {
        int last_bit = n & 1;
        cnt += last_bit;
        n = n >> 1;
    }
    return cnt;
}

int count_setBits_hack(int n)
{
    int cnt = 0;
    while (n > 0)
    {
        n = n & (n - 1);
        cnt++;
    }
    return cnt;
}

int main()
{
    int n;
    cin >> n;

    cout << count_setBits(n) << endl;
    cout << count_setBits_hack(n) << endl;
    return 0;
}