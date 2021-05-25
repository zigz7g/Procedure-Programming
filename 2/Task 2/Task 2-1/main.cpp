using namespace std;

#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>
#include <locale>


/**
 * @brief Функция расчета количества негативных чисел.
 * @param a Первое число.
 * @param b Второе число.
 * @param c Третье число.
 * @return Возвращает количество негативных чисел в наборе. 
*/

double NegativeNumbers(double a, double b, double c) 
{
	double quantity = 0.0;

	if (a < 0) {
		quantity++;
	}
	if (b < 0) {
		quantity++;
	}
	if (c < 0) {
		quantity++;
	}
	return quantity;
}

/**
 * @brief Функция расчёта абсолютной суммы.
 * @param a Первое число.
 * @param b Второе число.
 * @param c Третье число.
 * @return Возвращает абсолютную сумму трёх чисел.
*/

double AbsoluteSum(double a, double b, double c) 
{
	double sum = fabs(a) + fabs(b) + fabs(c);
	return sum;
}

/**
 * @brief Точка входа в программу.
 * @return Возвращает нулль в случае успеха
*/

int main()
{
	setlocale(LC_ALL, "Russian");

	double FirstValue, SecondValue, ThirdValue;

	cin >> FirstValue >> SecondValue >> ThirdValue;
	cout << NegativeNumbers(FirstValue, SecondValue, ThirdValue) << '\n';
	cout << AbsoluteSum(FirstValue, SecondValue, ThirdValue);

	return 0;
}