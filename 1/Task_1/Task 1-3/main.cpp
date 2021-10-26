#include <iostream>
#include <locale>


using namespace std;

/// @brief Функция для расчёта количества теплоты.
/// @param m Масса.
/// @param t1 Температура первая.
/// @param t0 Температура вторая.
/// @param c Удельная теплоёмкость.
/// @return Возвращает количество теплоты.

double Caloric(double m, double t1, double t0, double c);

/// @brief Точка входа в программу.
/// @return Возвращает 0 в случае успеха.

int main()
{
	double FirstValue, SecondValue, ThirdValue, FourthValue;

	cout << "Please enter mass, fist temperature, second temperature and c value\n";
	cin >> FirstValue >> SecondValue >> ThirdValue >> FourthValue;
	cout << Caloric(FirstValue, SecondValue, ThirdValue, FourthValue);

	return 0;
}

double Caloric(double m, double t1, double t0, double c)
{
	double Q = m * c * (t1 - t0);
	return Q;
}
