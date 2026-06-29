
#include <iostream>
using namespace std;
int ReadPositiveNumber(string message )
{
    int num;
    do
    {
        cout << message;
        cin >> num;

    } while (num < 0);
        return num;
}
int CalcFactorial(int num)
{
    int F = 1 ;
    int counter = 1;
    for (counter = 1 ; counter <= num ;counter++)
    {
        F  *=  counter;
    }
    return F;
}
void printoutput(int F) {
    cout << "factorial of your number is :  " << F;
}
int main()
{
    printoutput(CalcFactorial(ReadPositiveNumber("pleas enter Positive number : ")));
}
