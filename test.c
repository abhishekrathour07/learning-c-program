// C implementation of the above approach
#include <stdio.h>
#include <limits.h>

int max(int a, int b)
{
    int max = a;
    if (max < b)
        max = b;
    return max;
}

int min(int a, int b)
{
    int min = a;
    if (min > b)
        min = b;
    return min;
}

// Function to find the minimum element
int getMin(int arr[], int n, int k, int y)
{
    int res = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % k == 0 && arr[i] %y ==0)
            res = min(res, arr[i]);
    }
    return res;
}

// Function to find the maximum element
int getMax(int arr[], int n, int k)
{
    int res = INT_MIN;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] % k == 0)
            res = max(res, arr[i]);
    }
    return res;
}

// Driver code
int main()
{
    int arr[] = {5, 6, 21, 51, 42,84};
    int k = 3;
    int y =7;
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Minimum element of array which is divisible by k: %d\n", getMin(arr, n, k, y));
    printf("Maximum element of array which is divisible by k: %d\n", getMax(arr, n, k));

    return 0;
}
