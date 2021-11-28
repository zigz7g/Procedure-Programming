using namespace std;
#define _USE_MATH_DEFINES

#include <cmath>
#include <iostream>
#include <cstdlib>
#include <ctime>

/// @brief Фунцкия заполнения массива.
/// @param arr Массив.

void FillArray(int arr[]);

/// @brief Функция для подсчёта кол-ва элементов из одной цифры.
/// @param arr Массив.

void FirstTask(int arr[]);

/// @brief Функция замены элементов в массиве
/// @param arr Массив

void SecondTask(int arr[]);

/// @brief 
/// @param arr 
/// @param n 

void ThirdTask(int arr[], int n);

/// @brief Точка входа в программу.
/// @return Возвращает нуль в случае успеха

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


void FillArray(int arr[])
{

	srand(time(NULL));
	for (int i = 0; i <= 200; i++)
	{
		arr[i] = rand() % 201 - 100;
		//cout << arr[i] << '\n';
	}

}

void FirstTask(int arr[])
{
	

	int sum = 0;
	for (int i = 0; i <= 200; i++)
	{
		if (arr[i] / 10 == 0)
		{
			sum = sum + arr[i];
		}
	}
	cout << "Sum = " << sum << '\n';
}



void SecondTask(int arr[])
{
	

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



void ThirdTask(int arr[], int n)
{
	

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
	cout << "Первый номер = " << Number1 << ", Второй номер = " << Number2;
}
