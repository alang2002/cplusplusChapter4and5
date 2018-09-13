#include <iostream>
#include <string>
using namespace std;

int main() {
	int triangleType;
	double sideOne;
	double sideTwo;
	string stop;
	

	cout << "Hello user. What kind of triangle are you trying to solve for?" << endl;
	cout << "1 - Right Triangle" << endl;
	cout << "2 - Isosceles Triangle" << endl;
	cout << "3 - Equilateral Triangle" << endl;
	cout << "Please enter the number of the type of triangle >> ";
	cin >> triangleType;

	if (triangleType == 1) {
		
	}
	
	system("pause");
	return 0;
}

double hypotenuse(double sideA, double sideB) {
	return (sideA * sideA) + (sideB * sideB);
}