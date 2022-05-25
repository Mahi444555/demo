//Write a program to print total and average of 1 to 10 using all loops.
#include<iostream>
using namespace std;

int main()
{
    float n,i,sum=0,avg;

    cout<<"enter the value of n: ";
    cin>>n;
    cout<<"using while loop"<<endl;
    i=1;
    while(i<=n)
    {
        sum=sum+i;
        i++;
    }
    avg = sum/n;
    cout<<"average is: "<<avg<<endl;
    
    cout<<endl<<"using do-while_loop: "<<endl;
    i=1;
    sum=0;
    do{
        sum=sum+i;
        i++;
    }while(i<=n);
    avg = sum/n;
    cout<<endl<<"average is: "<<avg<<endl;

    cout<<endl<<"using for_loop: "<<endl;
    sum=0;
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    avg= sum/n;
    cout<<"average is: "<<avg<<endl;
}