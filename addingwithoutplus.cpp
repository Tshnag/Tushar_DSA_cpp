#include<iostream>
using namespace std;

int main()
{
    int x, y;
    cout<<"Enter Any 2 numbers to add: ";
    cin>>x>>y;

   /* while (y != 0)
    {
        x++;
        y--;
    }
    cout<<"Addion of above numbers is: "<<x;
    */

    /*
    //For negative Integers:
    if(y > 0)
    {
        while( y != 0)
        {
            x++;
            y--;
        }
    }
    else
    {
        while( y != 0)
    {
        x--;
        y++;
    }
    }
    cout<<"Addion of above numbers is: "<<x;
    */
    
    //Using Half-Adder Logic
    int sum, carry;
    while(y != 0)
    {
        sum = x ^ y;
        carry = (x & y) << 1;
        x = sum;
        y = carry;
    }
    cout<<"Addion of above numbers is: "<<x;
    return 0;

}