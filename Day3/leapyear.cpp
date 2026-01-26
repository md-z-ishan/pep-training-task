#include <iostream>
using namespace std;

int main() {
    int year;
    cout << "Enter year: ";
    cin >> year;

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        cout << year << " is a Leap Year";
    else
        cout << year << " is NOT a Leap Year";

    return 0;
}
// This program checks if a given year is a leap year or not.