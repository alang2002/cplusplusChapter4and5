#include "Header.h"
#include <string>
#include <iostream>
#include <math.h>
#include "Source.cpp"
using namespace std;

double solveForA(double sideB, double sideC);
double solveForB(double sideA, double sideC);

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
		return result;
	}
	else if (whichSide == 'B') {
		cout << "Enter length for side A >> ";
		cin >> sideOne;
		cout << "Enter length for side C >> ";
		cin >> sideTwo;
		result = solveForB(sideOne, sideTwo);
		return result;
	}
	else if (whichSide == 'C') {
		cout << "Enter length for side A >> ";
		cin >> sideOne;
		cout << "Enter length for side B >> ";
		cin >> sideTwo;
		result = hypot(sideOne, sideTwo);
		return result;
	}
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