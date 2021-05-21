#include <iostream>
using namespace std;

/**
 * @brief Функция расчета колличества теплоты.
 * @param m Масса объекта
 * @param t1 Конечная температура.
 * @param t0 Начальная температура.
 * @param c Коэфицент теплопроводимости.
 * @return Возвращает значение колличества теплоты.
*/

double Caloric(double m, double t1, double t0, double c)
{
	double Q = m * c * (t1 - t0);
	return Q;
}

/**
 * @brief Точка входа в программу
 * @return Возвращает нулль в случае
*/

int main() 
{
	setlocale(LC_ALL, "Russian");

	double FirstValue, SecondValue, ThirdValue, FourthValue;

	cout << "Please enter mass, fist temperature, second temperature and c value\n";
	cin >> FirstValue >> SecondValue >> ThirdValue >> FourthValue;
	cout << Caloric(FirstValue, SecondValue, ThirdValue, FourthValue);

	return 0;
}