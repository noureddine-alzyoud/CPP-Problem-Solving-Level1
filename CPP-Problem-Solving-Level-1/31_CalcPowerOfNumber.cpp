
#include <iostream>
using namespace std;
int readinput()
{
	int num;
	cout << "please enter number "; cin >> num;
	return num;
}
void PowerOfTheNumber( int num, int &p2,int &p3,int &p4)
{
	 p2 = num * num;
		 p3 = p2 * num;
		 p4 = p2 * p2;
}
void printoutput( int p2, int p3, int p4)
{
	
	cout << "Power of the number (2) is : " << p2 << "\n";
	cout << "Power of the number (3) is : " << p3 << "\n";
	cout << "Power of the number (4) is : " << p4 << "\n";
}
int main()
{
	int p2, p3, p4;
	 int num =	readinput();
	PowerOfTheNumber(num ,p2, p3, p4);
	printoutput( p2 , p3,  p4);


}
