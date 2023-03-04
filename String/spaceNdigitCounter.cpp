#include <iostream>
using namespace std;
int main()
{
    // store and then count
    // read one by one and then count

    char ch;
    ch = cin.get();

    // count
    int alpha = 0;
    int space = 0;
    int digit = 0;
    int specialCh = 0;

    while (ch != '\n')
    {
        if (ch >= '0' and ch <= '9')
        {
            digit++;
        }
        else if ((ch >= 'a' and ch <= 'z') or (ch >= 'A' and ch <= 'Z'))
        {
            alpha++;
        }
        else if (ch == ' ' or ch == '\t')
        {
            space++;
        }
        else
        {
            specialCh++;
        }
        ch = cin.get();
    }

    cout << "Total Alphabets: " << alpha << endl;
    cout << "Total Digits: " << digit << endl;
    cout << "Total Spaces: " << space << endl;
    cout << "Total Special Characters: " << specialCh << endl;

    return 0;
}