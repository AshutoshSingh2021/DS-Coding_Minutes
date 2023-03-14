#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // vector<int> arr = {1, 3, 5, 6, 7};

    // Fill Constructor
    vector<int> arr(10, 7);
    vector<int> visited(100, 0);

    // pop_back
    arr.pop_back();

    // push_back
    arr.push_back(15);

    // Print all elements
    for (int x : arr)
    {
        cout << x << " ";
    }
    /* for (int i = 0; i < arr.size(); i++)
     {
         cout << arr[i] << endl;
     }
     */

    // // size of the vector(No. of elements)
    // cout << arr.size() << endl;

    // // Capacity of the vector
    // cout << arr.capacity() << endl;

    return 0;
}