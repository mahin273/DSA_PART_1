#include <iostream>
#include <string>
using namespace std;

struct Employee {
    string name;
    int level;
    int salary;
    int exp;
    int age;
};

void merge(Employee arr[], int low, int mid, int high) {
    int n1 = mid - low + 1;
    int n2 = high - mid;

    Employee L[n1], R[n2];

    for (int i = 0; i < n1; i++) {
        L[i] = arr[low + i];
    }
    for (int j = 0; j < n2; j++) {
        R[j] = arr[mid + 1 + j];
    }

    int i = 0, j = 0, k = low;

    while (i < n1 && j < n2) {
        if (L[i].level < R[j].level) {
            arr[k] = L[i];
            i++;
        } else if (L[i].level == R[j].level) {
            if (L[i].salary < R[j].salary) {
                arr[k] = L[i];
                i++;
            } else if (L[i].salary == R[j].salary) {
                if (L[i].exp < R[j].exp) {
                    arr[k] = L[i];
                    i++;
                } else if (L[i].exp == R[j].exp) {
                    if (L[i].age < R[j].age) {
                        arr[k] = L[i];
                        i++;
                    } else {
                        arr[k] = R[j];
                        j++;
                    }
                } else {
                    arr[k] = R[j];
                    j++;
                }
            } else {
                arr[k] = R[j];
                j++;
            }
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(Employee arr[], int low, int high) {
    if (low < high) {
        int mid = low + (high - low) / 2;

        mergeSort(arr, low, mid);
        mergeSort(arr, mid + 1, high);

        merge(arr, low, mid, high);
    }
}

void printList(Employee arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i].name << " " << arr[i].level << " " << arr[i].salary << " " << arr[i].exp << " " << arr[i].age;
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;
    Employee arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i].name >> arr[i].level >> arr[i].salary >> arr[i].exp >> arr[i].age;
    }
    mergeSort(arr, 0, n - 1);
    cout << "Sorted:" << endl;
    printList(arr, n);
    return 0;
}