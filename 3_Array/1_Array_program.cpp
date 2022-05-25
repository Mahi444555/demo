//program on array
#include<iostream>
using namespace std;

int main()
{
    cout<<"enter the size of n: "<<endl;
    int n;   
    cin>>n;
    int arr[n];         //passing n as size of array here we directly pass it in java int arr[]=new int[n]

    cout<<"enter the array elements: "<<endl;
    for(int i=0;i<n;i++ )
    {
        cin>>arr[i];
    }
    cout<<"displaying that elements: "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<"\t";
    }

}