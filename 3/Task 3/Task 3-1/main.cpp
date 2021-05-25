using namespace std;

#define _USE_MATH_DEFINES

#include <cmath>
#include <iostream>

/**
 * @brief ������� ��� ��������� �������� �������.
 * @param bx ����� ����� ������� �����������.
 * @param ex ������ ����� ������� �����������.
 * @param sx ��� �������.
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
 * @brief ����� ����� � ���������.
 * @return ���������� ���� � ������ ������.
*/

int main() 
{
	double BeginVariable, EndVariable, Step;
	cin >> BeginVariable >> EndVariable >> Step;
	FunctionTabulation(BeginVariable, EndVariable, Step);

	return 0;
}