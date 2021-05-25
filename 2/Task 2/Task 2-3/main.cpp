using namespace std;

#include <iostream>
#include <locale>

/**
 * @brief Функция создана длял возможности узнать, возможна ли постройка двух домов на участке.
 * @param p Длина первого дома.
 * @param q Ширина первого дома.
 * @param r Длина второго дома.
 * @param s Ширина второго дома.
 * @param a Длина площадки.
 * @param b Ширина площадки.
 * @return Возвращает возможность или невозможность постройки.
*/

double Area(double p, double q, double r, double s, double a, double b)
{
	double FirstHouse = p * q;
	double SecondHouse = r * s;
	double Area = a * b;
	bool Possibility;
	if (Area - SecondHouse - FirstHouse >= 0) {
		Possibility = true;
	}
	else {
		Possibility = false;
	}
	return Possibility;
}

/**
 * @brief Точка входа в программу.
 * @return Возвращает нуль в случае успеха.
*/

int main() 
{
	setlocale(LC_ALL, "Russian");

	double FirstLength, FirstWidth, SecondLength, SecondWidth, AreaLength, AreaWidth;
	cin >> FirstLength >> FirstWidth >> SecondLength >> SecondWidth >> AreaLength >> AreaWidth;

	if (Area(FirstLength, FirstWidth, SecondLength, SecondWidth, AreaLength, AreaWidth) == true) {
		cout << "Возможно";
	}
	else {
		cout << "Невозможно";
	}

	return 0;
}