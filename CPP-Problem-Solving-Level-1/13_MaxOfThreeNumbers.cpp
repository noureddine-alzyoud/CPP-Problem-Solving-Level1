

#include <iostream>
using namespace std;
int readformtheuser(int& A, int& B , int &C)
{
	cout << "enter number A ";cin >> A;
	cout << "enter number B ";cin >> B;
	cout << "enter number C ";cin >> C;
	return A, B , C;
}
int maxofthreenumber(int A, int B , int C) {
	if (A > B && A > C)
		return A;
	if (A < B && B > C)
		return B;
	if (C > B && A< C)
		return C;
}
void printresult(int max)
{
	cout << " the max number of three is " << max;
}
int main()
{
	int A, B , C;
	readformtheuser(A, B , C);
	printresult(maxofthreenumber(A, B , C));

}
