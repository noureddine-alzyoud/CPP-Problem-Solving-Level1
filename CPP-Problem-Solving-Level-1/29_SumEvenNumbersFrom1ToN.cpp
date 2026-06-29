

#include <iostream>
using namespace std;
enum enEvenOrOdd{odd=1 , even = 2};
int ReadInput() {
    int number;
    cout << " enter number : ";cin >> number;
    return number;
}
enEvenOrOdd CheckEvenOrOdd(int number) {
    if (number % 2 != 0)
        return enEvenOrOdd::odd;
    else
        return enEvenOrOdd::even;
}
int whileloop(int number)
{
    int  sum = 0;
    int counter = 0;
    while (counter < number)
    {
        counter++;
        if (CheckEvenOrOdd(counter) == enEvenOrOdd::even)
        {
            sum += counter;
        }
    }
    return sum;
}
int forloop(int number)
{
    int  sum = 0;
    int counter = 0;
    for (counter = 1; counter <= number; counter++)
    {
        if (CheckEvenOrOdd(counter) == enEvenOrOdd::even)
        {
            sum += counter;
        }
    }
    return sum;
}
int dowhileloop(int number)
{
    int  sum = 0;
    int counter = 0;
  
 
    do
    {
        counter++;
        if (CheckEvenOrOdd(counter) == enEvenOrOdd::even)
        {
            sum += counter;
        }

    } while (counter < number);
    return sum;
}
int main()
{
    int R = ReadInput();
    cout <<  whileloop(R) << "\n";
    cout << dowhileloop(R) << "\n";
    cout << forloop(R) << "\n";
}
