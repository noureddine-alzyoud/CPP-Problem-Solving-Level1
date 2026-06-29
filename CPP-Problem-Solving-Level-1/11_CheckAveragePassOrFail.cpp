#include <iostream>
using namespace std;
struct stforread {
	int num1, num2, num3;
};
enum passfail {pass = 1 , fail=0 };
stforread readuser(stforread& read)
{
	cout << "enter num1";cin >> read.num1;
	cout << "enter num2";cin >> read.num2;
	cout << "enter num3";cin >> read.num3;
	return read;
}
int sumofthreenumber(stforread read) {

	int sum = read.num1 + read.num2 + read.num3;
	return sum;
}
float calculateaverage(int sum)
{
	float average = (float)sum / 3;
	return average;
}
passfail checkpassfail(float average )
{
	if (average < 50)
		return passfail::pass;
	else
		return passfail::fail;
}
void printpassfail(float average)
{

	if (checkpassfail(average) == 1)
		cout << "pass";
	else
		cout << "fail";
}
int main()
{
	stforread read;
	printpassfail(calculateaverage(sumofthreenumber(readuser(read))));

}
