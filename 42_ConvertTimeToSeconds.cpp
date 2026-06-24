
#include <iostream>
using namespace std;
struct strTaskDuration
{
	float NumberOfDays, NumberOfHours, NumberOfMinutes, NumberOfSeconds;
};
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
float CalcConvertHoursAndDaysAndWeekForSecond(strTaskDuration taskduration)
{
	float CalcDaysToSeconds = taskduration.NumberOfDays * 24 * 60 * 60;
	float CalcHourstoSeconds = taskduration.NumberOfHours * 60 * 60;
	float CalcMinutestoSeconds = taskduration.NumberOfMinutes * 60;
	float CalcSecondstoSeconds = taskduration.NumberOfSeconds;
	float ConvertAllToSeconds = CalcDaysToSeconds + CalcHourstoSeconds + CalcMinutestoSeconds + CalcSecondstoSeconds ;
	return ConvertAllToSeconds;
}
int main()
{
	strTaskDuration TaskDuration;
	TaskDuration.NumberOfDays = ReadPositiveNumber("Please enter number of days : ");
	TaskDuration.NumberOfHours = ReadPositiveNumber("Please enter number of Hours : ");
	TaskDuration.NumberOfMinutes = ReadPositiveNumber("Please enter number of Minutes : ");
	TaskDuration.NumberOfSeconds = ReadPositiveNumber("Please enter number of Seconds : ");
	cout <<  CalcConvertHoursAndDaysAndWeekForSecond(TaskDuration) << " Seconds";

}
