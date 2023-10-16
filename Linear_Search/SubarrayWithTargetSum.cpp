#include <iostream>
using namespace std;

void findSubarrayWithTargetSum(int arr[], int n, int targetSum) {
    int start = 0, end = 0;
    int currentSum = arr[0];
    
    while (start < n && end < n) {
        if (currentSum == targetSum) {
            cout << "Subarray with target sum found from index " << start << " to " << end << endl;
            return;
        }
        if (currentSum < targetSum) {
            end++;
            currentSum += arr[end];
        } else {
            currentSum -= arr[start];
            start++;
        }
    }
    
    cout << "Subarray with target sum not found." << endl;
}

int main() {
    int arr[] = {1, 4, 2, 5, 7, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int targetSum = 9;
    
    findSubarrayWithTargetSum(arr, n, targetSum);
    
    return 0;
}