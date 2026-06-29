
#include <iostream>
#include <string>
using namespace std;
enum entypeofnumber {even = 2 , odd = 1 };
int readnumber() {
	int num;
	cout << "enter your number ";
	cin >> num;
	return num;
}
entypeofnumber checknumbertype(int num )
{
	int result = num % 2;
	if (result == 0)
		return entypeofnumber::even;
	else
		return entypeofnumber::odd;
}
void printnumbertype(entypeofnumber numbertype )
{
	if (numbertype == entypeofnumber::even)
		cout << "number type is even "  << "\n";
	else
		cout << "number type is  odd "  << "\n";
 }
int main()
{
	printnumbertype(checknumbertype(readnumber()) );




}
