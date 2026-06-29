
#include <iostream>
using namespace std;
struct stinfo
{
	string firstname, lastname;
};
stinfo readinfo()
	{
	stinfo info;
	cout << "enter your first name : ";
	cin >> info.firstname;
	cout << "enter your last name : ";
	cin >> info.lastname;
	return info;
	}
string getfullname (stinfo info , bool reverse)
{
	string fullname;
	if (reverse)
		fullname = info.lastname + " " + info.firstname;
	else
	fullname = info.firstname + " " + info.lastname;
	return fullname;
}
void printfullname(string fullname)
{
	cout << " your full name is " << fullname;
}

int main()
{

	printfullname(getfullname(readinfo(),true ));


}
