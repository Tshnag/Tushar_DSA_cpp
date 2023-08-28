#include<iostream>
using namespace std; 

int main()
{
    int n, result=0, rem, q;
    cout<<"Enter any integer: ";
    cin>>n;

    q = n;
    while(q != 0)
    {
        rem = q % 10;
        //factorial of individual digits
        int fact=1;
        for (int i = 1; i <= rem; i++)
        {
            fact = fact * i;
        }

        result = result + fact;
        q = q / 10;
    }
    if (result == n)
    {
        cout<<"Your Number is Strong no."<<endl;
    }
    else
    {
        cout<<"Your Number is Not Strong no.";
    }
    
}