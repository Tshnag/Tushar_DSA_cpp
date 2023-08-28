#include<iostream>
#include<stdio.h>
#include<vector>
#include<math.h>
#include<iomanip>
using namespace std;
 
void plusMinus(){
    int n, neg=0, pos=0, zer=0;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    for (int j = 0; j < n; j++)
    {
        if (arr[j]<0)
        {
            neg++;
        }
        else if(arr[j]>0){
            pos++;
        }
        else{
            zer++;
        }
        
    }

    float temp, ratio1, ratio2, ratio3;
    temp=n;
    ratio1 = pos/temp;
    ratio2 = neg/temp;
    ratio3 = zer/temp;
    cout<<fixed<<setprecision(6)<<ratio1<<endl; 
    cout<<fixed<<setprecision(6)<<ratio2<<endl; 
    cout<<fixed<<setprecision(6)<<ratio3; 

}

int main(){
    plusMinus();
    return 0;
}