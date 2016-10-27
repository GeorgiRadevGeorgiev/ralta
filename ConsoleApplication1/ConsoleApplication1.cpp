// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>

using namespace std;

int main()


	    /*int x;
		cout << "Input x = " << endl;
		cin >> x;
		if (x > 0)
			cout << "x is positive" << endl;
		else if (x < 0)
			cout << "x is negative" << endl;
		else
			cout << "x is 0" <<endl;
			*/

	/*double a, b, c;
	cout << "Input side a = ";
	cin >> a;
	cout << "Input side b = ";
	cin >> b;
	cout << "Input side c = ";
	cin >> c;
	if ((a + b > c) && (a + c > b) && (c + b > a)) {
		cout << "such triangle exixsts" << endl;
		if (a == b && a!=c)
			cout << "the triangle is an isosceles one" << endl;
		else if (a == b &&  b == c)
			cout << "the triangle is an equilateral one" << endl;
		else 
			cout << "the triangle is s scalene one" << endl;
	}
	else
		cout << "such triangle doesnt exist" << endl;
	*/

   
	double a, b, c, D, x1, x2;
	cout << "Input a = ";
	cin >> a;
	cout << "Input b = ";
	cin >> b;
	cout << "Input c = ";
	cin >> c;
	D = ((b * b) - (4 * a * c));
	cout << "diskriminanta = " << D << endl;
	if (a == 0) {
		if (b == 0) {
			if (c == 0) {
				cout << "vsqko x" << endl;
			}
			else {
				cout << "nyama reshenie" << endl;
			}
		else {
			x1 = -b / c;
		}

		}
	}
	else {
	
	if (D < 0) {
		cout << "nyama reshenie" << endl;
	}
	else if (D == 0) {
		x1 = -b / 2*a;
		cout << "ima samo edno reshenie : " << x1 << endl;
	}
	else if (D > 0) {
		x1 = (-b + sqrt(D)) / 2 * a;
		x2 = (-b - sqrt(D)) / 2 * a;
		cout << "X1 = " << x1 << endl;
		cout << "X2 = " << x2 << endl;
	}

		system ("pause");

    return 0;
}

