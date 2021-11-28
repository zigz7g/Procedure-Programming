using namespace std;

#define _USE_MATH_DEFINES

#include <cmath>
#include <iostream>

/**
 * @brief Функция для расчеты суммы членов последовательности, которые меньше заданного числа.
 * @param n Предел последовательности.
 * @param e Заданное число.
 * @return Возвращает сумму членов последовательности, которые меньше заданного числа.
*/

double SequenceNumber(int n, double e);

/**
 * @brief Функция для расчёта суммы последовательности.
 * @param n Предел последовательности.
 * @return Возвращает сумму всех членов данной последовательности.
*/

double SequenceSum(int n);

/**
 * @brief Точка входа в программу.
 * @return Возвращает нуль в случае успеха.
*/

int main()
{
	double Sequence, Value;
	cin >> Sequence >> Value;

	cout << "Sum = " <<SequenceSum(Sequence) << '\n';
	cout << "Numbers sum =  "<< SequenceNumber(Sequence, Value);

	return 0;
}

double SequenceSum(int n)
{
	double k;
	double sum = 0;
	double fact = 1;
	for (k = 1; k <= n; k++)
	{
		fact = fact * k;
		sum = sum + ((1 + k) / fact);
	}
	return sum;
}



double SequenceNumber(int n, double e)
{
	double k;
	double sum = 0;
	double fact = 1;
	for (k = 1; k <= n; k++)
	{
		fact = fact * k;
		if (((1 + k) / fact) > e)
		{
			sum = sum + ((1 + k) / fact);
		}
		else
		{
			sum = sum + 0;
		}
	}
	return sum;
}
