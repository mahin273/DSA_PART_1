#include <bits/stdc++.h>
using namespace std;

/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

class Solution
{
public:
    void merge(int arr[], int l, int m, int r)
    {
        int n1 = m - l + 1;
        int n2 = r - m;
        int L[n1], M[n2]; // Temporary arrays to hold the divided subarrays

        // Copy elements from the original array to the temporary arrays
        for (int i = 0; i < n1; i++)
            L[i] = arr[l + i];
        for (int j = 0; j < n2; j++)
            M[j] = arr[m + 1 + j];

        // Merge the temporary arrays back into the original array
        int i = 0, j = 0, k = l;
        while (i < n1 && j < n2)
        {
            if (L[i] <= M[j])
            {
                arr[k] = L[i];
                i++;
            }
            else
            {
                arr[k] = M[j];
                j++;
            }
            k++;
        }

        // Copy the remaining elements of L or M, if any
        while (i < n1)
        {
            arr[k] = L[i];
            i++;
            k++;
        }
        while (j < n2)
        {
            arr[k] = M[j];
            j++;
            k++;
        }
    }

    void mergeSort(int arr[], int l, int r)
    {
        if (l < r)
        {
            int m = l + (r - l) / 2; // Calculate the middle index

            // Recursively sort the left and right subarrays
            mergeSort(arr, l, m);
            mergeSort(arr, m + 1, r);

            // Merge the sorted subarrays
            merge(arr, l, m, r);
        }
    }
};

int main()
{
    int n = 5; // Set the value of n to 5
    int arr[] = {4, 1, 3, 9, 7}; // Update the array with the given values

    Solution ob;
    ob.mergeSort(arr, 0, n - 1);
    printArray(arr, n);

    return 0;
}