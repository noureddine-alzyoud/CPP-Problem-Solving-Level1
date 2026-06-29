

#include <iostream>
#include<cmath>
using namespace std;
float readinput(float &r)
{
    cout << "enter r "; cin >> r;
    return r;
}
float areaofcircle(float r)
{
    const float pi = 3.14;
    float area = pi * pow(r, 2);
    return area;
}
void printoutput(float area)
{
    cout << area;

}
int main()
{
    float r;
    readinput(r);
    float result = areaofcircle(r);
    printoutput(result);
}
