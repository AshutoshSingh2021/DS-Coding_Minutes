#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // vector<int> arr = {1, 2, 10, 12, 15};

    // Fill Constructor
    vector<int> arr(10, 0);
    vector<int> visited(100, 0);

    // pop_back method
    arr.pop_back();
    // push_back method O(1)
    arr.push_back(16);

    // Print all elements
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

    /*
        // Size of the vector (No of elements)
        cout << arr.size() << endl;

        // Capacity of the vector
        cout << arr.capacity() << endl;
    */

    return 0;
}