using namespace std;
#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>
#include <locale>

/// @brief Расчёт первой функции.
/// @param a Параметр.
/// @param x Переменная.
/// @return Возвращает значение первой функции.

double FirstFunction(double a, double x);

/// @brief Расчёт второй функции.
/// @param a Параметр.
/// @param x Переменная.
/// @return Возвращает значение второй функции.

double SecondFunction(double a, double x);

/// @brief Точка входа в программу.
/// @return Возврращает 0 в случае успеха.

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

double FirstFunction(double a, double x)
{
	double function = M_PI / 2 + x * a - pow(M_E, a * x);
	return function;
}

double SecondFunction(double a, double x) {
	double function = pow(x, 3) * a + 28;
	return function;
}
