#include<iostream>
using namespace std;
// time complexity O(2n)
// better solution
int b_largest(int arr[])
{
    int largest=arr[0];
    for(int i=0;i<5;i++)
    {
        if(largest < arr[i])
        {
            largest = arr[i];
        }
    }
    int sec_largest = -1;
    for(int i=0;i<5;i++)
    {
        if(sec_largest < arr[i]  && arr[i] != largest)
        {
            sec_largest = arr[i];
        }
    }
    return sec_largest;
}
// optimal solution
// time complextiy O(n)
int o_largest(int arr[])
{
    int largest = arr[0];
    int sec_largest = -1;
    for(int i=0;i<5;i++)
    {
        if(largest < arr[i])
        {
            sec_largest = largest;
            largest = arr[i];
        }
        else if(largest > arr[i] && arr[i] > sec_largest)
        {
            sec_largest = arr[i];
        }
    }
    return sec_largest;
}
// second smallest 
// time complesity O(n)
int smallest(int arr[])
{
    int smallest = arr[0];
    int sec_smallest = INT16_MAX;
    for(int i=0;i<5;i++)
    {
        if(smallest > arr[i])
        {
            sec_smallest = smallest;
            smallest = arr[i];
        }
        else if(arr[i] != smallest && arr[i] < sec_smallest)
        {
            sec_smallest = arr[i];
        }
    }
    return sec_smallest;
}
int main(){
    cout<<"Enter array";
    int x;
    int arr[5];
    for (int i=0;i<5;i++)
    {
        cin>>arr[i];

    }
    x=smallest(arr);
    cout<<"output = ";
    cout<<x;

} 