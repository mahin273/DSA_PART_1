
// Find Minimum in Rotated Sorted Array 
// You are given a sorted array that has been rotated by an unknown number of times. 
// Write a function to find the minimum element in the array. 

#include <iostream>
using namespace std;

int findMin(int* nums, int numsSize) {
    int left = 0;
    int right = numsSize - 1;

    while (left < right) {
        int mid = left + (right - left) / 2;

        if (nums[mid] < nums[right])
            right = mid;
        else
            left = mid + 1;
    }

    return nums[left];
}

int main() {
    int nums[] = {4, 5, 6, 7, 0, 1, 2};
    int numsSize = sizeof(nums) / sizeof(nums[0]);

    int result = findMin(nums, numsSize);
    cout << "Minimum element: " << result << endl;

    return 0;
}