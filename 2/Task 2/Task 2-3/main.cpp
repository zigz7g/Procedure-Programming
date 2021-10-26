using namespace std;

#include <iostream>
#include <locale>

/// @brief Функция для планировки домов.
/// @param p Длина первого дома.
/// @param q Ширина второго дома.
/// @param r Длина второго дома.
/// @param s Ширина второго дома.
/// @param a Длина участка
/// @param b Ширина участка
/// @return Вовзаращает возможность размещения участка.

double Area(double p, double q, double r, double s, double a, double b);

/// @brief Точка входа в программу.
/// @return Возвращает 0 в случае успеха.

int main()
{

	double FirstLength, FirstWidth, SecondLength, SecondWidth, AreaLength, AreaWidth;
	cin >> FirstLength >> FirstWidth >> SecondLength >> SecondWidth >> AreaLength >> AreaWidth;

	if (Area(FirstLength, FirstWidth, SecondLength, SecondWidth, AreaLength, AreaWidth) == true) {
		cout << "Можно";
	}
	else {
		cout << "Нельзя";
	}

	return 0;
}

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
