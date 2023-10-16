#include<bits/stdc++.h>
using namespace std;

struct Movie
{
string title;
string genre;
int releaseYear;
double rating;
};

void insertionSort(Movie arr[], int n){
    for (int i = 1; i < n; i++)
    {
        Movie key = arr[i];
        int j = i-1;
        while (j>= 0)
        {
            if (arr[j].rating<key.rating)
            {
                arr[j+1]=arr[j];
            }else if (arr[j].rating==arr[j+1].rating)
            {
                if (arr[j].releaseYear>arr[j+1].releaseYear)
                {
                arr[j+1]=arr[j];
                }else if (arr[j].releaseYear==arr[j+1].releaseYear)
                {
                    if (arr[j].title>arr[j+1].title)
                    {
                        arr[j+1]=arr[j];
                    }else
                    {
                        break;
                    }
                    
                    
                }else{
                    break;
                }
                
            }else
            {
            break;
            }
            
            
            j--;
        }
        arr[j+1]=key;
    }
    
}
void printMovies(Movie arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<"Title: "<<arr[i].title<<endl;
        cout<<"Genre: "<<arr[i].genre<<endl;
        cout<<"Release Year: "<<arr[i].releaseYear<<endl;
        cout<<"Rating: "<<arr[i].rating<<endl;
        cout<<endl;

    }
    
}

int main(){
    int n;
    cin>>n;
    Movie arr[n];
    for (int i = 0; i < n; i++)
    {
       cout<<"Title of Movie "<<i+1<<": ";
       cin>>arr[i].title;
       cout<<"Movie Genre :";
       cin>>arr[i].genre;
       cout<<"Release Year: ";
       cin>>arr[i].releaseYear;
       cout<<"Rating: ";
       cin>>arr[i].rating;
       cout<<endl;
    }
    insertionSort(arr,n);
printMovies(arr,n);
    return 0;
    
}