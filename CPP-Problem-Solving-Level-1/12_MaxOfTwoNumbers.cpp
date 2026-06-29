

#include <iostream>
using namespace std;
int readformtheuser(int &A ,int &B)
{
	cout << "enter number one ";cin >> A;
	cout << "enter number one ";cin >> B;
	return A, B;
}
int maxoftwonumber(int A , int B ) {
	if (A > B)
		return A;
	else
		return B;
}
void printresult(int max)
{
		cout << " the max number of two is " << max;
}
int main()
{
	int A, B;
	readformtheuser(A , B);
	printresult(maxoftwonumber(A,B));

}
