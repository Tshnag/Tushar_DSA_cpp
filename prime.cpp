#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n, val1, val2, count=0;
    cout<<"Enter any positive Integer: ";
    cin>>n;

    val2 = n;
    val1 = ceil(sqrt(n));
    for(int i=2; i<=val1; i++)
    {
        if(val2 % i == 0)
        {
            count=1;
        }
    }
    if((count==0 && val2 != 1) || val2 ==2 || val2 ==3)
    {
        cout<<"Your given number is a Prime No."<<endl;
    }
    else
    {
        cout<<"Your given number is Not a Prime No.";
    }
}