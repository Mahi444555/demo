//program on pointers i.e. which holds the address of another variabels 
#include<iostream>
using namespace std;
// struct mj           //strucute always declare before main and close with ; semicolon and it's 
// {                   //it's user defined i.e. which can holds any_type of data i.e. integer,float,char etc,
//     char name[20];
//     int salary;
// };
//   typedef struct mj mahi;        //where typedef used to change the name of datatype stuct mj to : mahi

int main()
{
    int a=10;
    int *ptr;

    ptr=&a;     //now &a i.e. address of a is stroing the pointer ptr 
    cout<<endl<<"pointer ptr storing now : "<<ptr;    //it will gives us only address of "a"
    cout<<endl<<"pointer ptr storing now : "<<*ptr;   //if we want to print value then write again * gives: 10

    int x=10;
    int *y=&x;
    int **z=&y;
    cout<<endl<<"z is: "<<**z;
    cout<<endl<<"y is: "<<*y ;
    cout<<endl<<"x is: "<<x;
}