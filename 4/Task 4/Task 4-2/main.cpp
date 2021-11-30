using namespace std;

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

/// @brief Функция заполнения массива
/// @param arr Массив

void FillArray(int arr[]);

/// @brief Замена последнего элемента массива кратного 3 нулем
/// @param arr Массив

void FirstTask(int arr[]);

/// @brief Функция для вставки заданного числа после каждого четного элемента
/// @param arr Массив
/// @param K Заданное число

void SecondTask(int arr[], int K);

/// @brief Функция формировки нового массива
/// @param P Массив

void ThirdTask(int P[]);


void FillArray(int arr[])
{

	srand(time(NULL));
	for (int i = 0; i <= 199; i++)
	{
		arr[i] = rand() % 201 - 100;
		cout.width(3);
		cout << arr[i] << ", ";
	}
}



void FirstTask(int arr[])
{
	cout << '\n'<< '\n' << "Замена последнего элемента" << '\n';

	for (int i = 199; i >= 0; i--)
	{
		if (arr[i] % 3 == 0)
		{
			arr[i] = 0;
			cout <<'\n' << "Последний элемент, который заменили - " << i << '\n';
			cout << '\n' << "Теперь этот элемент равен = " << arr[i] << '\n';
			break;
		}

	}

}



void SecondTask(int arr[], int K)
{
	cout << '\n' << '\n' << "Вставка заданного числа" << '\n';

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
		cout.width(3);
		cout << arr[i] << ", ";
	}
}



void ThirdTask(int P[])
{
	cout << '\n' << '\n' << "Формировка нового массива" << '\n';

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
		cout.width(3);
		cout << M[i] << ", ";

	}
}



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
