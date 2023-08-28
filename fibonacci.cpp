#include<iostream>
using namespace std;

int main()
{
    int a=0, b=1, result, n;
    cout<<"Enter no. upto which series should be printed: ";
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        cout<<a<<" ";
        result = a + b;
        a = b;
        b = result;
    }
    
}