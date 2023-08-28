// Online C++ compiler to run C++ program online
#include <iostream>
#include<stdlib.h>
#include<string>
using namespace std;
int main() {
    // Write C++ code here
    cout << "Hello world!"<<endl;
    string s;
    cin>>s;
    int sum=0, num=0, digit[3];
    for(int i=0; i<4; i++){
        if(isdigit(s[i]))
        {
            sum = sum + (s[i]-48);
        }
        else
        {
            
            num = int(s[i]);
            for(int k=0;k<3;k++)
            {
                digit[k] = num % 10;
                num= num/10;
            }
            if(digit[0]>digit[1] && digit[0]>digit[2])
            {
                sum = sum + digit[0];
            }
            else if(digit[1]>digit[0] && digit[1]>digit[2])
            {
                sum = sum + digit[1];
            }
            else
            {
                sum = sum + digit[2];
            }
            }
    }
    cout<<sum;
    return 0;
}