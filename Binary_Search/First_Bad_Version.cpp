
// First Bad Version 
// You are given a series of versions of a software, with the latest version being n.
//  There is a known bug in one of the versions, and
//   all versions after that are also considered bad. 
//   Write a function to find the first bad version. 
//   You have access to an API  bool isBadVersion(int version)  which returns whether 
//   a given version is bad. 

#include <iostream>
using namespace std;

bool isBadVersion(int version) {
    // Implementation of isBadVersion function
    // (Assuming the function is already defined)
    return true; // Placeholder return value
}

int firstBadVersion(int n) {
    int left = 1;
    int right = n;

    while (left < right) {
        int mid = left + (right - left) / 2;

        if (isBadVersion(mid))
            right = mid;
        else
            left = mid + 1;
    }

    return left;
}

int main() {
    int n = 10;

    int result = firstBadVersion(n);
    cout << "First bad version: " << result << endl;

    return 0;
}