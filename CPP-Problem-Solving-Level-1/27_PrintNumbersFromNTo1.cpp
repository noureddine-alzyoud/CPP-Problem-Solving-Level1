#include <iostream>
using namespace std;

int readinput()
{
	int number;
	cout << "please enter a number: ";
	cin >> number;
	return number;
}

int forloop(int number)
{
	int i;
	for (i = number; i >= 1; i--)
	{

		cout << i << "\n";
	}
	return 0;
}

int main()
{
	forloop(readinput());
	return 0;
}