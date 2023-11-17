#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    //Counting the order of Given No.
    int n, q, count=0, rem, result=0;
    cout<<"Enter Any integer No. "<<endl;
    cin>>n;

    q=n;
    while (q != 0)
    {
        q = q / 10;
        count++;
    }
    cout<<"Order: "<<count<<endl;
    //cout<<"Value of Q: "<<q<<endl; //For reference..

    //Checking if armstrong or not..
    q=n;
    while(q != 0)
    {
        rem = q % 10;
        int cnt=count;
        int mul = 1;
        while (cnt != 0)    //Without using power funct.
        {
            mul = mul * rem;
            cnt--;
        }
        result = result + mul;
        // result = result + pow(rem,count); //With using power funct.
        q = q / 10;
    }
    if(result == n)
    {
        cout<<"Given no. is Armstrong."<<endl;
    }
    else
    cout<<"No! Given no. is not Armstrong."<<endl;

    return 0;
}