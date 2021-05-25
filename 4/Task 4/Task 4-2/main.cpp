using namespace std;

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

/**
 * @brief Функция заполнения массива рандомными числами.
 * @param arr Массив.
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
 * @brief Функция расчёта последнего элемента массива кратного 3, которая подставляет вместо него нуль.
 * @param arr Массив.
*/

void FirstTask(int arr[])
{
	cout << "Начало первого задания" << '\n';

	for (int i = 199; i >= 0; i--) 
	{
		if (arr[i] % 3 == 0)
		{
			arr[i] = 0;
			cout << arr[i] << '\n' <<"Номер элемента = " << i << '\n';
			break;
		}
		
	}
	
}

/**
 * @brief Функция, которая вставляет заданное число после четных элементов.
 * @param arr Массив.
 * @param K Заданное число.
*/

void SecondTask(int arr[], int K) 
{
	cout << "Начало второго задания" << '\n';

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
 * @brief Функция для заполнения массива с помощью заданного массива по заданным формулам.
 * @param P Исходный массив.
*/

void ThirdTask(int P[]) 
{
	cout << "Начало третьего задания" << '\n';

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
 * @brief Точка входа в программу.
 * @return Возвращает нуль в случае успеха.
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