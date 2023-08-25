#include <iostream>
using namespace std;
string spell[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

void printSpell(int n)
{
    if (n == 0)
    {
        return;
    }
    int ld = n % 10;
    printSpell(n / 10);
    cout << spell[ld] << " ";
}

int main()
{
    int n;
    cin >> n;
    printSpell(n);

    return 0;
}