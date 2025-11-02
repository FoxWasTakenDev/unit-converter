#include <iostream>
//Temperature Conversion Files

double celsiusKelvin(double c){
	return c + 273;
}
double kelvinCelsius(double k) {
	return k - 273;
}
double celsiusFahrenheit(double c) {
	return 9 * c / 5 + 32;
}
double fahrenheitCelsius(double f) {
	return 5*(f-32)/9;
}
double fahrenheitKelvin(double f) {
	double c{ fahrenheitCelsius(f) };
	return celsiusKelvin(c);
}
double kelvinFahrenheit(double k) {
	double c{ kelvinCelsius(k) };
	return celsiusFahrenheit(c);
}