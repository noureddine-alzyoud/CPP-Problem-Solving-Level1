#include <iostream>
using namespace std;
float ReadPositiveNumber(string Message)
{
    float Number = 0;
    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);

    return Number;
}
float MonthlyInstallment(float LoanAmount, float TotalMonths)
{
    return LoanAmount / TotalMonths;
}
int main()
{
    float LoanAmount = ReadPositiveNumber("Please Enter The Loan Amount : ");
    float TotalMonths = ReadPositiveNumber("Please Enter Total Months : ");
    cout << "Total MonthlyInstallment is : " << MonthlyInstallment(LoanAmount, TotalMonths);
}
