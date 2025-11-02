#include <iostream>
#include "temp.h"
#include "tempConversion.h"

//this file stores functions that help decide what conversion function to execute (Refer temp.cpp for all conversion functions)

void kelvin(int b, double t) {
	//ensuring no negative kelvin input
	if (t < 0)
		std::cout << "Temperature in kelvin cannot be below zero. Invalid Input";
	else
		#define KELVIN

	#ifdef KELVIN
	switch (b) {
	case 1:
		//converted to celsius
		std::cout << kelvinCelsius(t);
		break;
	case 2:
		//converted to fahrenheit
		std::cout << kelvinFahrenheit(t);
		break;
	case 3:
		//converted to kelvin
		std::cout << t;
		break;
	default:
		std::cout << "Invalid Input!";
		break;
	}
	#endif
}
void celsius(int b, double t) {
	//ensuring no invalid celsius input
	if (t < 0)
		std::cout << "Temperature in celsius cannot be below -273. Invalid Input";
	else
		#define KELVIN
	switch (b) {
	case 1:
		//converted to celsius
		std::cout << t;
		break;
	case 2:
		//converted to fahrenheit
		std::cout << celsiusFahrenheit(t);
		break;
	case 3:
		//converted to kelvin
		std::cout << celsiusKelvin(t);
		break;
	default:
		std::cout << "Invalid Input!";
		break;
	}
}
void fahrenheit(int b, double t){
	switch (b) {
	case 1:
		//converted to celsius
		std::cout << fahrenheitCelsius(t);
		break;
	case 2:
		//converted to fahrenheit
		std::cout << t;
		break;
	case 3:
		//converted to kelvin
		std::cout << fahrenheitKelvin(t);
		break;
	default:
		std::cout << "Invalid Input!";
		break;
	}
}