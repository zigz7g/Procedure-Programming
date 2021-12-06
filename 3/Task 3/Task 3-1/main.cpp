using namespace std;

#define _USE_MATH_DEFINES

#include <cmath>
#include <iostream>


/**
 * \brief Функция для табулирования.
 * \param bx Начальная граница
 * \param ex Конечная граница
 * \param sx Шаг
*/

void FunctionTabulation(double bx, double ex, double sx);

/**
 * \brief Точка входа в программу.
 * \return Возвращает нуль в случае успеха
*/

int main()
{
	double BeginVariable, EndVariable, Step;
	cin >> BeginVariable >> EndVariable >> Step;
	FunctionTabulation(BeginVariable, EndVariable, Step);

	return 0;
}


void FunctionTabulation(double bx, double ex, double sx)
{
	double y;
	for (bx; bx <= ex; bx += sx)
	{
		y = sqrt(1 - bx) - tan(bx);
		cout << y << '\n';
	}
}
