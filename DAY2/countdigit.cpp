#include <iostream>
using namespace std;

int main() {
    int n, count = 0;
    cout << "Enter a number: ";
    cin >> n;

    while (n > 0) {
        count++;
        n /= 10;
    }

    cout << "Total digits = " << count << endl;
    return 0;
}
