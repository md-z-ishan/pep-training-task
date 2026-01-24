#include <iostream>
using namespace std;

int main() {
    int n, original, rev = 0;
    cout << "Enter a number: ";
    cin >> n;

    original = n;

    while (n > 0) {
        int digit = n % 10;
        rev = rev * 10 + digit;
        n = n / 10;
    }

    cout << "Reverse = " << rev << endl;

    if (original == rev)
        cout << original << " is Palindrome Number" << endl;
    else
        cout << original << " is NOT Palindrome Number" << endl;

    return 0;
}
