// Christian Parker
// CIS 1202 101
// July 23, 2024

#include <iostream>
#include <string>
#include "Truck.h"
#include "Car.h"

using namespace std;

int main()
{
    string manufac;

    int year;

    int numDoor;

    int cap;

    cout << "Vehicle program " << endl;

    cout << "\nVehicle\n";

    cout << "Enter the manufacturer:  ";

    cin >> manufac;

    cin.ignore();

    cout << "Enter the year built: ";

    cin >> year;

    cin.ignore();

    Vehicle v(manufac, year);

    v.displayInfo();

    cout << "\nCar\n";

    cout << "Enter the manufacturer:  ";

    getline(cin, manufac);

    cout << "Enter the year built: ";

    cin >> year;

    cin.ignore();

    cout << "Enter the number of doors: ";

    cin >> numDoor;

    cin.ignore();

    Car c(manufac, year, numDoor);

    c.displayInfo();

    cout << "\nCar\n";

    cout << "Enter the manufacturer:  ";

    getline(cin, manufac);

    cout << "Enter the year built: ";

    cin >> year;

    cin.ignore();

    cout << "Enter the towing capacity: ";

    cin >> cap;

    cin.ignore();

    Truck t(manufac, year, cap);

    t.displayInfo();

    cout << endl;

    return 0;
}