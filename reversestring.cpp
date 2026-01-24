#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string s, rev;
    cout << "Enter a string: ";
    cin >> s;

    rev = s;
    reverse(rev.begin(), rev.end());

    cout << "Reverse = " << rev << endl;

    if (s == rev)
        cout << s << " is Palindrome String" << endl;
    else
        cout << s << " is NOT Palindrome String" << endl;

    return 0;
}
