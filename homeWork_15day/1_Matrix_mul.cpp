//program to find matrix multiplication 
#include<iostream>
using namespace std;

int main()
{
    int i,j,k,m,n; //where i for firt lopp j second and k for changing lines and columns m and n are row and col
    int sum=0;

    cout<<"enter the no of rows m:";
    cin>>m;
    cout<<"enter the no of columns n:";
    cin>>n;
    int arr[m][n];  //2d array
    cout<<"enter the first matrix elements:"<<end;
    for( i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<"enter element at"<<i <<" , "<<j<<endl;
            cin>>arr[i][j];
        }
    }
    cout<<"enter second matrix ":<<end;
    int arr1[m][n];     //second matrix of 2d array
     for( i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<"enter element at"<<i <<" , "<<j<<endl;
            cin>>arr[i][j];
        }
    }

    cout<<"printing first matrix: "<<endl;
     for( i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<arr1[i][j]<<" ";
        }
        cout<<endl;
    }

cout<<"second matrix "<<endl;
    for( i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<arr1[i][j]<<" ";
        }
        cout<<endl;
    }

   int c[m][n];
     for( i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            for(k=0;k<n;k++)
            {
                c[i][j]= arr[i][k] * arr1[k][j];
            }
            
        }
    }

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<c[i][j]<<"  ";
        }
        cout<<endl;
    }

}