#include <iostream>
using namespace std;

struct Teacher {
    string name;
    int jobDuration;
    int numOfResearchPapers;
    int age;
};

void heapify(Teacher arr[], int size, int rootIndex) {
    int largest = rootIndex;
    int leftChild = 2 * rootIndex + 1;
    int rightChild = 2 * rootIndex + 2;

    if (leftChild < size && arr[leftChild].jobDuration > arr[largest].jobDuration) {
        largest = leftChild;
    } else if (leftChild < size && arr[leftChild].jobDuration == arr[largest].jobDuration) {
        if (arr[leftChild].age > arr[largest].age) {
            largest = leftChild;
        } else if (arr[leftChild].age == arr[largest].age) {
            if (arr[leftChild].numOfResearchPapers > arr[largest].numOfResearchPapers) {
                largest = leftChild;
            }
        }
    }

    if (rightChild < size && arr[rightChild].jobDuration > arr[largest].jobDuration) {
        largest = rightChild;
    } else if (rightChild < size && arr[rightChild].jobDuration == arr[largest].jobDuration) {
        if (arr[rightChild].age > arr[largest].age) {
            largest = rightChild;
        } else if (arr[rightChild].age == arr[largest].age) {
            if (arr[rightChild].numOfResearchPapers > arr[largest].numOfResearchPapers) {
                largest = rightChild;
            }
        }
    }

    if (largest != rootIndex) {
        swap(arr[rootIndex], arr[largest]);
        heapify(arr, size, largest);
    }
}

void heapSort(Teacher arr[], int size) {
    for (int i = size / 2 - 1; i >= 0; i--) {
        heapify(arr, size, i);
    }

    for (int i = size - 1; i >= 0; i--) {
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
}

void printTeachers(Teacher arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << "Teacher " << i + 1 << ": " << endl;
        cout << "Name: " << arr[i].name << endl;
        cout << "Job Duration: " << arr[i].jobDuration << endl;
        cout << "Number of Research Papers: " << arr[i].numOfResearchPapers << endl;
        cout << "Age: " << arr[i].age << endl;
        cout << endl;
    }
}

int main() {
    int numTeachers;
    cout << "Enter the number of teachers: ";
    cin >> numTeachers;

    Teacher teachers[numTeachers];
    for (int i = 0; i < numTeachers; i++) {
        cout << "Teacher " << i + 1 << ":" << endl;
        cout << "Enter name: ";
        cin >> teachers[i].name;
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