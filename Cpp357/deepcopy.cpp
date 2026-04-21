#include <iostream> 
using namespace std;
class Demo {
public:
    int *data;
    Demo(int val) {
        data = new int(val);
    }
    // Deep copy constructor
    Demo(const Demo &other) {
        data = new int(*other.data); // Allocating new memory and copying the value (deep copy)
    }
    ~Demo() {
        delete data; // Freeing the allocated memory
    }
};
int main() {
    Demo d1(10);
    Demo d2 = d1;  // This will create a deep copy of d1

    cout << "d1: " << *d1.data << " " << d1.data << endl; // Output: 10
    cout << "d2: " << *d2.data << " " << d2.data << endl; // Output: 10
    //After chage
    *d1.data = 20;
    cout << "After changing d1's data:" << endl;
    cout << "d1: " << *d1.data << " " << d1.data << endl; // Output: 20
    cout << "d2: " << *d2.data << " " << d2.data << endl; // Output: 10 

    return 0;
} 