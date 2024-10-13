// O(n)
#include<iostream>
using namespace std;
// check for sorted array
void ch_sorted(int arr[],int n)
{
    for(int i=1;i<n;i++)
    {
        if(arr[i]>= arr[i-1])
        {
           
        }
        else
        {
            cout<<"not sorted array";
            return; 
        }
    }
    cout<<"Sorted array";
    return;
}
void rem_dup(int arr[],int n)
{
    int i=0;
    for(int j=1;j<n;j++)
    {
        if(arr[j]!=arr[i])
        {
            arr[i+1] = arr[j];
            i++;
        }
    }

    cout<<"no of sorted a=elements in the array";
    cout<< i+1;
}
int main()
{
    int n;
    cout<<"Enter length of array:- ";
    cin>>n;
    int arr[n];
    cout<<"Enter arr elements\n";
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    // ch_sorted(arr,n);
    rem_dup(arr,n);

}
