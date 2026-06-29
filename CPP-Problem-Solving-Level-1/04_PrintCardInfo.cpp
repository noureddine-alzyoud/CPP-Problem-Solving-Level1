
#include <iostream>
using namespace std;
struct stinfo
{
    int age;
    bool driverlicense;
};
stinfo readuserinfo()
{
    stinfo info;
    cout << "enter you age  ";
    cin >>info.age;
    cout << "enter if you have  driver license ";
    cin >> info.driverlicense;
    return info;
}
bool isaccepted(stinfo info)
{
    return (info.age >=18 && info.driverlicense);
}
void printresult(stinfo info)
{
    if (isaccepted(info))
        cout << "hired ";
    else
        cout << " rejected";
}


int main()
{
    printresult(readuserinfo());
}
