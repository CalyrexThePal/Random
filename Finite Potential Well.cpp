// Finite Potential Well.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstring>
#include <cstdlib>
#include <iomanip>
#include <cmath>
#include <vector>

using namespace std;


int main()
{
	const long double two_h_bar_times_mass = 26.3;
	double test_increment = 0.001;
	double E = 0; // Quantized energy
	double U; // here is the initial energy value of the finite well
	double L; // width of the well
	vector<double> result;

	cout << "Please enter your Finite Energy Well (eV) and your Width of the Well (nm): ";
	cin >> U >> L;
	cout << "Thank you.\n";
	
	while (E < U) {

		if (((2 * pow((U * E - E * E), 0.50)) / (2 * E - U)) < (tan(pow((two_h_bar_times_mass * E * L * L), 0.50)) + 0.01) && 
			((2 * pow((U * E - E * E), 0.50)) / (2 * E - U)) > (tan(pow((two_h_bar_times_mass * E * L * L), 0.50)) - 0.01)) {

			result.push_back(E);

		}

		E += test_increment;
	}
	
	cout << "Your result comes to: \n";
	for (int i = 0; i < result.size(); i++)
	{
		cout << "Result: " << result[i] << endl;
	}

	cout << "Thank you for using Finite Energy Well Testing Tool.\n";

	return 0;
}
