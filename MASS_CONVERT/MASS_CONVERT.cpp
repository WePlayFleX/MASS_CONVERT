#include <iostream>

using namespace std;

float lbstokg(float);

int main()
{
	/*float lbs, kgs;*/
	float lbs;
	cout << "Enter weight in pounds: ";
	cin >> lbs;
	/*kgs = lbstokg(lbs);*/
	cout << "Weight in kilograms is " << /*kgs*/ lbstokg(lbs) << endl;

	system("pause");
	return 0;
}

float lbstokg(float pounds)
{
	/*float kilograms = 0.453592 * pounds;
	return kilograms;*/
	return 0.453592 * pounds;
}