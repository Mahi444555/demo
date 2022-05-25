//Take values of length and breadth of a rectangle from user and check if it is square or not
//formula for area of recangle : area = l*b and square all sides are equal and rectangle opposites sides are equal
#include<iostream>
using namespace std;

int main()
{
    int area, l,b;
    cout<<"enter the length:"<<endl;
    cin>>l;
    cout<<"enter the breadth:"<<endl;
    cin>>b;
    area = l*b;
    cout<<"area of rectangle: " <<area<<endl;

    if(l==b)
    {
        cout<<"all sides are equal : it's square";
    }
    else
    {
        cout<<"sides are not equal: it's not square";
    }
}