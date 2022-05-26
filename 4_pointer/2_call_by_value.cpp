//program on call by value i.e. we directly pass the value through the fucntion parameters 
#include<iostream>
using namespace std;

void add(int x,int y)
{
    int total = x+y;
    cout<<"call by value directly pass parameters / values total : "<<total<<endl;
}

void total(int *p, int *q)
{
    cout<<*p<<endl;
    cout<<*q<<endl;
    int total= *p + * q;
    cout<<"call by refrence passing only address and stored in pointer then total: "<<total;
}

int main()
{
    int a=10;
    int b=20;
    add(a,b);       //call by value directly calling the function using vlaues
    total(&a,&b);   //calling total function and directly passing address of that 
}