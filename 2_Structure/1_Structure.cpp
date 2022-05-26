/*program on structure which is user define datatype i.e. 
user can stored hetrogenous data's in it any type int,float, char etc at once
and in array we can't do that only use in that homogenous 
where: typedef : used to change any dataype name eg: 
                :typedef int   number ; now number is works as int
                :typedef struct person p1 ; 
*/


#include<iostream>
using namespace std;
struct people
{
    int age;
    char name[20]; // created name array of size 20 
};                  //structure always close by semocolon
typedef struct people people; 
struct man
{
    int salary;
    int rollno;
};
typedef struct man man;


int main()
{
    people p1;
    cout<<"enter age: ";
    cin>>p1.age;
    cout<<"enter name: ";
    cin>>p1.name;
    cout<<"age is: \t"<<p1.age <<"\t name is: \t"<<p1.name;

    man m1; //creating structure's_name : man creating object m1
    cout<<endl<<"enter the salary: and rollno:  "<<endl;
    cin>>m1.salary;
    cin>>m1.rollno;
    cout<<"salary: "<<m1.salary<<endl<<"rollno: "<<m1.rollno;

}