//program for making stucture type datatype and accessing them 
#include<iostream>
using namespace std;

struct mahesh       //1st_stucture is always written before main()
{
    char name[20];
    char city[20];
    char aim[20];

};              //structure body close with semocolon ; 

//typedef struct mahesh mahi; //now we change the name or shortcut struct mahesh to mahi

struct details
{
    int salary;
    string name;
    
};

int main()
{
    struct mahesh m1;
    cout<<"enter the name : ";
    cin>>m1.name;               //now we accessing using object to the struct variables
    cout<<"enter city name: ";
    cin>>m1.city;
    cout<<"enter your Aim to became: ";
    cin>>m1.aim;

    cout<<endl<<"name: "<<m1.name<< endl <<"city: "<<m1.city <<endl <<"Aim to became: " << m1.aim;

        struct details d1;
        cout<<endl<<"enter salary: and name:";
        cin>>d1.salary>>d1.name;
        cout<<"salary: " <<d1.salary<<endl<<"name: "<<d1.name;
}


