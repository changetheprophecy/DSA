#include<iostream>
using namespace std;
void selectionsort(int arr[], int n)
{
    int min_idx;
    for(int i=0; i<n-1; i++)
    {
        min_idx = i;
        for(int j=i+1; j<n; j++)
        {
            if(arr[j] < arr[min_idx])
            {
                min_idx = j;
            }
        }
        swap(arr[i],arr[min_idx]);
    }
}
void printarray(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int n, arr[100];
    cout<<"Enter total number of elements: "<<" ";
    cin>>n;
    cout<<"Enter the elements: "<<" ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Before sorting array: "<<" ";
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"After sorting array: "<<" ";
    selectionsort(arr,n);
    printarray(arr,n);
    return 0;
}
