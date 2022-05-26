//Write a program to check if entered character is vowel using switch case.

#include<iostream>
using namespace std;

int main()
{
    char ch;
    cout<<"enter the character: ";
    cin>>ch;

    if((ch=='a' || ch=='A') || (ch=='e' || ch=='E') || (ch=='i' || ch=='I') || (ch== 'o' || ch== 'O') || (ch=='u' || ch=='U'))
    {
        cout<<"enter character is vowel: "<<ch<<endl;
    }
    else
    {
        cout<<"Not vowel:"<<ch<<endl;
    }


    switch (ch)
    {
    case 'a':
        cout<<"vowel"<<"\t"<<ch;
        break;
    case 'A':
        cout<<"vowel: "<<ch;
        break;

    case 'e':
        cout<<"vowel; "<<ch;
        break;
   case 'E':
        cout<<"vowel: "<<ch;
        break;

    case 'i':
        cout<<"vowel: "<<ch;
        break;
    case 'I':
        cout<<"vowel: "<<ch;
        break;

    case 'o':
        cout<<"vowel: "<<ch;
        break;
     case 'O':
        cout<<"vowel: "<<ch;
        break;

    case 'u': 
        cout<<"vowel: "<<ch;
        break;
    case 'U': 
        cout<<"vowel: "<<ch;
        break;

        
    
    default:
    cout<<"invalid character: "<<ch;
        break;
    }
}