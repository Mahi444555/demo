/*A shop will give discount of 10% if the cost of purchased quantity is more than 1000.
Ask user for quantity
Suppose, one unit will cost 100.
Judge and print total cost for user.
*/

#include<iostream>
using namespace std;

int main()
{
    int unit, total_cost,discount;
    cout<<"enter the number of units: ";
    cin>>unit;

    total_cost = unit *100;  //i.e. each unit or product will be of rupee 100 hence muliply by *100
    cout<<"total: "<<total_cost<<endl;
    if(total_cost >= 1000)
    {
         discount = total_cost*10 /100;  //percentage formula if total is greater than 1000 give 10% discount
        discount= total_cost-discount;
    }
    cout<<"total_cost after discount is : "<<discount<<endl;
}