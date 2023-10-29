//Ben Mickens
//September 4, 2023
//This program converts a temperature input in degrees Celsius (C) into degrees Fahrenheit (F)

#include <iostream>

using namespace std;

int main() {

double celsius;
double fahrenheit;

cout << "Enter temperature in degrees Celsius: ";
cin >> celsius;
fahrenheit = celsius * 9 / 5 + 32;
cout << celsius << " degrees Celsius equals " << fahrenheit << " degrees Fahrenheit" << endl;
	
	system("PAUSE");
	return 0;
}
