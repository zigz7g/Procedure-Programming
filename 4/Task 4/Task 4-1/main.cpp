using namespace std;
#define _USE_MATH_DEFINES

#include <cmath>
#include <iostream>
#include <cstdlib>
#include <ctime>

/**
 * @brief ������� ��� ���������� ������� ���������� ������� �� -100 �� 100.
 * @param arr ������.
*/

void FillArray(int arr[]) 
{
	
	srand(time(NULL));
	for (int i = 0; i <= 200; i++)
	{
		arr[i] = rand() % 201 - 100;
		//cout << arr[i] << '\n';
	}
	
}

/**
 * @brief ������� ��� ������� ����� ���������, �������� ������� ������� �� ����� �����.
 * @param arr ������.
*/

void FirstTask(int arr[]) 
{
	cout << "������ ������� �������" << '\n';

	int sum = 0;
	for (int i = 0; i <= 200; i++) 
	{
		if (arr[i] / 10 == 0) 
		{
			sum = sum + arr[i];
		}
	}
	cout <<"Sum = " << sum << '\n';
}

/**
 * @brief �������, ������� ��������  �������� ������� ����� ����������� � ������������ �� �� �� �������� � �������� �������.
 * @param arr ������.
*/

void SecondTask(int arr[])
{
	cout << "������ ������� �������" << '\n';

	int min = 0, max = 0, CountMin = 0, CountMax = 0, a = 0, b = 0, j = 0;

	for (int i = 0; i <= 200; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
			CountMin = i;
		}
		if (arr[i] > max)
		{
			max = arr[i];
			CountMax = i;
		}
	}

	if (CountMax > CountMin)
	{
		for (CountMin; CountMin < (CountMax / 2); CountMin++)
		{
			b = arr[CountMin];
			arr[CountMin] = arr[CountMax - j - 1];
			arr[CountMax - j - 1] = b;
			j++;
		}
		for (CountMin; CountMin <= CountMax; CountMin++) {
			cout << arr[CountMin] << '\n';
		}
	}

	if (CountMin > CountMax)
	{
		for (CountMax; CountMax < (CountMin / 2); CountMax++)
		{
			b = arr[CountMax];
			arr[CountMax] = arr[CountMin - j - 1];
			arr[CountMin - j - 1] = b;
			j++;
		}
		for (CountMax; CountMax <= CountMin; CountMax++) {
			cout << arr[CountMax] << '\n';
		}
	}
}

/**
 * @brief ������� ��� ������ ������ ��������� ���� �������� ��������� � ����������� �������, ������������ ������� ������ ��������� �����
 * @param arr ������.
 * @param n �������� �����.
*/

void ThirdTask(int arr[], int n) 
{
	cout << "������ �������� �������" << '\n';

	int Number1 = 0;
	int Number2 = 0;
	for (int i = 0; i <= 200; i++)
	{
		if (arr[i] > 0 && arr[i + 1] > 0) 
		{
			if (arr[i] * arr[i + 1] < n) 
			{
				Number1 = i;
				Number2 = i + 1;
			}
		}
	}
	cout << "����� 1 ����� = " << Number1 << ", ����� 2 ����� = " << Number2;
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
	SecondTask(mas);
	ThirdTask(mas, Value);

	return 0;
}
