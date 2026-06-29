
#include <iostream>
#include<cmath>
using namespace std;
void readinput(int &num , int &power)
{
	
	cout << "please enter number "; cin >> num;
	cout << "please enter power "; cin >> power;
}
void PowerOfTheNumber(int &num,int &power )
{
	if (power == 0)
		cout << "1";
	else
		cout << pow(num, power);
}
int main()
{
	int num, power;
	readinput(num, power);
	PowerOfTheNumber(num, power);

}
