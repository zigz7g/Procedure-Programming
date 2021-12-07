using namespace std;

#define _USE_MATH_DEFINES

#include <cmath>
#include <iostream>

/**
 * \brief Функция для расчеты суммы членов последовательности, которые меньше заданного числа.
 * \param n Предел последовательности.
 * \param e Заданное число.
 * \return Возвращает сумму членов последовательности, которые меньше заданного числа.
*/

double SequenceNumber(const int n, const double e);

/**
 * \brief Функция для расчёта суммы последовательности.
 * \param n Предел последовательности.
 * \return Возвращает сумму всех членов данной последовательности.
*/

double SequenceSum(const int n);

/**
 * \brief Точка входа в программу.
 * \return Возвращает нуль в случае успеха.
*/

int main()
{
	setlocale(LC_ALL, "Russian");

	double Sequence, Value;

	cout << "Введите до какого числа производить сумму" << endl;
	cin >> Sequence;
	cout << "Введите число, больше которого будут складываться числла в прогрессии " << endl;
	cin >> Value;

	cout << "Sum = " << SequenceSum(Sequence) << '\n';
	cout << "Numbers sum =  " << SequenceNumber(Sequence, Value);

	return 0;
}

double SequenceSum(const int n)
{
	size_t k;
	double sum = 0;
	double fact = 1;
	for (k = 1; k <= n; k++)
	{
		fact = fact * k;
		sum = sum + ((1 + k) / fact);
	}
	return sum;
}



double SequenceNumber(const int n, const double e)
{
	size_t k;
	double sum = 0;
	double fact = 1;
	for (k = 1; k <= n; k++)
	{
		fact = fact * k;
		if (((1 + k) / fact) > e)
		{
			sum = sum + ((1 + k) / fact);
		}
	}
	return sum;
}
