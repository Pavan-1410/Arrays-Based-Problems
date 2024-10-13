#include<iostream>
using namespace std;
// time comp = O(n)
int largest(int arr[])
{
    int largest=arr[0];
    for(int i=0;i<5;i++)
    {
        if(largest < arr[i])
        {
            largest = arr[i];
        }
    }
    return largest;
}
int main(){
    cout<<"Enter array";
    int x;
    int arr[5];
    for (int i=0;i<5;i++)
    {
        cin>>arr[i];

    }
    x=largest(arr);
    cout<<"output\n";
    cout<<x;

}