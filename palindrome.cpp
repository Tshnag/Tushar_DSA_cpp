#include <iostream>
using namespace std;

int main()
{
    int n, result = 0, q, rem = 0;
    cout << "Enter any Integer Number: ";
    cin >> n;
    q = n;
    while (q != 0)
    {
        rem = q % 10;
        result = result * 10 + rem;
        q = q / 10;
    }
    if (result == n)
    {
        cout << "Entered number is Palindrome." << endl;
    }
    else
    {
        cout << "Entered number is not Palindrome." << endl;
    }
    return 0;
}