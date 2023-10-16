#include <iostream>
using namespace std;

void findOccurrences(int arr[], int n, int target) {
    int first = -1, last = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            if (first == -1) {
                first = i;
            }
            last = i;
        }
    }
    if (first == -1) {
        cout << "Target not found in the array." << endl;
    } else {
        cout << "First occurrence of target: " << first << endl;
        cout << "Last occurrence of target: " << last << endl;
    }
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int target;
    cout << "Enter the target value: ";
    cin >> target;

    findOccurrences(arr, n, target);

    return 0;
}