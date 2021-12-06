using namespace std;
#define _USE_MATH_DEFINES

#include <cmath>
#include <iostream>
#include <cstdlib>
#include <ctime>




/**
 * \brief Функция для заполнения массива
 * @param arr Массив
 * @param n Размерность
*/

void FillArrayRandom(int* arr, const int n);

/**
 * @brief Функция для заполнения массива с клавиатуры
 * @param arr Массив
 * @param n Размерность
*/

void FillArrayFromKeybord(int* arr, const int n);

/**
 * @brief Функция расчета суммы элементов значения которых из одной цифры
 * @param arr Массив
 * @param n Размерность
*/

void FirstTask(int* arr, const int n);

/**
 * @brief Функция замены элелементов массива между максимальным и минимальным
 * @param arr Массив
 * @param n Размерность
*/

void SecondTask(int* arr, const int n);

/**
 * @brief Функция для поиска последней пары элементов, произведение которых меньше заданного числа
 * @param arr Массив
 * @param n Размерность
 * @param j Заданное число
*/

void ThirdTask(int* arr, const int n, const int j);



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
	srand(time(NULL));

	int* mas;
	int Value, n;

	cout << "Введите размер массива" << endl;
	cin >> n;

	mas = new int[n];


	int input;

	while (true)
	{
		
		cout << "0. Заполнение массива" << endl;
		cout << "1. Первое задание" << endl;
		cout << "2. Второе задание" << endl;
		cout << "3. Третье задание" << endl;
		cout << "9. Выход из программы" << endl;
		cin >> input;

		if (input == 9)
			break;

		const auto choice = static_cast<menu>(input);
		switch (choice)
		{
		case menu::FillArray:
		{
			system("cls");
			cout << "Выберете способ заполнения" << endl;
			cout << "1. Рандом" << endl;
			cout << "2. Вручную" << endl;
			cin >> input;
			if (input == 1) 
			{
				FillArrayRandom(mas, n);
			}
			else 
			{
				FillArrayFromKeybord(mas, n);
			}
			break;
		}
		case menu::FirstTask: 
		{
			FirstTask(mas, n);
			break;
		}
		case menu::SecondTask:
		{
			SecondTask(mas, n);
			break;
		}
		case menu::ThirdTask:
		{
			cout << "Введите число" << endl;
			cin >> Value;
			ThirdTask(mas, n, Value);
			break;
		}

		}
		cout << endl;
		

		
	}
	return 0;
}


void FillArrayFromKeybord(int* arr, const int n) 
{
	for (size_t i = 0; i < n; i++)
	{
		cin >> arr[i];
		cout.width(3);
	}

}

void FillArrayRandom(int* arr, const int n)
{

	
	for (size_t i = 0; i < n; i++)
	{
		arr[i] = rand() % 201 - 100;
		cout.width(5);
		cout << arr[i];
	}

}

void FirstTask(int* arr, const int n)
{


	int sum = 0;
	for (size_t i = 0; i < n; i++)
	{
		if (arr[i] / 10 == arr[i] % 10)
		{
			sum = sum + arr[i];
		}
	}
	cout << "Сумма = " << sum << '\n';
}



void SecondTask(int* arr, const int n)
{


	int posmin = 100, posmax = -100, CountMin = 0, CountMax = 0, b = 0, j = 0;

	for (size_t i = 0; i < n; i++)
	{
		if (arr[i] <= posmin)
		{
			posmin = arr[i];
			CountMin = i;
		}
		if (arr[i] > posmax)
		{
			posmax = arr[i];
			CountMax = i;
		}
	}

	int Max = CountMax;
	int Min = CountMin;

	if (CountMax > CountMin)
	{
		for (CountMin; CountMin < CountMax ; CountMin++)
		{
			b = arr[CountMin];
			arr[CountMin] = arr[CountMax - j];
			arr[CountMax-j] = b;
			if ((CountMin == (CountMax - j)) || ((CountMax - j) - CountMin == 1))
				break;
			j++;
		}
		for (Min; Min <= Max; Min++) {
			cout << arr[Min] << '\n';
		}
	}

	if (CountMin > CountMax)
	{
		for (CountMax; CountMax < CountMin; CountMax++)
		{
			b = arr[CountMax];
			arr[CountMax] = arr[CountMin - j];
			arr[CountMin-j] = b;
			if ((CountMax== (CountMin - j)) || ((CountMin - j) - CountMax == 1))
				break;
			j++;
		}
		for (Max; Max <= Min; Max++) {
			cout << arr[Max] << '\n';
		}
	}
}



void ThirdTask(int* arr, const int n, const int j)
{


	int Number1 = 0;
	int Number2 = 0;
	for (size_t i = 0; i < n; i++)
	{
		if (arr[i] > 0 && arr[i + 1] > 0)
		{
			if (arr[i] * arr[i + 1] < j)
			{
				Number1 = i;
				Number2 = i + 1;
			}
		}
	}
	if (Number1 == 0 && Number2 == 0)
		cout << "Таких чисел нет" << endl;
	else
		cout << "Первый номер = " << Number1 << ", Второй номер = " << Number2;
	
}
