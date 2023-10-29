//Ben Mickens
//September 4, 2023
//This program takes a number of days as input and outputs the number of equivalent hours
#include <iostream>

using namespace std;

int main() {
	
	double days, hours; 
	
	cout << "Enter the number of days: ";
	cin >> days;
	hours = days * 24.0;
	cout << days << " days is the same as " << hours << " hours." <<endl;
	system("PAUSE");
	return 0;
}
