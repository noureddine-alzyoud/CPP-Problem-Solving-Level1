
#include <iostream>
using namespace std;
float ReadPositiveNumber(string message)
{
	float num = 0;
	do
	{
		cout << message;
		cin >> num;
		if (num < 0)
		{
			cout << "Invalid input Please enter a positive number.\n";
		}

	} while (num < 0);
	return num;
}
void CalcConvertHoursToDaysAndWeek(float num)
{
	float CalcHoursToDays = num / 24;
	float CalcHoursToWeek = num / (24 * 7);
	cout << "Days : " << CalcHoursToDays << "\n";
	cout << "Weeks : " << CalcHoursToWeek << "\n";
}

int main()
{
	CalcConvertHoursToDaysAndWeek(ReadPositiveNumber("Pleaes enter Number of hours : "));
}
