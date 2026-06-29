
#include<iostream>
#include<cmath>
using namespace std;
int readage()
{
    int age;
    cout << "enter your age "; cin >> age;
    return age;
}
bool vaildageofuser(int age)
{
    return 18 <= age && age <= 45;
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
    printage(vaildageofuser(readage()));
}
