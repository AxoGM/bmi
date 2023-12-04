/*
made by AxoGM
*/

#include <iostream>
using namespace std;

// calculate bmi
int main()
{
	// background color
	system("color f8");
	
	// input
	double w; // weight (kg)
	double h; // height (m)
	double bmi;
	
	cout << "enter weight (kg): ";
	cin >> w; // input weight
	
	cout << "enter height (m): ";
	cin >> h; // input height
	
	// process
	bmi = (w / (h * h));
	
	// display answer background color
	system("color 3g");
	
	// output
	cout << bmi;
	
	return 0;
}
