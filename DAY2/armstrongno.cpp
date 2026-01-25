#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, original, sum = 0;
    cout << "Enter a number: ";
    cin >> n;

    original = n;

    while (n > 0) {
        int digit = n % 10;
        sum += pow(digit, 3);
        n /= 10;
    }

    if (sum == original)
        cout << original << " is Armstrong Number";
    else
        cout << original << " is NOT Armstrong Number";

    return 0;
}
// This program checks if a given number is an Armstrong number or not.