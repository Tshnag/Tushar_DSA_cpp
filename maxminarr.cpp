#include<iostream>
#include<stdio.h>
#include<vector>
#include<limits.h>
using namespace std;
 

int getMin(int num[], int n){
    int min= INT_MAX;
    for(int i=0; i<n;i++){
        if(num[i]<min){
            min=num[i];
        }
    }

    return min;
}


bool searchArr(int arr[], int size, int key){

    bool isThere;
    for(int i=0; i<size; i++){
        if(arr[i] == key){
            isThere = true;
            break;
        }
        else{
            isThere = false;
        }
    }

    return isThere;
}


void reverseArr(int arr[], int size){

    int start=0, end=size-1;
    while(start <= end){
        int temp=0;
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--; 
    }
}


void printArr(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}




int main(){
    
    // int size;
    // cin>>size;
    // int num[100];

    // for(int i=0; i<size; i++){
    //     cin>>num[i];
    // }
    // cout<<"Minimun in array num[] is: "<<getMin(num, size)<<endl;
    // cout<<"success";


    //Linear Search in an array
    int arr[7]={10, 15, 5, 30, 35, 40, 45};

    int size;
    cin>>size;
    // int key;
    // cin>>key;

    // bool found = searchArr(arr, size, key);
    // if(found){
    //     cout<<"The key is found"<<endl;
    // }
    // else{
    //     cout<<"The key is not found"<<endl;
    // }
    cout<<"before reversing"<<endl;
    printArr(arr, size);
    reverseArr(arr, size);
    cout<<"after reversing"<<endl;
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }

    


    return 0;
}
