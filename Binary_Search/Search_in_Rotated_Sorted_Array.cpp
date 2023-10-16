// Search in Rotated Sorted Array 
// You are given a sorted array that has been rotated by an unknown number of times. Write a function to determine if a target element is present in the array. 
//If it is, return its index, otherwise return -1. 
#include <iostream>
using namespace std;

int search(int* nums, int numsSize, int target) {
    int left = 0;
    int right = numsSize - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (nums[mid] == target)
            return mid;

        if (nums[left] <= nums[mid]) {
            if (target >= nums[left] && target < nums[mid])
                right = mid - 1;
            else
                left = mid + 1;
        } else {
            if (target > nums[mid] && target <= nums[right])
                left = mid + 1;
            else
                right = mid - 1;
        }
    }

    return -1;
}

int main() {
    int nums[] = {4, 5, 6, 7, 0, 1, 2};
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    int target = 0;

    int result = search(nums, numsSize, target);
    cout << "Index of target element: " << result << endl;

    return 0;
}