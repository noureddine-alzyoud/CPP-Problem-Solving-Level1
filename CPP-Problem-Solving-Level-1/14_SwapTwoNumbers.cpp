#include <iostream>
using namespace std;
int readformuser(int &number1 , int &number2 )
{
	cout << "enter number1"; cin >> number1;
	cout << "enter number1"; cin >> number2;
	return number1, number2;
}
int sawppro(int &number1, int &number2)
{
	int temp;
	temp = number1;
	number1 = number2;
	number2 = temp;
	return number1, number2;
}
void printresult(int number1 , int number2)
{
	cout << number1 << "\n";
	cout << number2 << "\n";
}
int main()
{
	int number1, number2;
	readformuser(number1, number2);
	sawppro(number1,number2);
	printresult(number1,number2);


}
