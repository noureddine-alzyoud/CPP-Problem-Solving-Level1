
#include <iostream>
#include<string>
using namespace std;
int readinfo()
{
	int num;
	cout << "enter number : ";
	cin >> num;
	return num;
}
float CalculateHalfNumber(int num)
{
	return (float)num / 2;
}
void PrintHalfNumber(int num)
{
	cout << "Half of " + to_string(num) + "is " + to_string(CalculateHalfNumber(num));
}
int main()
{
  
	PrintHalfNumber(readinfo());



}
