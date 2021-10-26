using namespace std;

#define _USE_MATH_DEFINES

#include <cmath>
#include <iostream>
#include <locale>

/// @brief Функция для расчёта первого примера.
/// @param x Переменная х.
/// @param y Переменная у.
/// @param z Переменная z.
/// @return Возвращает решение данного примера.

double FirstPrimer(double x, double y, double z);

/// @brief Функция для расчёта второго примера.
/// @param x Переменная х.
/// @param y Переменная у.
/// @param z Переменная z.
/// @return Возвращает решение данного примера.

double SecondPrimer(double x, double y, double z);

/// @brief Точка входа в программу.
/// @return Возвращает 0 в случае успеха.
 
int main()
{
    setlocale(LC_ALL, "Russian");

    double FirstVariable, SecondVariable, ThirdVariable;
    FirstVariable = 0.3;
    SecondVariable = 2.9;
    ThirdVariable = 0.5;

    cout << FirstPrimer(FirstVariable, SecondVariable, ThirdVariable) << '\n';
    cout << SecondPrimer(FirstVariable, SecondVariable, ThirdVariable);

    return 0;
}

double FirstPrimer(double x, double y, double z)
{
    double a = (pow(z, 2) * x + pow(M_E, -x) * cos(y * x)) / (y * x - pow(M_E, -x) * sin(y * x) + 1);
    return a;
}



double SecondPrimer(double x, double y, double z)
{
    double b = pow(M_E, 2 * x) * log(z + x) - pow(y, 3 * x) * log(y - x);
    return b;
}
