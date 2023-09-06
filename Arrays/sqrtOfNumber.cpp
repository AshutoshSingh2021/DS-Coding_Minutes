#include <bits/stdc++.h>
using namespace std;

long long int searchRoot(int n)
{
    int start = 0;
    int end = n;
    long long int ans = -1;
    long long int mid;

    while (start <= end)
    {
        mid = start + (end - start) / 2;
        long long int square = mid * mid;
        if (square == n)
        {
            return mid;
        }
        if (square < n)
        {
            ans = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return ans;
}

double morePrecision(int n, int precision, int sol)
{
    double factor = 1;
    double ans = sol;

    for (int i = 0; i < precision; i++)
    {
        factor = factor / 10;
        for (double j = ans; j * j < n; j = j + factor)
        {
            ans = j;
        }
    }

    return ans;
}

int main()
{
    int n;
    cout << "Enter the number: " << endl;
    cin >> n;

    int sol = searchRoot(n);
    cout << "Answer is: " << morePrecision(n, 4, sol);

    return 0;
}