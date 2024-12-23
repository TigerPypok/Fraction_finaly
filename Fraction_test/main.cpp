#include "Fraction.h"
#include <iostream>

using namespace std;

void Test(bool expr) {
    if (expr)
        cout << "passed" << endl;
    else
        cout << "error" << endl;
}

#define TEST(expr) \
    cout << "Test " << #expr << "... "; \
    Test((expr));

int main() {
    setlocale(LC_ALL, "Russian");

    Fraction frac1 = { 3, 4 }; // 3/4
    Fraction frac2 = { 5, 6 }; // 5/6

    cout << "������ �����: ";
    display(frac1);
    cout << "������ �����: ";
    display(frac2);

    // ��������� ����� ������
    TEST(FractionEq(add(frac1, frac2), { 19, 12 }));

    // ��������� �������� ������
    TEST(FractionEq(subtract(frac1, frac2), { -1, 12 }));

    // ��������� ������������ ������
    TEST(FractionEq(multiply(frac1, frac2), { 5, 8 }));

    // ��������� ������� ������
    TEST(FractionEq(divide(frac1, frac2), { 9, 10 }));

    // ��������� ����� ����� �����
    TEST(wholePart(frac1) == 0);

    // ��������� �������� ����� � ����� ������
    TEST(FractionEq(addInteger(frac1, 2), { 11, 4 }));

    return 0;
}
