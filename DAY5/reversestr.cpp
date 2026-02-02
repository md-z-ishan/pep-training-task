#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string str = "hello";
    
    reverse(str.begin(), str.end());
    
    cout << "Reversed string: " << str;
    return 0;
}
