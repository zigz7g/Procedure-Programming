using namespace std;

#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>

/**
 * \brief Расчет абсолютной суммы. 
 * \param a Первое значение. 
 * \param b Второе значение. 
 * \param c Третье значение.
 * \return Возвращает абсолютную сумму.
*/

double AbsoluteSum(const double a, const double b, const double c);

/**
 * \brief Функция для подсчёта количества отрицательных чисел.
 * \param a Первое значение. 
 * \param b Второе значение. 
 * \param c Третье значение.
 * \return Возвращает количество отрицательных чисел. 
*/

double NegativeNumbers(const double a, const double b, const double c);

/**
 * \brief Точка входа в программу.  
 * \return Возвращает 0 в случае успеха. 
*/

int main()
{
	double FirstValue, SecondValue, ThirdValue;

	cin >> FirstValue >> SecondValue >> ThirdValue;
	cout << NegativeNumbers(FirstValue, SecondValue, ThirdValue) << '\n';
	cout << AbsoluteSum(FirstValue, SecondValue, ThirdValue);

	return 0;
}

double NegativeNumbers(const double a, const double b, const double c)
{
	size_t quantity = 0;

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



double AbsoluteSum(const double a, const double b, const double c)
{
	double sum = fabs(a) + fabs(b) + fabs(c);
	return sum;
}
