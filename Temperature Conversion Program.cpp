#include <iostream>
using namespace std;

// Function prototypes
double celsiusToFahrenheit(double celsius);
double celsiusToKelvin(double celsius);
double fahrenheitToCelsius(double fahrenheit);
double fahrenheitToKelvin(double fahrenheit);
double kelvinToCelsius(double kelvin);
double kelvinToFahrenheit(double kelvin);

int main() {
    double temperature;
    char originalUnit;

    // Prompt user for input
    cout << "Enter the temperature value: ";
    cin >> temperature;
    cout << "Enter the original unit of measurement (C, F, or K): ";
    cin >> originalUnit;

    // Variables to store converted temperatures
    double tempCelsius, tempFahrenheit, tempKelvin;

    // Convert based on original unit of measurement
    switch (originalUnit) {
        case 'C':
        case 'c':
            tempCelsius = temperature;
            tempFahrenheit = celsiusToFahrenheit(tempCelsius);
            tempKelvin = celsiusToKelvin(tempCelsius);
            break;
        case 'F':
        case 'f':
            tempFahrenheit = temperature;
            tempCelsius = fahrenheitToCelsius(tempFahrenheit);
            tempKelvin = fahrenheitToKelvin(tempFahrenheit);
            break;
        case 'K':
        case 'k':
            tempKelvin = temperature;
            tempCelsius = kelvinToCelsius(tempKelvin);
            tempFahrenheit = kelvinToFahrenheit(tempKelvin);
            break;
        default:
            cout << "Invalid unit of measurement entered. Please enter C, F, or K." << endl;
            return 1;
    }

    // Display results
    cout << "Temperature in Celsius: " << tempCelsius << " C" << endl;
    cout << "Temperature in Fahrenheit: " << tempFahrenheit << " F" << endl;
    cout << "Temperature in Kelvin: " << tempKelvin << " K" << endl;

    return 0;
}

// Conversion functions
double celsiusToFahrenheit(double celsius) {
    return celsius * 9.0 / 5.0 + 32.0;
}

double celsiusToKelvin(double celsius) {
    return celsius + 273.15;
}

double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32.0) * 5.0 / 9.0;
}

double fahrenheitToKelvin(double fahrenheit) {
    return (fahrenheit + 459.67) * 5.0 / 9.0;
}

double kelvinToCelsius(double kelvin) {
    return kelvin - 273.15;
}

double kelvinToFahrenheit(double kelvin) {
    return kelvin * 9.0 / 5.0 - 459.67;
}
