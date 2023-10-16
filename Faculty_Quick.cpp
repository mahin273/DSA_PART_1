#include <iostream>
using namespace std;

struct Teacher {
    int jobDuration;
    int numOfResearchPapers;
    int age;
};

int partition(Teacher arr[], int low, int high) {
    Teacher pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (arr[j].jobDuration < pivot.jobDuration) {
            i++;
            swap(arr[i], arr[j]);
        } else if (arr[j].jobDuration == pivot.jobDuration) {
            if (arr[j].age < pivot.age) {
                i++;
                swap(arr[i], arr[j]);
            } else if (arr[j].age == pivot.age) {
                if (arr[j].numOfResearchPapers < pivot.numOfResearchPapers) {
                    i++;
                    swap(arr[i], arr[j]);
                }
            }
        }
    }

    swap(arr[i + 1], arr[high]);
    return i + 1;
}

void quickSort(Teacher arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
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

    quickSort(teachers, 0, numTeachers - 1);

    cout << endl << "Sorted Teachers: " << endl;
    printTeachers(teachers, numTeachers);

    return 0;
}