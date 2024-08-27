#include <iostream>
using namespace std;

int main() {
	cout << "WELCOME TO THE TEMPERATURE CONVERTOR!!" << endl;
	cout << "Enter 1 for Celcius to Fahrenheit and 2 for Fahrenheit to Celsius." << endl;
	int choice;
	float temp, result;
	cin >> choice;
	if(choice == 1) {

		cout << "Enter the temperature in Celcius: ";
		cin >> temp;
		result = (temp * 9 / 5) + 32;
		cout << "That temperature in Fahreinheit is " << result << " degrees." << endl;
	}
    else if (choice == 2) {
	cout << "Enter the temperature in Fahrenheit is: ";
	cin >> temp;
	result = (temp - 32) * 9 / 5;
	cout << "That temperature in Celcius is " << result << " degrees." << endl;
	}
	return 0;
}