

#include<iostream>
using namespace std;
int main()
{
    int n,count=0,a,b,c,sum=0,rem,temp;
    cout<<"armstrong numbers from 1-1000 are:";
    for(int i=1;i<=100;i++)
    {



        int nn=i;
       int temp=i;
    

        while(nn > 0)
        {
            rem= nn%10;
             sum=sum+ (rem*rem*rem);
            nn=nn/10;
        }
        if(temp== sum)
        {
            cout<<sum<<"\t";
        }
        sum=0;
    }
}