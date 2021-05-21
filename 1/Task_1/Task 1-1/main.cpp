using namespace std;

#define _USE_MATH_DEFINES

#include <cmath>
#include <iostream>


/**
 * @brief ������� ����������  ��������������� ���������.
 * @param x ������ ���������.
 * @param y ������ ����������.
 * @param z ������ ����������.
 * @return B��������� �������� �.
*/
double FirstPrimer(double x, double y, double z)
{
    double a = (pow(z, 2) * x + pow(M_E, -x) * cos(y * x)) / (y * x - pow(M_E, -x) * sin(y * x) + 1);
    return a;
}


/**
 * @brief ������� ����������  ��������������� ���������.
 * @param x ������ ���������.
 * @param y ������ ����������.
 * @param z ������ ����������.
 * @return B��������� �������� b.
*/
double SecondPrimer(double x, double y, double z)
{
    double b = pow(M_E, 2 * x) * log(z + x) - pow(y, 3 * x) * log(y - x);
    return b;
}

/**
 * @brief ����� ����� � ���������.
 * @return ���������� ���� �  ����� ������.
*/
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