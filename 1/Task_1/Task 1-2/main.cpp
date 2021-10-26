#include <iostream>
#include <locale>

using namespace std;

/// @brief Функция расчёта пути.
/// @param BoatSpeed Скорость лодки.
/// @param RiverSpeed Скорость течения.
/// @param Time затраченное время.
/// @return Возвращает расчитанный пройденый путь лодкой.

double TheWay(double BoatSpeed, double RiverSpeed, double Time);

/// @brief Точка входа в программу.
/// @return Возвращает 0 в случае успеха.

int main()
{
	double FirstValue, SecondValue, ThirdValue;

	cin >> FirstValue >> SecondValue >> ThirdValue;
	cout << TheWay(FirstValue, SecondValue, ThirdValue);

	return 0;
}

double TheWay(double BoatSpeed, double RiverSpeed, double Time)
{
	double Way = (BoatSpeed + RiverSpeed) * Time;
	return Way;
}
