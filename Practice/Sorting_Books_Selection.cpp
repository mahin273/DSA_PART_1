#include<bits/stdc++.h>
using namespace std;

struct Sorting_Books_Selection
{
    string author;
    string title;
    int publication_year;
    int num_pages;
    
};

void selection_sort(Sorting_Books_Selection arr[],int size){
    for (int i = 0; i < size; i++)
    {
        int min_idx=i;
        for (int j = 0; j <size-1; j++)
        {
            for (int j = i+1; j < size; j++)
            {
                if(arr[j].publication_year<arr[min_idx].publication_year){
                    min_idx = j;
                }else if(arr[j].publication_year==arr[min_idx].publication_year){
                    if (arr[j].num_pages<arr[min_idx].num_pages)
                    {
                        min_idx = j;
                    }else if (arr[j].num_pages==arr[min_idx].num_pages)
                    {
                       if (arr[j].title<arr[min_idx].title)
                       {
                        min_idx=j;
                       }
                       
                    }
                    
                    
                }
            }
            
            
            swap(arr[i],arr[min_idx]);
        }
        
    }
    
}

void printBooks(Sorting_Books_Selection arr[],int size){
    for (int i = 0; i < size; i++)
    {
        cout<<"Book "<<i+1 <<":"<<endl;
        cout<<"Title: "<<arr[i].title<<endl;
        cout<<"Author: "<<arr[i].author<<endl;
        cout<<"Publication Year: "<<arr[i].publication_year<<endl;
        cout<<"Number of Pages: "<<arr[i].num_pages<<endl;
        cout<<endl;
    }
    
}

int main(){
    int size;
    cout<<"Enter the number of books: ";
    cin>>size;
    Sorting_Books_Selection arr[size];
    for (int i = 0; i < size; i++)
    {
        cout<<"Enter the title of book "<<i+1<<": ";
        cin>>arr[i].title;
        cout<<"Enter the author of book "<<i+1<<": ";
        cin>>arr[i].author;
        cout<<"Enter the publication year of book "<<i+1<<": ";
        cin>>arr[i].publication_year;
        cout<<"Enter the number of pages of book "<<i+1<<": ";
        cin>>arr[i].num_pages;
        cout<<endl;
    }

    selection_sort(arr,size);
    printBooks(arr,size);
    
}