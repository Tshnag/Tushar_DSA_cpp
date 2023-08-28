#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

// vector<int> parseInts(string str) {
// 	// Complete this function
//     stringstream ss(str);
//     char ch,comma;
//     int a;
//     // ss >> a >> ch >> b >> ch >> c;  // a = 23, b = 4, c = 56   
//     vector<int> vec;
//     for (int i=0; i<vec.size(); i++) {
//         if (i % 2 != 0) {
//             ss>>a;
//             vec[i]=a;
//             cout<<endl;
//         }
//         else {
//             ss>>ch;
//             comma=ch;
//         }
//     }
//     return vec;
// }

int main() {
    string str;
    cout<<"enter a string of integers"<<endl;
    cin >> str;
    // vector<int> integers = parseInts(str);

    stringstream ss(str);
    char ch,comma;
    int a;
    // ss >> a >> ch >> b >> ch >> c;  // a = 23, b = 4, c = 56   
    vector<int> vec(3);
    for (int i=0; i<4; i++) {
        if (i % 2 != 0) {
            ss>>a;
            vec[i]=a;
        }
        else {
            ss>>ch;
            comma=ch;
        }
    }
    for(int i = 0; i < vec.size(); i++) {
        cout << vec[i] << "\n";
    }
    
    return 0;
}