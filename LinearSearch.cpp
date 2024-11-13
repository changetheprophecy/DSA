#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter total number of elements: "<<" ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements: "<<" ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int item, flag = -1;
    cout<<"Enter the item you want to search: "<<" ";
    cin>>item;
    for(int i=0; i<n; i++)
    {
        if(item == arr[i])
        {
            flag = i;
        }
    }
    if(flag != -1)
        cout<<"Item found at position "<< flag+1<<endl;
    else
        cout<<"Item not found"<<endl;
    return 0;
}
