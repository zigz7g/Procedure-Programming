
using namespace std;

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <conio.h>


/**
 * \brief Функция заполнения массива рандомными числами.
 * \param arr Массив.
 * \param n Размерность массива.
*/

void FillArray(int* arr, const int n);

/**
 * \brief Функция заполненеия массива с клавиатуры.
 * \param arr Массив.
 * \param n Размерность массива.
*/

void FillArrayFromKeybord(int* arr, const int n);

/**
 * \brief Функция для замены полседнего элемента кратного 3 нулем.
 * \param arr Массив.
 * \param n Размер массива.
*/

void FirstTask(int* arr, const int n);

/**
 * \brief Функция для вставки числа К после каждого четного элемента.
 * \param arr Массив.
 * \param K Заданное число.
 * \param n Размерность массива.
*/

void SecondTask(int* arr, int K, const int n);

/**
 * \brief Функция для создания нового массива на основе заданного с той же размерностью.
 * \param P Массив.
 * \param n Размерность массива.
*/

void ThirdTask(int* P, const int n);

enum class menu 
{
	FillArray,
	FirstTask,
	SecondTask,
	ThirdTask,
};

int main()
{
	setlocale(LC_ALL, "Russian");

	int Value, n, input;
	cout << "Введите размерность массива" << '\n';
	cin >> n;
	int* mas;
	mas = new int[n];

	


	while (true)
	{
		cout << "0. Заполнение массива" << endl;
		cout << "1. Первое задание" << endl;
		cout << "2. Второе задание" << endl;
		cout << "3. Третье задание" << endl;
		cout << "9. Выход из программы" << endl;
		cin >> input;
		const auto choice = static_cast<menu>(input);

		if (input == 9)
			break;

		switch (choice) 
		{
		case menu::FillArray:
			cout << "Выберете способ заполнения массива" << endl;
			cout << "1.Рандом" << endl;
			cout << "2.Вручную" << endl;
			cin >> input;
			if (input == 1)
			{
				FillArray(mas, n);
			}
			else
			{
				FillArrayFromKeybord(mas, n);
			}
			break;

		case menu::FirstTask:
			FirstTask(mas, n);
			break;

		case menu::SecondTask:
			cout << "Введите заданное число" << endl;
			cin >> Value;
			SecondTask(mas, Value, n);
			break;
		case menu::ThirdTask:
			ThirdTask(mas, n);
			break;
		}
	cout << endl;
	
	}
	return 0;
}


void FillArray(int* arr, const int n)
{

	srand(time(NULL));
	for (size_t i = 0; i <= n - 1; i++)
	{
		arr[i] = rand() % 201 - 100;
		cout.width(3);
		cout << arr[i] << ", ";
	}
}

void FillArrayFromKeybord(int* arr, const int n)
{
	for (size_t i = 0; i <= n; i++)
	{
		cin >> arr[i];
		cout.width(3);
		cout << arr[i] << ", ";
	}
}


void FirstTask(int* arr, const int n)
{
	cout << '\n' << '\n' << "Замена последнего элемента" << '\n';

	for (size_t i = n - 1; i >= 0; i--)
	{
		if (arr[i] % 3 == 0)
		{
			arr[i] = 0;
			cout << '\n' << "Последний элемент, который заменили - " << i << '\n';
			cout << '\n' << "Теперь этот элемент равен = " << arr[i] << '\n';
			break;
		}

	}

}



void SecondTask(int* arr, const int K, const int n)
{
	cout << '\n' << '\n' << "Вставка заданного числа" << '\n';

	for (size_t i = 0; i <= n - 1; i++)
	{
		if (arr[i] % 2 == 0)
		{
			arr[i + 1] = K;
			i++;
		}

	}
	for (size_t i = 0; i <= n - 1; i++)
	{
		cout.width(3);
		cout << arr[i] << ", ";
	}
}



void ThirdTask(int* P, const int n)
{
	cout << '\n' << '\n' << "Формировка нового массива" << '\n';

	int* M;
	M = new int[n];

	for (size_t i = 0; i <= n - 1; i++)
	{
		if (i % 4 == 0 && i != 0)
		{
			M[i] = 4 * fabs(P[i]);
		}
		else if (i == 0)
		{
			M[i] = 0;
		}
		else if (i == n - 1)
		{
			M[i] = 0;
		}
		else
		{
			M[i] = -P[i] * (i + 1);
		}
		cout.width(3);
		cout << M[i] << ", ";

	}
}


