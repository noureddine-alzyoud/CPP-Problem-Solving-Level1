

#include <iostream>
#include <string>
using namespace std;
string readname()
{
	string name;
	cout << "enter your name :";
	getline(cin, name);
	return name;
}
void printname(string name)
{
	cout << "your name is " << name;
}
int main()
{
	printname(readname());

}
