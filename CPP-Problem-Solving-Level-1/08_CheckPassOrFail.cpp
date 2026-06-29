
#include <iostream>
using namespace std;
enum enPassFail { Pass = 1, Fail = 2 };
int ReadMark()
{
    int mark;
    cout << " enter your mark ";
    cin >> mark;
    return mark;
}
enPassFail CheckMark(int mark)
{
    if (mark >= 50)
        return enPassFail::Pass;
    else
        return enPassFail::Fail;
}
void PrintResults(int mark)
{
    if (CheckMark(mark)== enPassFail::Pass)
        cout << " pass";
    else
        cout << " fail ";
}




int main()
{
  

    PrintResults(ReadMark());



}
