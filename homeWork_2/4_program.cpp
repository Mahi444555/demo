/*A student will not be allowed to sit in exam if his/her attendence is less than 75%.
Take following input from user
Number of classes held
Number of classes attended.
And print
percentage of class attended
Is student is allowed to sit in exam or not.
*/
#include<iostream>
using namespace std;
 
int main()
{
    float total_lec, attended;
    float per;
    cout<<"enter the total number of lectures held: "<<endl;
    cin>>total_lec;
    cout<<"total lectures attended: "<<endl;
    cin>>attended;
    per = (attended/total_lec ) * 100;
    cout<<"Percentage : "<<per<<endl;
    if(per>=75)
    {
        cout<<"Yes, allowed to sit in exam"<<endl;
    }
    else
    {
        cout<<"Not, eligible to sit in exam "<<endl;
    }

}