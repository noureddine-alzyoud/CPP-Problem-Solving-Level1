
#include <iostream>
using namespace std;

int ReadInput(string message)
{
	int num; 
	cout << message;
	cin >> num;
	return num;
}

int CalcSumUntil(int num)
{
	if (num == -99)
		return -99;
	else
	{
		int coutner = 1;
		int sum = 0;
		while ( num != -99)
		{
			sum  += num;
			coutner++;
			num = ReadInput("Please enter number : ");
		}
		return sum;
	}
 
}

void PrintOutPut(int sum)
{
	cout << "Result = " << sum;
}

int main()
{
	int num = ReadInput("Please enter number ");
	   PrintOutPut(CalcSumUntil(num));
}
