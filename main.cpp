#include <iostream>
#include "temp.h"
#include "tempConversion.h"

//Main code file. Contains the actual user interface and inputs. Refer header files for functions

//Variables ('a' and 'b' are used for inputs - 'a' stores the initial units, 'b' stores the final units
int a{};
int b{};
double t{};

int main() {
	//Mode selection
	std::cout << "===========================\nUNIT CONVERTER\n\nSelect Mode: \nTemperature - t\n>> ";
	char mode{};
	std::cin >> mode;
	switch (mode) {
		case 't':
			//Temperature
			std::cout << "Temperature Conversion Selected\n\nEnter input units: \nCelsius - 1,\nFahrenheit - 2,\nKelvin - 3\n>> ";
			std::cin >> a;
			std::cout << "\nEnter units to convert to: \nCelsius - 1, \nFahrenheit - 2, \nKelvin - 3\n>> ";
			std::cin >> b;
			std::cout << "\nEnter temperature: ";
			std::cin >> t;
			//Conversion
				if (a == 1) {
					//Celsius
					celsius(b,t);
				}
				else if (a == 2) {
					//Fahrenheit
					fahrenheit(b, t);
				}
				else if (a == 3) {
					//Kelvin
					kelvin(b, t);
				}
				else
					std::cout << "Invalid Input!";
				break;
		default:
			std::cout << "Invalid Input!";
			return 0;
	}
}
