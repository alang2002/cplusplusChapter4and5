#include <iostream>
#include <string>
#include <math.h>
#include "Header.h"
#include "RightTriangle.cpp"
using namespace std;

int main() {
	int triangleType;
	double output;
	string stop;
	char whichSide;

	
		cout << "Hello user. What kind of triangle are you trying to solve for?" << endl;
		cout << "1 - Right Triangle" << endl;
		cout << "2 - Isosceles Triangle" << endl;
		cout << "3 - Equilateral Triangle" << endl;
		cout << "Please enter the number of the type of triangle >> ";
		cin >> triangleType;

		if (triangleType == 1) {
			cout << "Which side are you solving for? (A, B or C) >> ";
			cin >> whichSide;
			output = rightTriangle(whichSide);
			cout << output;
		}
	
	system("pause");
	return 0;
}