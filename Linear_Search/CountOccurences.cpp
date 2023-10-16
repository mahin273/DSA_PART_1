#include <iostream>
using namespace std;

int countOccurrences(int arr[], int n, int target) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            count++;
        }
    }
    return count;
}

int main() {
    int arr[] = {2, 4, 6, 8, 4, 10, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 4;
    
    int occurrences = countOccurrences(arr, n, target);
    
    cout << "Number of occurrences of " << target << " is: " << occurrences << endl;
    
    return 0;
}