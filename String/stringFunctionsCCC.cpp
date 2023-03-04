#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char a[1000] = "Apple";
    char b[1000];

    // calculate length
    cout << strlen(a) << endl;

    // string copy
    strcpy(b, a);
    cout << b << endl;

    // compare
    cout << strcmp(a, b) << endl;

    char web[100] = "www.";
    char domain[] = "mylomeets.com";

    strcpy(b, strcat(web, domain));
    cout << b << endl;

    cout << strcmp(b, a) << endl;
    return 0;
}