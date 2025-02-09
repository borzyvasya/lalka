#include "std_lib_facilities.h"

constexpr double max_temp{ 9569.93 };
constexpr double min_temp{ 459.67 };


int main() {

	double sum = 0;
	double high_temp = max_temp; // initialize to impossibly low
	double low_temp = min_temp; // initialize to “impossibly high”
	int no_of_temps = 0;

	for (double temp; cin >> temp;) { // read temp
		++no_of_temps; // count temperatures
		sum += temp; // compute sum
		if (temp > high_temp) high_temp = temp; // find high
		if (temp < low_temp) low_temp = temp; 
	}

	cout << "High temperature: " << high_temp << '\n';
	cout << "Low temperature: " << low_temp << '\n';
	cout << "Average temperature: " << sum / no_of_temps << '\n';


 	return 0;
}