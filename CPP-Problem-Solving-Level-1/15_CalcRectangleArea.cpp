#include <iostream>
using namespace std;

// تم تحويل الدالة إلى void وتمرير المتغيرات بالمرجع & لتعديل قيمها الأصلية في main
void readformtheuser(int& a, int& b)
{
	cout << "enter a: "; cin >> a;
	cout << "enter b: "; cin >> b;
}

float rectangle(int a, int b)
{
	float Area;
	Area = (float)a * b; // تحويل لأرقام عشرية لضمان دقة الحساب
	return Area;
}

void printarea(float area) // تم تعديل النوع إلى float ليتطابق مع نوع المساحة المحسوبة
{
	cout << " the area is : " << area << endl;
}

int main()
{
	int a, b;

	// 1. نقرأ القيم ونخزنها مباشرة في a و b بفضل الـ Reference
	readformtheuser(a, b);

	// 2. نحسب المساحة بتمرير القيمتين معاً لدالة الحساب
	float resultArea = rectangle(a, b);

	// 3. نطبع النتيجة النهائية
	printarea(resultArea);

	return 0;
}