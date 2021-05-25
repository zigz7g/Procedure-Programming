using namespace std;

#define _USE_MATH_DEFINES

#include <cmath>
#include <iostream>


/**
 * @brief ������� ��� ������� ����� ������������������.
 * @param n ������ ������������������.
 * @return ���������� ����� ���� ������ ������ ������������������.
*/

double SequenceSum(int n) 
{
	double k;
	double sum = 0;
	double fact = 1;
	for (k = 1; k <= n; k++) 
	{
		fact = fact * k;
		sum = sum + ((1 + k) / fact);
	}
	return sum;
}

/**
 * @brief ������� ��� ������� ����� ������ ������������������, ������� ������ ��������� �����.
 * @param n ������ ������������������.
 * @param e �������� �����.
 * @return ���������� ����� ������ ������������������, ������� ������ ��������� �����.
*/

double SequenceNumber(int n, double e) 
{
	double k;
	double sum = 0;
	double fact = 1;
	for (k = 1; k <= n; k++) 
	{
		fact = fact * k;
		if (((1 + k) / fact) > e) 
		{
			sum = sum + ((1 + k) / fact);
		}
		else 
		{
			sum = sum + 0;
		}
	}
	return sum;
}

/**
 * @brief ����� ����� � ���������.
 * @return ���������� ���� � ������ ������.
*/

int main() 
{
	double Sequence, Value;
	cin >> Sequence >> Value;

	cout << SequenceSum(Sequence) << '\n';
	cout << SequenceNumber(Sequence, Value) ;

	return 0;
}