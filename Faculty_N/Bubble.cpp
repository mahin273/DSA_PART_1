#include <iostream>
using namespace std;

struct Teacher {
    string name;
    int jobDuration;
    int numOfResearchPapers;
    int age;
};

void bubbleSort(Teacher arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j].jobDuration > arr[j + 1].jobDuration) {
                swap(arr[j], arr[j + 1]);
            } else if (arr[j].jobDuration == arr[j + 1].jobDuration) {
                if (arr[j].age > arr[j + 1].age) {
                    swap(arr[j], arr[j + 1]);
                } else if (arr[j].age == arr[j + 1].age) {
                    if (arr[j].numOfResearchPapers > arr[j + 1].numOfResearchPapers) {
                        swap(arr[j], arr[j + 1]);
                    }
                }
            }
        }
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

    bubbleSort(teachers, numTeachers);

    cout << endl << "Sorted Teachers: " << endl;
    printTeachers(teachers, numTeachers);

    return 0;
}