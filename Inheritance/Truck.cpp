#include <iostream>

#include "Truck.h"

using namespace std;

Truck::Truck() : Vehicle() {}

Truck::Truck(string m, int y, int t): Vehicle(m, y), tow_cap(t) {}

int Truck::getTowCap()
{
	return tow_cap;
}

void Truck::setTowCap(int t)
{
	tow_cap = t;
}

void Truck::displayInfo()
{
	Vehicle::displayInfo();

	cout << "Tow Capacity: " << tow_cap << endl;
}
