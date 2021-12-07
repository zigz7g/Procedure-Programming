using namespace std;

#define _USE_MATH_DEFINES

#include <cmath>
#include <iostream>
#include <locale>

/**
 * \brief Функция для расчёта первого примера.
 * \param x Переменная х. 
 * \param y Переменная у.
 * \param z Переменная z.
 * \return Возвращает решение данного примера.
*/

double FirstEquation(const double x, const double y, const double z);



/**
 * \brief Функция для расчёта второго примера.
 * \param y Переменная у.
 * \param x Переменная х.
 * \param z Переменная z.
 * \return Возвращает решение данного примера.
*/

double SecondEquation(const double x, const double y, const double z);

/**
 * \brief Точка входа в программу.
 * \return Возвращает 0 в случае успеха.
*/

int main()
{
    setlocale(LC_ALL, "Russian");

    double FirstVariable, SecondVariable, ThirdVariable;
    FirstVariable = 0.3;
    SecondVariable = 2.9;
    ThirdVariable = 0.5;

    cout << FirstEquation(FirstVariable, SecondVariable, ThirdVariable) << '\n';
    cout << SecondEquation(FirstVariable, SecondVariable, ThirdVariable);

    return 0;
}

double FirstEquation(const double x, const double y, const double z)
{
    double a = (pow(z, 2) * x + exp(-x) * cos(y * x)) / (y * x - exp(-x) * sin(y * x) + 1);
    return a;
}



double SecondEquation(const double x, const double y, const double z)
{
    double b = exp(2 * x) * log(z + x) - pow(y, 3 * x) * log(y - x);
    return b;
}
