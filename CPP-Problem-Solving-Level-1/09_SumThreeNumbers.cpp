
#include <iostream>
using namespace std;
struct stforread  {
	int num1, num2, num3;
};
stforread readuser(stforread &read )
{
	cout << "enter num1";cin >> read.num1;
	cout << "enter num2";cin >> read.num2;
	cout << "enter num3";cin >> read.num3;
	return read;
}
int sumofthreenumber(stforread read){

	int sum = read.num1 + read.num2 + read.num3;
	return sum;
}
void printsum(int sum )
{
	cout << "sum of three number is " << sum;
}
int main()
{
	stforread read;
	printsum((sumofthreenumber(readuser(read))));

}
