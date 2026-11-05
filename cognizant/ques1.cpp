#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double liters, distance;

    cout << "Enter the no of liters to fill the tank" << endl;
    cin >> liters;

    if (liters <= 0) {
        cout << liters << " is an Invalid Input";
        return 0;
    }

    cout << "Enter the distance covered" << endl;
    cin >> distance;

    if (distance <= 0) {
        cout << distance << " is an Invalid Input";
        return 0;
    }

    double litersPer100Km = (liters / distance) * 100;
    double milesPerGallon = (distance * 0.6214) / (liters * 0.2642);

    cout << fixed << setprecision(2);

    cout << "Liters/100KM" << endl;
    cout << litersPer100Km << endl;

    cout << "Miles/gallons" << endl;
    cout << milesPerGallon << endl;

    return 0;
}