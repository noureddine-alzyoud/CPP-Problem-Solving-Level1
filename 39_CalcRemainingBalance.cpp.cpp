
#include <iostream>
#include<cmath>
using namespace std;

int ReadPositiveNumber(string message)
{
	int num = 0;
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
int CalculateTheRemainder(int totalbill, int cashpaid)
{
	int TotalOfTheRemainder;
	if (cashpaid < totalbill)
	{
		cout << "Wrong amount of money ";
		return 0;
	}
	else
	return TotalOfTheRemainder = abs(totalbill - cashpaid);
}
void PrintTheRemainder(int totaloftheremainder)
{
	cout << "The total of the remainder is :  " << totaloftheremainder;
}
int main()
{
	int TotalBill = ReadPositiveNumber("Please Enter the total bill : ");
	int CashPaid = ReadPositiveNumber("Please Enter the Cash Paid : ");
	PrintTheRemainder(CalculateTheRemainder(TotalBill, CashPaid));



}
