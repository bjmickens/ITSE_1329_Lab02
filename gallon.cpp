//Ben Mickens
//September 4, 2023
//This program will accept an input value in US liquid gallons and output the equivalent values for US measurements in quarts, pints, and fluid ounces.
#include <iostream>

using namespace std;

int main() {
	
	double gallons, quarts, pints, ounces;
	
	cout << "Enter number of gallons: ";
	cin >> gallons; 
	
	quarts = gallons * 4; 
	pints = gallons * 8;
	ounces = gallons * 128;
	
	cout << gallons << " gallons is equal to " << quarts << " quarts, " << pints << " pints, and " << ounces << " fluid ounces." << endl; 
	
	system("PAUSE");
	return 0;
}
