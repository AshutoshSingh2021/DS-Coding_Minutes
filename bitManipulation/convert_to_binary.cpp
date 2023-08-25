#include <iostream>
using namespace std;

int convertToBinary(int n)
{
    int ans = 0;
    int p = 1;
    while (n > 0)
    {
        int last_bit = n & 1;
        ans += p * last_bit;

        p = p * 10;
        n = n >> 1;
    }
    return ans >> 1;
}

int main()
{
    int n;
    cin >> n;

    string str = to_string(convertToBinary(n));

    cout << str << endl;

    return 0;
}