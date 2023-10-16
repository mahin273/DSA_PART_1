#include <iostream>
using namespace std;

struct Teacher {
    string name;
    int jobDuration;
    int numOfResearchPapers;
    int age;
};

void insertionSort(Teacher arr[], int size) {
    for (int i = 1; i < size; i++) {
        Teacher key = arr[i];
        int j = i - 1;
        
        while (j >= 0 && arr[j].jobDuration > key.jobDuration) {
            arr[j + 1] = arr[j];
            j--;
        }
        
        while (j >= 0 && arr[j].jobDuration == key.jobDuration && arr[j].age > key.age) {
            arr[j + 1] = arr[j];
            j--;
        }
        
        while (j >= 0 && arr[j].jobDuration == key.jobDuration && arr[j].age == key.age && arr[j].numOfResearchPapers > key.numOfResearchPapers) {
            arr[j + 1] = arr[j];
            j--;
        }
        
        arr[j + 1] = key;
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

    insertionSort(teachers, numTeachers);

    cout << endl << "Sorted Teachers: " << endl;
    printTeachers(teachers, numTeachers);

    return 0;
}