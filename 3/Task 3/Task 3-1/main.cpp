using namespace std;

#define _USE_MATH_DEFINES

#include <cmath>
#include <iostream>

/**
 * @brief Функция для табуляции заданной функции.
 * @param bx Левая точка области определения.
 * @param ex Правая точка области определения.
 * @param sx Шаг функции.
*/

void FunctionTabulation(double bx, double ex, double sx) 
{
	double y;
	for (bx; bx <= ex; bx +=sx) 
	{
		y = sqrt(1 - bx) - tan(bx);	
		cout << y << '\n';
	}
	
	
}

/**
 * @brief Точка входа в программу.
 * @return Возвращает нуль в случае успеха.
*/

int main() 
{
	double BeginVariable, EndVariable, Step;
	cin >> BeginVariable >> EndVariable >> Step;
	FunctionTabulation(BeginVariable, EndVariable, Step);

	return 0;
}