#include <iostream>
using namespace std;
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

// Prefix Sum Approach O(N^2)
int largestSumSubarray1(int arr[], int n)
{

    int prefix[n] = {0};
    prefix[0] = arr[0];

    for (int i = 1; i < n; i++)
    {
        prefix[i] = prefix[i - 1] + arr[i];
    }

    int largest_sum = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int subarraySum = i > 0 ? prefix[j] - prefix[i - 1] : prefix[j];

            // check is subarraySum > largest_sum
            largest_sum = max(largest_sum, subarraySum);
        }
    }
    return largest_sum;
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(int);

    largestSumSubarray(arr, n);
    cout << largestSumSubarray1(arr, n) << endl;

    return 0;
}