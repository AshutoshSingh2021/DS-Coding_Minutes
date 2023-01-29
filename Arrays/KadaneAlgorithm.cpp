#include <iostream>
using namespace std;

// Subarray sum Kadane's Algorithm (linear time complexity)

/// @brief
/// @param arr
/// @param n
/// @return
int largestSumSubarray(int arr[], int n)
{
    int currSum = 0;
    int largest = 0;

    for (int i = 0; i < n; i++)
    {
        currSum = currSum + arr[i];
        if (currSum < 0)
        {
            currSum = 0;
        }
        largest = max(largest, currSum);
    }
    return largest;
}

int main()
{
    int arr[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
    int n = sizeof(arr) / sizeof(int);

    cout << largestSumSubarray(arr, n) << endl;

    return 0;
}