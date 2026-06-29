

#include <iostream>
#include<cmath>
using namespace std;
enum enPrimeOrNotPrime{  Prime = 1 , NotPrime=2 };

int ReadPositiveInput(string message)
{
    int num;
    cout << message;
    cin >> num;
    return num;
}
enPrimeOrNotPrime CheckPrimeNumber(int num)
{
    int counter;
    int n = round(num / 2);
    for (counter = 2; counter <= n;counter++)
    {
        if (num % counter == 0)
            return enPrimeOrNotPrime::NotPrime;
        else
            return enPrimeOrNotPrime::Prime;
    }
}
void PrintPrimeNumber(int num)
{
    switch (CheckPrimeNumber(num))
    {
    case enPrimeOrNotPrime::Prime:
            cout << "it is prime number ";
            break;
    case enPrimeOrNotPrime::NotPrime:
        cout << "it is not prime number";
        break;
    default:
        cout << "there are  something wrong ";
    }


}

int main()
{
    PrintPrimeNumber(ReadPositiveInput("Please enter positive number "));

}
