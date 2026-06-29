#include<iostream>
#include<cmath>
using namespace std;
float readinput(float& r)
{
    cout << "enter r "; cin >> r;
    return r;
}
float areaof(float r)
{
    const float pi = 3.14;
    float Areaofthecircleinscribedinsquare = (pi * (r * r)) / 4;
    return Areaofthecircleinscribedinsquare;
}
void printoutput(float area)
{
    cout << area;

}
int main()
{
    float r;
    readinput(r);
    float result = areaof(r);
    printoutput(result);
}
