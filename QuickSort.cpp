#include<iostream>
using namespace std;
int partition(int arr[],int low, int high)
{
    int pivot = arr[high];
    int i = (low - 1);
    for(int j=low; j<=high-1; j++)
    {
        if(arr[j]<pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i+1], arr[high]);
    return (i+1);
}
void quicksort(int arr[], int low, int high)
{
    if(low<high)
    {
        int pi = partition(arr,low,high);

        quicksort(arr, low, pi-1);
        quicksort(arr,pi+1,high);
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
    quicksort(arr,0,n-1);
    printarray(arr,n);
    return 0;
}
