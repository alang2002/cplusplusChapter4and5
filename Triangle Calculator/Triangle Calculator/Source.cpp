// Author: Aaron Lang
// 9/18/18
#include <iostream>
#include <string>
#include <math.h>
using namespace std;
double perimeter;
double area;

void setPerimeter(double sideA, double sideB, double sideC) {
	perimeter = sideA + sideB + sideC;
}

void setRightArea(double sideA, double sideB) {
	area = (sideA * sideB) / 2;
}

void setIsocelesArea(double sideB, double height) {
	area = (sideB * height) / 2;
}

double getPerimeter() {
	return perimeter;
}

double getArea() {
	return area;
}

double solveForA(double sideB, double sideC) {
	double newSideB = sideB * sideB;
	double newSideC = sideC * sideC;
	double sideA = newSideC - newSideB;
	return sqrt(sideA);
}

double solveForB(double sideA, double sideC) {
	double newSideA = sideA * sideA;
	double newSideC = sideC * sideC;
	double sideB = newSideC - newSideA;
	return sqrt(sideB);
}

double rightTriangle(char whichSide) {
	double sideOne;
	double sideTwo;
	double result;

	if (whichSide == 'A') {
		cout << "Enter length for side B >> ";
		cin >> sideOne;
		cout << "Enter length for side C >> ";
		cin >> sideTwo;
		result = solveForA(sideOne, sideTwo);
		setPerimeter(result, sideOne, sideTwo);
		setRightArea(result, sideOne);
		return result;
	}
	else if (whichSide == 'B') {
		cout << "Enter length for side A >> ";
		cin >> sideOne;
		cout << "Enter length for side C >> ";
		cin >> sideTwo;
		result = solveForB(sideOne, sideTwo);
		setPerimeter(sideOne, result, sideTwo);
		setRightArea(sideOne, result);
		return result;
	}
	else if (whichSide == 'C') {
		cout << "Enter length for side A >> ";
		cin >> sideOne;
		cout << "Enter length for side B >> ";
		cin >> sideTwo;
		result = hypot(sideOne, sideTwo);
		setPerimeter(sideOne, sideTwo, result);
		setRightArea(sideOne, sideTwo);
		return result;
	}
}

double isoscelesTriangle() {
	double sideOne;
	double sideTwo;
	double result;

	cout << "Enter side A length: ";
	cin >> sideOne;
	cout << "Enter side B length: ";
	cin >> sideTwo;

	result = (sideOne * sideOne) - ((sideTwo * sideTwo) / 4);
	result = sqrt(result);
	setPerimeter(sideOne, sideOne, sideTwo);
	setIsocelesArea(sideTwo, result);
	return result;
}

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
			cout << "Your missing side has a length of: " << output << endl;
			cout << "Perimeter is: " << getPerimeter() << endl;
			cout << "Area is: " << getArea() << endl;
		}
		else if (triangleType == 2) {
			output = isoscelesTriangle();
			cout << "Your height is: " << output << endl;
			cout << "Perimeter is: " << getPerimeter() << endl;
			cout << "Area is: " << getArea() << endl;
		}
	
	system("pause");
	return 0;
}