#include <iostream>
using namespace std;

int main() {
    int n;
    long long fact = 1;

    cout << "Enter a number: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        fact *= i;
    }

    cout << "Factorial = " << fact << endl;
    return 0;
}
// This program calculates the factorial of a given number using a for loop.