using namespace std;

#include <iostream>
#include <locale>

/**
 * @brief ������� ������� ���� ����������� ������, �������� �� ��������� ���� ����� �� �������.
 * @param p ����� ������� ����.
 * @param q ������ ������� ����.
 * @param r ����� ������� ����.
 * @param s ������ ������� ����.
 * @param a ����� ��������.
 * @param b ������ ��������.
 * @return ���������� ����������� ��� ������������� ���������.
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
 * @brief ����� ����� � ���������.
 * @return ���������� ���� � ������ ������.
*/

int main() 
{
	setlocale(LC_ALL, "Russian");

	double FirstLength, FirstWidth, SecondLength, SecondWidth, AreaLength, AreaWidth;
	cin >> FirstLength >> FirstWidth >> SecondLength >> SecondWidth >> AreaLength >> AreaWidth;

	if (Area(FirstLength, FirstWidth, SecondLength, SecondWidth, AreaLength, AreaWidth) == true) {
		cout << "��������";
	}
	else {
		cout << "����������";
	}

	return 0;
}