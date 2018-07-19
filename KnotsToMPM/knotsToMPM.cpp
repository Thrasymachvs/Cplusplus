/*
Author     : Christopher Christian (ID# 52697582)
Date       : 10/8/2015
*/

double knotsToMPM(int knot) {
	double knotMinute = knot*6076.0/60;
	double mileMinute = knotMinute / 5280.0;
	return mileMinute;
}

#include <iostream>
using namespace std;

int main() {
	int knots;
	cout << "Enter the amount of knots: ";
	cin >> knots; 
	cout << "In Miles per minute: " << knotsToMPM(knots) << "MPM\n";

	return 0;
}