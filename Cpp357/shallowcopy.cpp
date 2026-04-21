// #include <iostream>
// using namespace std;
// class ShallowCopy
// {
// public:
//     int *data;
//     ShallowCopy(int value)
//     {
//         data = new int(value);
//     }
//     // Shallow copy constructor
//     ShallowCopy(const ShallowCopy &other)
//     {
//         data = other.data; // Copying the pointer (shallow copy)
//     }
//     ~ShallowCopy()
//     {
//         delete data; // This will cause issues if multiple objects share the same pointer
//     }
// };
// int main()
// {
//     ShallowCopy obj1(10);
//     ShallowCopy obj2 = obj1;                                         // This will create a shallow copy of obj1
//     cout << "obj1 data: " << *obj1.data << " " << obj1.data << endl; // Output: 10
//     cout << "obj2 data: " << *obj2.data << " " << obj2.data << endl; // Output: 10
//     return 0;
// }

#include <iostream>
using namespace std;

class Demo {
public:
    int *data;

    Demo(int val) {
        data = new int(val);
    }
};

int main() {
    Demo d1(10);
    Demo d2 = d1;  // Shallow Copy (default)

    cout << "d1: " << *d1.data << " " << d1.data << endl;
    cout << "d2: " << *d2.data << " " << d2.data << endl;

    return 0;
}