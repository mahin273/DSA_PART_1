#include <iostream>
using namespace std;

struct Teacher {
    int jobDuration;
    int numOfResearchPapers;
    int age;
};

void heapify(Teacher arr[], int size, int root) {
    int largest = root;
    int left = 2 * root + 1;
    int right = 2 * root + 2;

    if (left < size && arr[left].jobDuration > arr[largest].jobDuration)
        largest = left;

    if (right < size && arr[right].jobDuration > arr[largest].jobDuration)
        largest = right;

    if (largest != root) {
        swap(arr[root], arr[largest]);
        heapify(arr, size, largest);
    }
}

void heapSort(Teacher arr[], int size) {
    for (int i = size / 2 - 1; i >= 0; i--)
        heapify(arr, size, i);

    for (int i = size - 1; i > 0; i--) {
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
}

void printTeachers(Teacher arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << "Teacher " << i + 1 << ": " << endl;
        cout << "Job Duration: " << arr[i].jobDuration << endl;
        cout << "Number of Research Papers: " << arr[i].numOfResearchPapers << endl;
        cout << "Age: " << arr[i].age << endl;
        cout << endl;
    }
}

int main() {
    const int numTeachers = 5;
    Teacher teachers[numTeachers];

    for (int i = 0; i < numTeachers; i++) {
        cout << "Teacher " << i + 1 << ":" << endl;
        cout << "Enter job duration: ";
        cin >> teachers[i].jobDuration;
        cout << "Enter number of research papers: ";
        cin >> teachers[i].numOfResearchPapers;
        cout << "Enter age: ";
        cin >> teachers[i].age;
        cout << endl;
    }

    heapSort(teachers, numTeachers);

    cout << endl << "Sorted Teachers: " << endl;
    printTeachers(teachers, numTeachers);

    return 0;
}