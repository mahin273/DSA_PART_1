
// Peak Index in a Mountain Array 
// You are given an array that represents a mountain,
//  where the elements increase until a peak is reached, and then decrease.
//  Write a function to find the index of the peak element. 

#include <iostream>
using namespace std;

int peakIndexInMountainArray(int* arr, int arrSize) {
    int left = 0;
    int right = arrSize - 1;

    while (left < right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] < arr[mid + 1])
            left = mid + 1;
        else
            right = mid;
    }

    return left;
}

int main() {
    int arr[] = {1, 3, 5, 9, 7, 4, 2};
    int arrSize = sizeof(arr) / sizeof(arr[0]);

    int result = peakIndexInMountainArray(arr, arrSize);
    cout << "Peak index: " << result << endl;

    return 0;
}