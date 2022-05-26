//Write a program to check whether a entered character is lowercase ( a to z ) or uppercase ( A to Z ).
//ascci value 65 to 90 capital A - Z and 97 to 122 small a - z and numbers 48 to 57

#include<iostream>
using namespace std;

int main()
{
    char ch;
    cout<<"enter the character "<<endl;
    cin>>ch;
    if(ch>=65 && ch<=90) 
    {
        cout<<"it's between  uppercase  A - Z"<<endl;
    }
   else if(ch>=97 && ch<=122)
    {
        cout<<"it's between lowercase a - z"<<endl;
    }
    else if(ch>=48 && ch<=57)
    {
        cout<<"it's a number between 0-9"<<endl;
    }
    else
    {
        cout<<"it's special symbol"<<endl;
    }
}