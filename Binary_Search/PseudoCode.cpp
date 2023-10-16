#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[],int n,int key)
{
    int s=0; //s = start
    int e=n; //e=end
    while(s<=e)
    {
        int mid=(s+e)/2;
        if(arr[mid]==key)
        {
            return mid;
        }
        else if(arr[mid]<key)
        {
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    return -1;
}