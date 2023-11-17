#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>

using namespace std;

// Function to generate a random 4-digit number with unique digits (1-6)
string generateRandomNumber() {
    string number;
    while (true) {
        number = "";
        bool isUnique = true;
        for (int i = 0; i < 4; i++) {
            int digit = rand() % 6 + 1; // Generate a random digit between 1 and 6
            number += to_string(digit);
            int count = 0;
            for (char& c : number) {
                if (c == number[i]) {
                    count++;
                }
            }
            if (count > 2) {
                isUnique = false;
                break;
            }
        }
        if (isUnique) {
            break;
        }
    }
    return number;
}

// Function to generate a random series (two characters)
string generateRandomSeries() {
    string series;
    const string chars = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    for (int i = 0; i < 2; i++) {
        series += chars[rand() % chars.length()];
    }
    return series;
}

int main() {
    srand(time(0)); // Seed the random number generator

    // Input state and city codes from the user
    string state_code, city_code;
    cout << "Enter your state code: ";
    cin >> state_code;
    cout << "Enter your city code: ";
    cin >> city_code;

    // Generate a random number and series
    string random_number = generateRandomNumber();
    string random_series = generateRandomSeries();

    // Construct the vehicle plate number
    string plate_number = state_code + " " + city_code + " " + random_series + " " + random_number;

    // Print the generated vehicle plate number
    cout << "Generated vehicle plate number: " << plate_number << endl;

    return 0;
}