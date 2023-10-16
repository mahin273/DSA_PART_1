#include<bits/stdc++.h>
using namespace std;

struct Student
{
    string name;
    double gpa;
    int course_taken;
    int age;
};
 
 void bubbleSort(Student arr[],int n){
    for (int i = 0; i < n-1; i++)
    {
       for(int j = 0;j<n-1-i; j++){
        if (arr[j].gpa>arr[j+1].gpa)
        {
        swap(arr[j],arr[j+1]);
        }
        else if(arr[j].gpa==arr[j+1].gpa){
            if (arr[j].course_taken>arr[j+1].course_taken)
            {
                swap(arr[j].course_taken,arr[j+1].course_taken);
            }
            else if (arr[j].course_taken==arr[j+1].course_taken)
            {
                if (arr[j].age>arr[j+1].age)
                {
                    swap(arr[j].age,arr[j+1].age);
                } 
            }
         }
       }
    }  
 }
 void printStudent(Student arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<"Student "<<i+1<<": "<<endl;
        cout<<"Name: "<<arr[i].name<<endl;
        cout<<"GPA: "<<arr[i].gpa<<endl;
        cout<<"Number of Course: "<<arr[i].course_taken<<endl;
        cout<<"Age: "<<arr[i].age<<endl;
        cout<<endl;

    }
    
 }
 int main(){
    int n;
    cout<<"Enter number of students: "<<endl;
    cin>>n;
    Student student[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"Student "<<i+1<<":"<<endl;
        cout<<"Enter Student Name: ";
        cin>>student[i].name;
        cout<<"GPA: ";
        cin>>student[i].gpa;
        cout<<"Enter Number Of Course: ";
        cin>>student[i].course_taken;
        cout<<"Age: ";
        cin>>student[i].age;
        cout<<endl;
    }
    bubbleSort(student,n);
    cout<<endl<<"Sorted Student: "<<endl;
    printStudent(student,n);
 }

