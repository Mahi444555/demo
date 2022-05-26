/*A school has following rules for grading system:
a. Below 25 - F
b. 25 to 45 - E
c. 45 to 50 - D
d. 50 to 60 - C
e. 60 to 80 - B
f. Above 80 - A
Ask user to enter marks and print the corresponding grade.
*/
#include<iostream>
using namespace std;

int main()
{
    float grade,sum=0,s1,s2,s3,s4,s5,s6;
    cout<<"enter six subject marks of student: "<<endl;
    cin>>s1>>s2>>s3>>s4>>s5>>s6;
    sum=sum+s1+s2+s3+s4+s5+s6;
    grade = sum/6;
    cout<<"percentage / grade is: "<<grade<<endl;
    if(grade>=80)
    {
        cout<<"A grade"<<endl;
    }
    else if(grade>=70 && grade<80)
    {
        cout<<"B grade"<<endl;
    }
    else if(grade>=60 && grade<70)
    {
        cout<<"C grade"<<endl;
    
    }
    else if(grade>=50 && grade<60)
    {
        cout<<"D grade"<<endl;
    }
    else if(grade>=45 && grade < 50)
    {
        cout<<"E grade"<<endl;
    }
    else if(grade >=25  && grade <45)
    {
        cout<<"Good"<<endl;
    }
    else
        cout<<"fail"<<endl;

}