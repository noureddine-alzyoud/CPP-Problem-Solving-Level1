
#include<iostream>
#include<cmath>
using namespace std;
int readage()
{
    int age;
    cout << "enter your age "; cin >> age;
    return age;
}
bool vaildageofuser(int age , int from , int to )
{
  
    return age >= from && age <= to;
}
int readageuntilagebetween(int from, int to)
{
    bool result;
    int age;
    do {

  age = readage();
        result = vaildageofuser(age, from, to);
    } while (result == !true);
    return age ;
}
void printage(bool vaildageofuser)
{
    if (vaildageofuser == true)
        cout << "vaild age ";
    else
        cout << "invaild age";
}
int main()
{

    int from = 18, to = 60;
    int finalAge = readageuntilagebetween(from, to);
    printage(vaildageofuser(finalAge, from, to));
}
