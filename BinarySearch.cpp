#include<bits/stdc++.h>
using namespace std;
int binarysearch(int arr[], int n, int key)
{
    int s=0, e=n-1, mid;
    while(s<=e)
    {
        mid = (s+e)/2;
        if(arr[mid]>key)
            e = mid - 1;
        else if(arr[mid]<key)
            s = mid+1;
        else
            return mid;
    }
    return -1;
}
int main()
{
    int n, key, arr[100], y=1,x;
    while(y==1)
    {
        cout<<"Enter array size: "<<" ";
        cin>>n;
        cout<<"Enter the elements: "<<" ";
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        cout<<"Sorted array: "<<" ";
        for(int i=0; i<n; i++)
        {
            cout<<arr[i]<<endl;
        }
        cout<<"Enter the element you want to search: "<<endl;
        cin>>key;
        x = binarysearch(arr,n,key);
        if(x != -1)
            cout<<"Element found at position "<<x+1<<endl;
        else
            cout<<"Element not found"<<endl;

        cout<<"Do you want to continue?"<<endl<<"If 'yes' press 1, else press 0"<<endl;
        cin>>y;
    }
}
