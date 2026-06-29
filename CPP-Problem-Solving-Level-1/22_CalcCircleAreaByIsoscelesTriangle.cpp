#include<iostream>
#include<cmath>
using namespace std;
float readinput(float& r,float &b)
{
    cout << "enter b "; cin >> b;
    cout << "enter r "; cin >> r;
    return r , b ;
}
float areaof(float r, float b)
{
    const float pi = 3.14;
    float area = pi * (b * b) / 4 * ((2 * r - b) / (2 * r + b));
    return area;
}
void printoutput(float area)
{
    cout << area;

}
int main()
{
    float r, b;
    readinput(r,b);
    float result = areaof(r,b);
    printoutput(result);
}
