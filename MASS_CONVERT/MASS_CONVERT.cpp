#include <iostream>

using namespace std;

//float lbstokg(float);

inline float lbstokg(float pounds)
{
	return 0.453592 * pounds;
}

int main()
{
	/*float lbs, kgs;*/
	float lbs;
	cout << "Enter weight in pounds: ";
	cin >> lbs;

	cout << " " << lbstokg(lbs) << endl;

	system("pause");
	return 0;
}

//float lbstokg(float pounds)
//{
//}