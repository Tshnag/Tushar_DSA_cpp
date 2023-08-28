#include<iostream>
#include<stdio.h>
#include<vector>
#include<stdlib.h>
using namespace std;
 
int main(){
    vector<int> a;
    cout<<a.size()<<endl;
    a.resize(4);
    cout<<a.size()<<endl;

    //Step1- Generate numbers (from 1 to 100)
    //Print number of occurences of each number.

    const int DIFFERENT_NUMBERS = 100;

    //read no of numbers to generate
    int totalNumbers;
    cout<<"How many numbers to Generate? :"<<endl;
    cin>>totalNumbers;

    //Declare vector
    vector<int> numbers(DIFFERENT_NUMBERS + 1);

    //initialise vector to zero
    for (int i = 0; i < numbers.size(); i++)
    {
        numbers[i]=0;
    }
    
    //generate random numbers in vector
    for (int j = 0; j < totalNumbers; j++)
    {
        numbers[rand() % DIFFERENT_NUMBERS + 1]++;
    }

    //Ouput the vector generated;
    for (int k = 0; k < DIFFERENT_NUMBERS; k++)
    {
        cout<< k <<" occurs "<< numbers[k]<< "time(s)\n";
    }
    
    

    return 0;
}