#include<iostream>
#include<stdio.h>
#include<vector>
#include<math.h>
using namespace std;
 
int diagonalDifference(){
    int m, num1=0, num2=0;
    cin>>m;
    int arr[m][m];
    for (int k=0; k<m; k++) {
        for (int i=0; i<m; i++) {
            cin>>arr[k][i];
        }
    }
    int j=m-1;
    for (int i=0; i<m; i++) {
        num1 = num1 + arr[i][i];
        num2 = num2 + arr[i][j--];
        
    }
    int result = num1 - num2;
    return abs(result);
}

int main(){
    cout<<diagonalDifference()<<endl;
    return 0;
}