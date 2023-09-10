
#include <iostream> 
#include <stdio.h>

int flipBits(int* arr, int n) 
{
    // WRITE YOUR CODE HERE\
    int start, end;
    cin<<start;
    cin<<end;

    while(start != end){
        if(arr[start] == 0){
            arr[start] =1;
        }
        else{
            continue;
        }
        start++;
    }

    int cnt=0;
    for(int i=0; i<arr.length; i++){
        if(arr[i]==1){
            cnt++;
        }
    }

    return cnt;

}

int main(){
    
}