#include <iostream>
using namespace std;

struct Teacher {
    int jobDuration;
    int numOfResearchPapers;
    int age;
};

void selectionSort(Teacher arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j].jobDuration < arr[minIndex].jobDuration) {
                minIndex = j;
            } else if (arr[j].jobDuration == arr[minIndex].jobDuration) {
                if (arr[j].age < arr[minIndex].age) {
                    minIndex = j;
                } else if (arr[j].age == arr[minIndex].age) {
                    if (arr[j].numOfResearchPapers < arr[minIndex].numOfResearchPapers) {
                        minIndex = j;
                    }
                }
            }
        }
        swap(arr[i], arr[minIndex]);
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

    selectionSort(teachers, numTeachers);

    cout << endl << "Sorted Teachers: " << endl;
    printTeachers(teachers, numTeachers);

    return 0;
}