#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char a[] = "abcde"; // {'a','b','c','d','e','f', '\0'};
    cout << a << endl;

    char b[100];
    cin >> b;
    cout << b << endl;

    cout << strlen(a) << endl; // number of characters visible
    cout << sizeof(a) << endl; // total number of characters including the null character
    return 0;
}