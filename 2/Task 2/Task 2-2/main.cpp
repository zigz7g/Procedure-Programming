using namespace std;
#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>
#include <locale>

/**
 * @brief ������� ������� ������� ��� �>=0.5.
 * @param a ���������.
 * @param x ����������.
 * @return ���������� �������� �������.
*/

double FirstFunction(double a, double x) 
{
	double function = M_PI / 2 + x * a - pow(M_E, a * x);
	return function;
}

/**
 * @brief ������� ������� ������� ��� �<0.5.
 * @param a ���������.
 * @param x ����������.
 * @return ���������� �������� �������.
*/

double SecondFunction(double a, double x) {
	double function = pow(x, 3) * a + 28;
	return function;
}

/**
 * @brief ����� ����� � ���������.
 * @return ���������� ����� � ������ ������.
*/

int main()
{
	setlocale(LC_ALL, "Russian");

	double Value = 1.36;
	double Variable;

	cin >> Variable;
	
	if (Variable >= 0.5) {
		cout << FirstFunction(Value, Variable);
	}
	if (Variable < 0.5) {
		cout << SecondFunction(Value, Variable);
	}
	return 0;
}