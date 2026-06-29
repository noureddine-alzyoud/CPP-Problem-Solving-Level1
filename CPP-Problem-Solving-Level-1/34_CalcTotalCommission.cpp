
#include <iostream>
using namespace std;
float ReadTotalSales()
{
	float totalsales;
	cout << "enter your total sales :  ";cin >> totalsales;
	return	totalsales;
}
float GetCommissionPercentage(float TotalSales)
{
    if (TotalSales >= 1000000)
        return 0.01; 
    else if (TotalSales >= 500000)
        return 0.02;
    else if (TotalSales >= 100000)
        return 0.03;
    else if (TotalSales >= 50000)
        return 0.05;
    else
        return 0.00;
}
float CalcTotalCommission(float TotalSales)
{
  return  TotalSales * GetCommissionPercentage(TotalSales);
}
int main()
{
  
    cout << endl << "Commission Percentage = " << GetCommissionPercentage(ReadTotalSales()) * 100 << "%" << endl;
    cout << endl << "Total Commission = " << CalcTotalCommission(ReadTotalSales()) << endl;


}
