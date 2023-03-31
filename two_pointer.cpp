#include <bits/stdc++.h>
using namespace std;

// Function to find a pair in an array with a given sum using the Two-pointer technique
void findPair(int arr[], int n, int target)
{
    // sort the array in ascending order
    sort(arr, arr + n);

    // maintain two indices pointing to endpoints of the array
    int low = 0;
    int high = n - 1;

    // reduce the search space `arr[low…high]` at each iteration of the loop

    // loop till low is less than high
    while (low < high)
    {
        // sum found
        if (arr[low] + arr[high] == target)
        {
            cout << "Pair found (" << arr[low] << ", " << arr[high] << ")" << endl;
            return;
        }

        // increment `low` index if the total is less than the desired sum;
        // decrement `high` index if the total is more than the desired sum
        (arr[low] + arr[high] < target) ? low++: high--;
    }

    // No pair with the given sum exists in the array
    cout << "Pair not found" << endl;
}

int main()
{
    int arr[] = { 8, 7, 2, 5, 3, 1 };
    int target = 10;

    int n = sizeof(arr)/sizeof(arr[0]);

    findPair(arr, n, target);

    return 0;
}