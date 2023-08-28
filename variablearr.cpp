#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n, q;
    cin>>n;

    int input;
    vector<vector<int>> vec1;
    for (int i=0; i<n; i++) {
        for (int k=0; k<vec1[i].size(); k++) {
            cin>>input;
            vec1[i].push_back(input);
        }
    } 

    // int a, b, c, d;
    // while(q != 0){
    //     cin
    // }
    // int result1, result2;

    for (int i=0; i<n; i++) {
        for (int j=0; j<vec1[i].size(); j++) {
            cout<<vec1[i][j];
        }
        cout<<endl;
    }
    return 0;
}

