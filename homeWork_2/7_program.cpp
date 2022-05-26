//Write a program to print even no between 1 to 10 using all loops

#include<iostream>
using namespace std;

int main()
{
    int n,i;

    cout<<"enter the value of n: ";
    cin>>n;
    cout<<"using while loop"<<endl;
    i=2;
    while(i<=n)
    {
        cout<<i<<"\t";        
        i+=2;
    }
    
    cout<<endl<<"using do-while_loop: "<<endl;
    i=2;
    do{
        cout<<i<<"\t";
        i+=2;
    }while(i<=n);

    cout<<endl<<"using for_loop: "<<endl;
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            cout<<i<<"\t";
        }
    }
}