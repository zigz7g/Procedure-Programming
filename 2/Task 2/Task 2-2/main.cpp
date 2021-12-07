using namespace std;
#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>
#include <locale>

/**
 * \brief Расчёт первой функции.
 * \param a Параметр.
 * \param x Переменная. 
 * \return Возвращает значение первой функции.
*/

double FirstFunction(const double a, const double x);

/**
 * \brief Расчёт второй функции. 
 * \param a Параметр.
 * \param x Переменная.
 * \return Возвращает значение второй функции.
*/

double SecondFunction(const double a, const double x);

/**
 * \brief Точка входа в программу. 
 * \return Возврращает 0 в случае успеха.
*/

int main()
{
	setlocale(LC_ALL, "Russian");

	double Value = 1.36;
	double Variable;

	cout << "Введите значение переменной" << endl;
	cin >> Variable;

	if (Variable >= 0.5) {
		cout << FirstFunction(Value, Variable);
	}
	if (Variable < 0.5) {
		cout << SecondFunction(Value, Variable);
	}
	return 0;
}

double FirstFunction(const double a, const double x)
{
	double function = M_PI / 2 + x * a - exp(a * x);
	return function;
}

double SecondFunction(const double a, const double x) {
	double function = pow(x, 3) * a + 28;
	return function;
}
