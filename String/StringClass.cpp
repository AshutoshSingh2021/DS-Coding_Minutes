#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // char s[1000] = {'1', 'a', 'b', 'c', '\0'};

    string s; // s("Hello World"); // Dynamic Array

    // for (char ch : s)
    // {
    //     cout << ch << ",";
    // }

    // getline(cin, s, '.');
    // cout << s << endl;

    int n = 5;
    vector<string> sarr;
    string temp;

    while (n--)
    {
        getline(cin, temp);
        sarr.push_back(temp);
    }

    for (string x : sarr)
    {
        cout << x << ", " << endl;
    }

    return 0;
}