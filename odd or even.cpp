/*  C++ Program to Find whether given Number is Odd or Even  */

#include<iostream>

using namespace std;

int main()
{
    int a;
    cout<<"Enter any positive number :: ";
    cin>>a;

    if(a%2==0)
    {
       cout<<"\nThe Entered Number [ "<<a<<" ] is EVEN Number.\n";
    }

    else
    {
        cout<<"\nThe Entered Number [ "<<a<<" ] is ODD Number.\n";
    }

    return 0;
}
