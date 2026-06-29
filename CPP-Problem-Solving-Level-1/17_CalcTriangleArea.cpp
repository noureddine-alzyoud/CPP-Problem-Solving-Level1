

#include <iostream>
#include <cmath>
using namespace std;
float readinput(float &a, float &h)
{
	cout << "enter a ";cin >> a;
	cout << "enter h ";cin >> h;
	return a, h;
}
float forarea(float a , float h)
{
	float Areaoftriangle = 0.5 * (a * h);
	return Areaoftriangle;
}
void printoutput(float Areaoftriangle )
{
	cout << Areaoftriangle;

}
int main()
{
	float a, h;
	readinput(a, h);
	float result = forarea(a, h);
	printoutput(result);

}
