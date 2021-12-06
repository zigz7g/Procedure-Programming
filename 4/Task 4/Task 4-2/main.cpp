using namespace std;

#include <iostream>

#include <cstdlib>

#include <ctime>

#include <cmath>

#include <conio.h>

/// @brief Функция заполнения массива рандомными числами.

/// @param arr Массив.

/// @param n Размерность массива.

void FillArray(int* arr, const int n);

/// @brief Функция заполненеия массива с клавиатуры.

/// @param arr Массив.

/// @param n Размерность массива.

void FillArrayFromKeybord(int* arr, const int n);

/// @brief Функция вывода меню.

void prnmn();

/// @brief Функция для замены полседнего элемента кратного 3 нулем.

/// @param arr Массив.

/// @param n Размер массива.

void FirstTask(int* arr, const int n);

/// @brief Функция для вставки числа К после каждого четного элемента.

/// @param arr Массив.

/// @param K Заданное число.

/// @param n Размерность массива.

void SecondTask(int* arr, int K, const int n);

/// @brief Функция для создания нового массива на основе заданного с той же размерностью.

/// @param P Массив.

/// @param n Размерность массива.

void ThirdTask(int* P, const int n);

void FillArray(int* arr, const int n)

{

srand(time(NULL));

for (int i = 0; i <= n -1; i++)

{

arr[i] = rand() % 201 - 100;

cout.width(3);

cout << arr[i] << ", ";

}

}

void FillArrayFromKeybord(int* arr, const int n)

{

for (int i = 0; i <= n; i++)

{

cin >> arr[i];

cout.width(3);

cout << arr[i] << ", ";

}

}

void prnmn()

{

cout << "\nMENU";

cout << "\n1-Замена последнего элемента кратного 3 нулем.";

cout << "\n2-Вставить элемент со значением К после всех нечетных элементов, начинающихся на цифру К.";

cout << "\n3-Из элементов массива P сформировать массив M той же размерности.";

cout << "\nESC-Вход";

}

void FirstTask(int* arr, const int n)

{

cout << '\n' << '\n' << "Замена последнего элемента" << '\n';

for (int i = n - 1; i >= 0; i--)

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

void SecondTask(int* arr, int K, const int n)

{

cout << '\n' << '\n' << "Вставка заданного числа" << '\n';

for (int i = 0; i <= n - 1; i++)

{

if (arr[i] % 2 == 0)

{

arr[i + 1] = K;

i++;

}

}

for (int i = 0; i <= n - 1; i++)

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

for (int i = 0; i <= n -1; i++)

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

int main()

{

setlocale(LC_ALL, "Russian");

int Value, n;

cout << "Введите кол-во элементов массива" << '\n';

cin >> n;

int* mas;

mas = new int[n];

cout << "Введите заданное число" << '\n';

cin >> Value;

char key = ' ';

cout << "Выберете способ заполнения массива" << '\n';

cout << "1.Рандом" << '\n';

cout << "2.Вручную" << '\n';

key = _getch();

if (key == '1')

{

FillArray(mas, n);

}

else

{

FillArrayFromKeybord(mas, n);

}

while (key != 27)

{

prnmn();

key = _getch();

switch (key)

{

case '1':

FirstTask(mas, n);

break;

case '2':

SecondTask(mas, Value, n);

break;

case '3':

ThirdTask(mas,n);

break;

}

key = _getch();

system("cls");

}

return 0;

}
