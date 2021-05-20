#include <iostream>
using namespace std;

/**
 * @brief ������� ������� ���� ������ �� �������.
 * @param BoatSpeed �������� ����� � ������� ����.
 * @param RiverSpeed �������� �������.
 * @param Time ����� �������� ������.
 * @return ���������� �������� ����������� ����.
*/

double TheWay(double BoatSpeed, double RiverSpeed, double Time) 
{
	double Way = (BoatSpeed + RiverSpeed) * Time;
	return Way;
}

/**
 * @brief ����� ����� � ���������.
 * @return ���������� ���� ���� ��������� ������� ���������.
*/

int main()
{
	double FirstValue, SecondValue, ThirdValue;
	cin >> FirstValue >> SecondValue >> ThirdValue;
	cout << TheWay(FirstValue, SecondValue, ThirdValue);
	return 0;
}
