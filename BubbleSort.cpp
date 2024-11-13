#include<iostream>
using namespace std;
void bubblesort(int arr[], int n)
{
    for(int i=0; i<n-1; i++)
    {
        bool isSwap = false; // no swapping
        for(int j=0; j<n-i-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j], arr[j+1]);
                isSwap = true;
            }
        }
        if(!isSwap) // array is already sorted
        {
            return;  // exits the entire function
        }
    }
}
void printarray(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int n, arr[100];
    cout<<"Enter number of elements: "<<" ";
    cin>>n;
    cout<<"Enter the elements: "<<" ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Before sorting array: ";
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    bubblesort(arr, n);
    cout<<"After sorting array: "<<" ";
    printarray(arr, n);

    return 0;
}
