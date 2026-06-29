
#include <iostream>
using namespace std;
int UserMark()
{
	int mark;
	cout << " enter your mark : ";cin >> mark;
	return mark;
}
int VaildOfYourMark(int mark )
{
	do
	{
		UserMark();
	} while (mark < 0 && mark < 100);
	return mark;
}
void PrintTheGrade(int mark)
{
	VaildOfYourMark(mark);
	if (mark >= 90)
		cout << "A";
	else if (mark >= 80)
		cout << "B";
	else if (mark >= 70)
		cout << "C";
	else if (mark >= 60)
		cout << "D";
	else if (mark >= 50)
		cout << "E";
	else
		cout << "F";
}
int main()
{
	PrintTheGrade(UserMark());


}
