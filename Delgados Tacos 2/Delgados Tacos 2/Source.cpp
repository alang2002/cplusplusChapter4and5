#include <iostream>
#include <string>
using namespace std;



int tacoTruck()
{
	cout << "*******************" << endl;
	cout << "*        |        *" << endl;
	cout << "*        |        *" << endl;
	cout << "*        |        *" << endl;
	cout << "*        ---------******" << endl;
	cout << "*                       *" << endl;
	cout << "*                       *" << endl;
	cout << "*                       *" << endl;
	cout << "*************************" << endl;
	cout << "*   *               *   *" << endl;
	cout << "*****               *****" << endl;
	cout << "   /Delgados Tacos\\    " << endl;
	return 0;
}

int menu(int choice)
{
	
	cout << "Here are our items and prices: " << endl;
	cout << "1 - Burritos: $1.00    " << "2 - Tacos:      $0.50" << endl;
	cout << "3 - Churros:  $1.15    " << "4 - Enchiladas: $1.25" << endl;
	cout << "5 - Nachos:   $1.40" << endl;
	cout << "Please enter the number of which item you'd like to order >> ";
	cin >> choice;
	order(choice);
	return choice;
}

int order(int choice)
{
	string orderMore;
	int aOfBurritos = 0;
	int aOfTacos = 0;
	int aOfChurros = 0;
	int aOfEnchiladas = 0;
	int aOfNachos = 0;

	if (choice == 1) {
		cout << "How many burritos would you like? ";
		cin >> aOfBurritos;
		cout << "Is that all you'd like to order today? Yes or No >> ";
		cin >> orderMore;

		if (orderMore == "Yes") {
			menu();
		}
		else {
			total(aOfBurritos, aOfTacos, aOfChurros, aOfEnchiladas, aOfNachos);
		}
	}
	else if (choice == 2) {
		cout << "How many tacos would you like? ";
		cin >> aOfTacos;
		cout << "Is that all you'd like to order today? Yes or No >> ";
		cin >> orderMore;

		if (orderMore == "Yes") {
			menu();
		}
		else {
			total(aOfBurritos, aOfTacos, aOfChurros, aOfEnchiladas, aOfNachos);
		}
	}
	else if (choice == 3) {
		cout << "How many churros would you like? ";
		cin >> aOfChurros;
		cout << "Is that all you'd like to order today? Yes or No >> ";
		cin >> orderMore;

		if (orderMore == "Yes") {
			menu();
		}
		else {
			total(aOfBurritos, aOfTacos, aOfChurros, aOfEnchiladas, aOfNachos);
		}
	}
	else if (choice == 4) {
		cout << "How many enchiladas would you like? ";
		cin >> aOfEnchiladas;
		cout << "Is that all you'd like to order today? Yes or No >> ";
		cin >> orderMore;

		if (orderMore == "Yes") {
			menu();
		}
		else {
			total(aOfBurritos, aOfTacos, aOfChurros, aOfEnchiladas, aOfNachos);
		}
	}
	else if (choice == 5) {
		cout << "How many plates of nachos would you like? ";
		cin >> aOfNachos;
		cout << "Is that all you'd like to order today? Yes or No >> ";
		cin >> orderMore;

		if (orderMore == "Yes") {
			menu();
		}
		else {
			total(aOfBurritos, aOfTacos, aOfChurros, aOfEnchiladas, aOfNachos);
		}
	}

	return 0;
}

double total(int burritos, int tacos, int churros, int enchiladas, int nachos)
{
	double totalCost;
	double burritoPrice = 1.00;
	double tacoPrice = 0.50;
	double churroPrice = 1.15;
	double enchiladaPrice = 1.25;
	double nachosPrice = 1.40;
	double totalCostWithTax;
	double tax = 0.06;

	totalCost = (burritos * burritoPrice) + (tacos * tacoPrice) + (churros * churroPrice) + (enchiladas * enchiladaPrice)
		+ (nachos * nachosPrice);
	totalCostWithTax = (totalCost * tax) + totalCost;
	cout << "Your total is $" << totalCost << ", and after tax (6%) it is now $" << totalCostWithTax << ". Thank you for"
		<< " choosing Delgados Tacos!" << endl;
	return totalCost;
}
int main()
{
	tacoTruck();
	menu();

	system("pause");
	return 0;
}