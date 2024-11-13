#include<bits/stdc++.h>
using namespace std;
binarysearch(int t, int arr[], int key)
{
    int s=0, e=t, mid;
    while(s<=e)
    {
        mid = (s+e)/2;
        if(arr[mid]>key)
            e = mid-1;
        else if(arr[mid]<key)
            s = mid+1;
        else
            return mid;
    }
    return -1;
}

int main()
{
    int t,y=1,key,x;
    while(y==1)
    {
        cout<<"Enter array size: ";
        cin>>t;
        int arr[t];
        cout<<"Enter array elements:"<<endl;
        for(int i=0; i<t; i++)
        {
            cin>>arr[i];
        }

        sort(arr, arr+t);
        cout<<"Sorted array: "<<endl;
        for(int i=0; i<t; i++)
        {
            cout<<arr[i]<<endl;
        }
        cout<<"Enter the element you want to search: ";
        cin>>key;
        x = binarysearch(t,arr,key);
        if(x!= -1)
            cout<<"Position: "<<x+1<<endl;
        else
            cout<<"Element not found"<<endl;

        cout<<"Do you want to continue?"<<endl<<"If 'yes' press 1, else press 0"<<endl;
        cin>>y;
    }
    return 0;
}
