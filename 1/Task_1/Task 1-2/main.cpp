#include <iostream>
#include <locale>

using namespace std;

/**
 * \brief Функция расчёта пути.
 * \param BoatSpeed Скорость лодки.
 * \param RiverSpeed Скорость течения. 
 * \param Time затраченное время.
 * \return Возвращает расчитанный пройденый путь лодкой.
*/

double TheWay(const double BoatSpeed, const double RiverSpeed, const double Time);

/**
 * \brief Точка входа в программу.
 * \return Возвращает 0 в случае успеха.
*/

int main()
{
	setlocale(LC_ALL, "Russian");

	double FirstValue, SecondValue, ThirdValue;

	cout << "Введите скорость лодки" << endl;
	cin >> FirstValue;
	cout << "Введите скорость течения" << endl;
	cin >> SecondValue;
	cout << "Введите время" << endl;
	cin >> ThirdValue;
	cout << "Путь равен " << TheWay(FirstValue, SecondValue, ThirdValue);

	return 0;
}

double TheWay(const double BoatSpeed, const double RiverSpeed, const double Time)
{
	double Way = (BoatSpeed + RiverSpeed) * Time;
	return Way;
}
