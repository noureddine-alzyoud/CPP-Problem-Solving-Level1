
#include <iostream>
using namespace std;

enum enOperationType {Add = '+',Subtact = '-', Multiply= '*',Divide = '/' };

float ReadInput(string message)
{
	float num  = 0;
	cout << message;
	cin >> num;
		return num;
}

enOperationType ReadOperation(string message)
{
	char op = '+';
	cout << message;
	cin >> op;
	return  (enOperationType) op;
}

float Calc(float num1 , float num2 , enOperationType op)
{
	switch (op)
	{
	case enOperationType::Add:
			return num1 + num2;
	case enOperationType::Subtact:
		return num1 - num2;
	case enOperationType::Multiply:
		return num1 * num2;
	case enOperationType::Divide:
		if (num2 == 0)
		{
			cout << "error";
			return 0;
		}
		else 
			return num1 / num2;
	default:
		cout << "wrong Operation Type";
		return 0;
	}
}

int main()
{
	float Number1 = ReadInput("Please Enter The First Number : ");
	float Number2 = ReadInput("Please Enter The Secand Number : ");
	enOperationType Operation = ReadOperation("Please Enter Operation Type ( + , - , * , /) : ");
	cout << "Result =" << Calc(Number1, Number2, Operation);
}
