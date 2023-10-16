#include<bits/stdc++.h>
using namespace std;

int Solution(int *arr[], int *n){
     
    int i,j,key;
    for ( i = 1; i < 10; i++)
    {
        cin>>*arr[i];
        key = *arr[i];
        j = i - 1;
        while (j>=0 && *arr[j]>key)
        {
            arr[j+1] = arr[j];
            j = j - 1;
        }
        *arr[j+1] = key;
     
    }

    return 0;
}
int main(){
    int arr[10];
    int n = sizeof(arr)/sizeof(arr[0]);
    Solution(*arr,*n);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;

}