// Includes need to be at the top
#include "stdafx.h"
#include <iostream>
#include <iomanip>

// Namespace is after #includes
using namespace std;

const double PI = 3.1419;

// Must prototype methods prior to writing them out.
double rectangle(double l, double w);
double circle(double r);
double cylinder(double bR, double h);


int main()
{
	double radius;
	double height;
	double length;
	double width;
	int choice;

	cout << fixed << showpoint << setprecision(2);
	cout << "This program can calculate the area of a rectangle, the area of a circle, or the volume of a cylinder." << endl;
	cout << "To run the program, enter: " << endl;
	cout << endl << "1: To find the area of a rectangle." << endl;
	cout << "2: To find the area of a circle." << endl;
	cout << "3: To find the volume of a cylinder." << endl;
	cout << "-1: To terminate the program." << endl;
	cin >> choice;
	cout << endl;

	while (choice != -1)
	{
		switch (choice)
		{
		case 1:
			cout << "Enter the length and the width of the rectangle (Format: 1 2):";
			cin >> length >> width;
			cout << endl;
			cout << "Area = " << rectangle(length, width) << endl;
			break;
		case 2:
			cout << "Enter the radius of the circle (Format: 1): ";
			cin >> radius;
			cout << endl;
			cout << "Area = " << circle(radius) << endl;
			break;
		case 3:
			cout << "Enter the radius of the base and the height of the cylinder (Format: 1 1): ";
			cin >> radius >> height;
			cout << endl;
			cout << "Area = " << cylinder(radius, height) << endl;
			break;
		default:
			cout << "Invalid choice." << endl;
			break;
		}
		
		cout << endl;
		cout << "1: To find the area of a rectangle." << endl;
		cout << "2: To find the area of a circle." << endl;
		cout << "3: To find the volume of a cylinder." << endl;
		cout << "-1: To terminate the program." << endl;
		cin >> choice;
	}

    return 0;
}

double rectangle(double l, double w)
{
	return l * w;
}

double circle(double r)
{
	return PI * r * r;
}

double cylinder(double bR, double h)
{
	return PI * bR * bR * h;
}

