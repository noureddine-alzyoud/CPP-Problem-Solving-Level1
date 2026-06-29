

#include <iostream>
using namespace std;
enum enDaysOfTheWeek{ Sat = 1, Sun = 2, Mon = 3, Tue = 4, Wed = 5, Thu = 6, Fri = 7 };
enDaysOfTheWeek ReadInputFormAndTo(int from, int to)
{
    int num;
    do
    {
        
        cout << "Please enter number between : " << from << " and " << to << "\n";
        cin >> num;
    } while (num < from || num > to);
    return (enDaysOfTheWeek)num;
}
string GetDayOfWeek(enDaysOfTheWeek num)
{

    
    switch (num)
    {
    case enDaysOfTheWeek::Sat:
        return "Saturday";
    case enDaysOfTheWeek::Sun:
        return "Sunday";
    case enDaysOfTheWeek::Mon:
        return "Monday";
    case enDaysOfTheWeek::Tue:
        return "Tuesday";
    case enDaysOfTheWeek::Wed:
        return "Wednesday";
    case enDaysOfTheWeek::Thu:
        return "Thursday";
    case enDaysOfTheWeek::Fri:
        return "Friday";
    default:
        return "Not a valid Day"; 
    }
}
int main()
{
    cout << GetDayOfWeek(ReadInputFormAndTo(1, 7));

}
