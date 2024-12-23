#ifndef FRACTION_H
#define FRACTION_H

#include <iostream>
#include <stdexcept>

// ��������� ��� ������������� ������������ �����
struct Fraction {
    int numerator;   // ���������
    int denominator; // �����������
};


// ������� ��� ���������� ����������� ������ �������� (���) �� ��������� �������
int gcd(int a, int b);

// ������� ��� ��������� �����
Fraction simplify(const Fraction& frac);

// ������� ��� ��������� ������
bool FractionEq(const Fraction& a, const Fraction& b);

// ������� ��� ������ ����� �� �����
void display(const Fraction& frac);

// ������� ��� ���������� ����� ����� �����
int wholePart(const Fraction& frac);

// �������������� ��������
Fraction add(const Fraction& a, const Fraction& b);
Fraction subtract(const Fraction& a, const Fraction& b);
Fraction multiply(const Fraction& a, const Fraction& b);
Fraction divide(const Fraction& a, const Fraction& b);

// ������� ��� �������� ����� � ����� ������
Fraction addInteger(const Fraction& frac, int integer);

#endif 
