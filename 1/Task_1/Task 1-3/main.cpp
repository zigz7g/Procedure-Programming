#include <iostream>
using namespace std;

/**
 * @brief ������� ������� ����������� �������.
 * @param m ����� �������
 * @param t1 �������� �����������.
 * @param t0 ��������� �����������.
 * @param c ��������� �����������������.
 * @return ���������� �������� ����������� �������.
*/

double Caloric(double m, double t1, double t0, double c)
{
	double Q = m * c * (t1 - t0);
	return Q;
}

/**
 * @brief ����� ����� � ���������
 * @return ���������� ����� � ������
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