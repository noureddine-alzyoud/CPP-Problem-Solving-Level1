
#include <iostream>
#include<string>
#include <cmath>
using namespace std;
int readinput(int &a , int &b)
{
  
    cout << "enter a"; cin >> a;
    cout << "enter b"; cin >> b;
    return a, b;
}
float rectangle(int a , int b)
{
    
    float area = a * (sqrt(pow(b, 2) - pow(a, 2)));
    return area;
}
void printoutput(float area )
{
    cout << "area is " << area;
}
int main()
{
    int a, b;
    readinput(a, b);
    float result = rectangle(a, b);
    printoutput(result);
}

