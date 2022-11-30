#include <iostream>
using namespace std;

void printSubarrays(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            for (int k = i; k <= j; k++)
            {
                cout << arr[k] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
}

// Print the sum of each subarray & find out the largest sum

void largestSumSubarray(int arr[], int n)
{
    int largest_sum = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int subarraySum = 0;

            for (int k = i; k <= j; k++)
            {
                subarraySum += arr[k];
                // if (subarraySum > largest_sum)
                // {
                //     largest_sum = subarraySum;
                // }
            }
            largest_sum = max(largest_sum, subarraySum);
            // subarraySum = 0
        }
    }
    cout << largest_sum << endl;
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(int);

    printSubarrays(arr, n);
    largestSumSubarray(arr, n);

    return 0;
}