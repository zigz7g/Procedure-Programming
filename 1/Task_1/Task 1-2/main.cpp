#include <iostream>
using namespace std;

/**
 * @brief Функция расчета пути ллодки по течению.
 * @param BoatSpeed Скорость лодки в стоячей воде.
 * @param RiverSpeed Скорость течения.
 * @param Time Время движения ллодки.
 * @return Возвращает значение пройденного пути.
*/

double TheWay(double BoatSpeed, double RiverSpeed, double Time) 
{
	double Way = (BoatSpeed + RiverSpeed) * Time;
	return Way;
}

/**
 * @brief Точка входа в программу.
 * @return Возвращает нуль если программа успешно выполнена.
*/

int main()
{
	setlocale(LC_ALL, "Russian");

	double FirstValue, SecondValue, ThirdValue;

	cin >> FirstValue >> SecondValue >> ThirdValue;
	cout << TheWay(FirstValue, SecondValue, ThirdValue);

	return 0;
}
