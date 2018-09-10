#include <iostream>
#include <string>
using namespace std;

int main()
{
	int age;
	string answer;
	string college;
	string retire;
	cout << "Please enter your age: ";
	cin >> age;

	if (age <= 12) {
		answer = "You are a minor";
	}
	else if (age > 13 && age <= 18) {
		answer = "You might be in high school";
	}
	else if (age > 18 && age <= 25) {
		cout << "Did you go to college? Yes or No: ";
		cin >> college;
		if (college == "Yes") {
			answer = "Eating ramen for breakfast, lunch AND dinner!";
		}
		else {
			answer = "Now I'm broke AND can't get a job!";
		}
	}
	else if (age > 25 && age <= 30) {
		answer = "There goes your twenties";
	}
	else if (age > 30 && age <= 40) {
		answer = "Reaching your mid life crisis";
	}
	else if (age > 40 && age <= 50) {
		answer = "Oh how time flies";
	}
	else if (age > 50 && age <= 75) {
		cout << "Will you be retiring soon? Yes or No: ";
		cin >> retire;
		if (retire == "Yes") {
			answer = "Enjoy relaxing and not working for the rest of your life!";
		}
		else {
			answer = "What is WRONG with you?!";
		}
	}
	else if (age > 75) {
		answer = "Well looks like someone is trying to go for the high score";
	}
	cout << answer << endl;
	system("pause");
	return 0;
}