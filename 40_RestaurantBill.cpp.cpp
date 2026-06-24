#include<iostream>
#include<cmath>
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
float CalculateTotalBill(float before)
{
	const float ServiceFee = 1.1;
	const float SalesTaxs = 1.16;
	float AfterTotalBill = before * SalesTaxs * ServiceFee;
	return AfterTotalBill;
}
void PrintTheTotalBill(float AfterTotalBill)
{
	cout << "The total bill is :  " << AfterTotalBill;
}
int main()
{
	float TotalBillBeforeSalesTaxsAndServiceFee = ReadPositiveNumber("Please Enter the total bill : ");
	PrintTheTotalBill(CalculateTotalBill(TotalBillBeforeSalesTaxsAndServiceFee));
}