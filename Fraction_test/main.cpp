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

    cout << "Первая дробь: ";
    display(frac1);
    cout << "Вторая дробь: ";
    display(frac2);

    // Тестируем сумму дробей
    TEST(FractionEq(add(frac1, frac2), { 19, 12 }));

    // Тестируем разность дробей
    TEST(FractionEq(subtract(frac1, frac2), { -1, 12 }));

    // Тестируем произведение дробей
    TEST(FractionEq(multiply(frac1, frac2), { 5, 8 }));

    // Тестируем деление дробей
    TEST(FractionEq(divide(frac1, frac2), { 9, 10 }));

    // Тестируем целую часть дроби
    TEST(wholePart(frac1) == 0);

    // Тестируем сложение дроби с целым числом
    TEST(FractionEq(addInteger(frac1, 2), { 11, 4 }));

    return 0;
}
