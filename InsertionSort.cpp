#include<iostream>
using namespace std;
void insertionsort(int arr[], int n)
{
    for(int i=1; i<n; i++)
    {
        int temp = arr[i];
        int j = i-1;
        while(j>=0 && arr[j]>temp)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
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
    insertionsort(arr,n);
    printarray(arr,n);
    return 0;
}
