#include<bits/stdc++.h>
using namespace std;

struct Employee
{
string name;
int level;
int salary;
int exp;
int age;

};
int partition(Employee arr[],int low,int high){
Employee pivot = arr[high];
int i = low -1;
 for (int j = 0; i < high; j++)
 {
    if (arr[j].level<pivot.level)
    {
    i++;
    swap(arr[i].level,arr[j].salary);    
    }else if (arr[j].level==pivot.level)
    {
        if (arr[j].salary<pivot.salary)
        {
            i++;
            swap(arr[i].salary,arr[j].salary);
        }
        else if (arr[j].salary==pivot.salary)
        {
            if (arr[j].exp<pivot.exp)
            {
                i++;
                swap(arr[i].exp,arr[j].salary);
            }else if (arr[j].exp==pivot.exp)
            {
                if(arr[j].age<pivot.age){
                    i++;
                    swap(arr[i].exp,arr[j].salary);
                }
            }
            
            
        }
        
    }
    swap(arr[i+1],arr[high]);
    return i+1;
    
 }
 
}

void quickSort(Employee arr[],int low ,int high){
    if (low<high)
    {
       int pivot=partition(arr,low,high);
       quickSort(arr,low,pivot-1);
       quickSort(arr,pivot+1,high);
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

    quickSort(arr, 0, n - 1);
    cout << "Sorted:" << endl;
    printList(arr, n);

    return 0;
}