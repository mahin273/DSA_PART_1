
//  Search Insert Position 
// You are given a sorted array and a target element. Write a function to 
// find the index of the target element if it exists in the array. If it doesn't exist, 
// return the index where it would be inserted to maintain the sorted order. 

#include <iostream>
using namespace std;

int searchInsert(int* nums, int numsSize, int target) {
    int left = 0;
    int right = numsSize - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (nums[mid] == target)
            return mid;

        if (nums[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return left;
}

int main() {
    int nums[] = {1, 3, 5, 6};
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    int target = 2;

    int result = searchInsert(nums, numsSize, target);
    cout << "Index of target element: " << result << endl;

    return 0;
}