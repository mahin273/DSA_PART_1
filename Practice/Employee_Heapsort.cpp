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

void heapify(Employee arr[], int n, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && arr[left].level > arr[largest].level)
        largest = left;

    if (right < n && arr[right].level > arr[largest].level)
        largest = right;

    if (largest != i) {
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }
}
/*
>For descending order
void heapify(Employee arr[], int n, int i) {
  int largest = i;
  int left = 2 * i + 1;
  int right = 2 * i + 2;

  if (left < n && arr[left].level < arr[largest].level)
    largest = left;

  if (right < n && arr[right].level < arr[largest].level)
    largest = right;

  if (largest != i) {
    swap(arr[i], arr[largest]);
    heapify(arr, n, largest);
  }
}

*/

void heapSort(Employee arr[], int n) {
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    for (int i = n - 1; i > 0; i--) {
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
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
    heapSort(arr, n);
    cout << "Sorted:" << endl;
    printList(arr, n);
    return 0;
}