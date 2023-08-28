#include<iostream>
using namespace std;

void starPyramid()
{
    int n,i,j,k=0;
    cout<<"Enter required no. of rows: ";
    cin>>n;
    for(i = 0; i <= n ; i++ )
    {
        for(j = 0; j <= 2*n-1; j++)
        {
            if (j>=n-(i-1) && j<=n+(i-1))
            {
                cout<<"*";
                k=k+1;
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
        cout<<"No. of Stars are:- "<<k<<endl;
}


void starRightAngle()
{
    int n,i,j,k=0;
    cout<<"Enter required no. of rows: ";
    cin>>n;
    for(i = 0; i <= n ; i++ )
    {
        for(j = 0; j <= n; j++)
        {
            if (j>=n-(i-1) && j<=n+(i-1))
            {
                cout<<"*";
                k=k+1;
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
        cout<<"No. of Stars are:- "<<k<<endl;
}

int main()
{
    string patternname="";
    cout<<"Do you want pyramid star?"<<endl;
    cin>>patternname;
    if(patternname == "Yes" || patternname == "yes")
    {
        starPyramid();
    }
    else if(patternname == "No" || patternname =="no")
    {
        cout<<"Then, Right-Angled Triangle?"<<endl;   //To be continued...
        cin>>patternname;
            if(patternname == "Yes" || patternname == "yes")
            {
                starRightAngle();
            }
            else if(patternname == "No" || patternname =="no")
            {
                cout<<endl;   //To be continued...
            }
    }
    else
    {
        cout<<"Invalid answer, Try Again!";
    }
    return 0;
}