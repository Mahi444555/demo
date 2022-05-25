//Array with structure 
#include<iostream>
#include<string.h>
using namespace std;

struct person
{
    char stud_name[50];
    int roll_no;

};
typedef struct person person;   //using typedef changing name of stuct person 

int main()
{
    //firstly create the variable or object of person
    person p1[5];           //making structure p1 in array
    person temp;
    int i,j;
    cout<<"enter the stucture array elements: "<<endl;
    for(int i=0;i<5;i++)
    {   
        cout<<endl<<"enter the student_name ["<<i<<"]"<<"elements :" ;
        cin>>p1[i].stud_name;
        cout<<endl<<"enter the rollno ["<<i<<"]"<<"elements : ";
        cin>>p1[i].roll_no;
    }
    //  cout<<endl<<"display the all elements"<<endl;
    //  for(int j=0;j<5;j++)
    //  {
    //      cout<<"student_name is : "<<p1[j].stud_name<<endl;
    //      cout<<"roll_name is : " <<p1[j].roll_no<<endl;       
    //  }

     cout<<endl<<"print in sorting order according name "<<endl;
     for( i=0;i<4;i++)
     {
         for( j=i+1;j<5;j++)
         {
             if(strcmp(p1[i].stud_name,p1[j].stud_name)>0)
             {
                      temp = p1[i];
                         p1[i] = p1[j];
                         p1[j] = temp;
             }
         }
     }

        for(int i=0;i<5;i++)
        {
            cout<<p1[i].stud_name<<"\t"<<p1[i].roll_no<<endl;
        }
}