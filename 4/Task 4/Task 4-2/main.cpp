using namespace std;

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

/**
 * @brief ������� ���������� ������� ���������� �������.
 * @param arr ������.
*/

void FillArray(int arr[])
{

	srand(time(NULL));
	for (int i = 0; i <= 199; i++)
	{
		arr[i] = rand() % 201 - 100;
		cout << arr[i] << '\n';
	}
}

/**
 * @brief ������� ������� ���������� �������� ������� �������� 3, ������� ����������� ������ ���� ����.
 * @param arr ������.
*/

void FirstTask(int arr[])
{
	cout << "������ ������� �������" << '\n';

	for (int i = 199; i >= 0; i--) 
	{
		if (arr[i] % 3 == 0)
		{
			arr[i] = 0;
			cout << arr[i] << '\n' <<"����� �������� = " << i << '\n';
			break;
		}
		
	}
	
}

/**
 * @brief �������, ������� ��������� �������� ����� ����� ������ ���������.
 * @param arr ������.
 * @param K �������� �����.
*/

void SecondTask(int arr[], int K) 
{
	cout << "������ ������� �������" << '\n';

	for (int i = 0; i <= 199; i++) 
	{
		if (arr[i] % 2 == 0) 
		{
			arr[i + 1] = K;
			i++;
		}
		
	}
	for (int i = 0; i <= 199; i++) 
	{
		cout << arr[i] << '\n';
	}
}

/**
 * @brief ������� ��� ���������� ������� � ������� ��������� ������� �� �������� ��������.
 * @param P �������� ������.
*/

void ThirdTask(int P[]) 
{
	cout << "������ �������� �������" << '\n';

	long int M[200];

	for (int i = 0; i <= 199; i++) 
	{
		if (i % 4 == 0 && i != 0) 
		{
			M[i] = 4 * fabs(P[i]);
		}
		else if (i == 0) 
		{
			M[i] = 0;
		}
		else if (i == 199) 
		{
			M[i] = 0;
		}
		else 
		{
			M[i] = -P[i] * (i + 1);
		}
		cout << M[i] << '\n';

	}
}

/**
 * @brief ����� ����� � ���������.
 * @return ���������� ���� � ������ ������.
*/

int main()
{
	setlocale(LC_ALL, "Russian");

	int mas[200], Value;
	cin >> Value;

	FillArray(mas);
	FirstTask(mas);
	SecondTask(mas, Value);
	ThirdTask(mas);

	return 0;
}