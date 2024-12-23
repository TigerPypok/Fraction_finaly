#ifndef FRACTION_H
#define FRACTION_H

#include <iostream>
#include <stdexcept>

// Структура для представления обыкновенной дроби
struct Fraction {
    int numerator;   // Числитель
    int denominator; // Знаменатель
};


// Функция для вычисления наибольшего общего делителя (НОД) по алгоритму Евклида
int gcd(int a, int b);

// Функция для упрощения дроби
Fraction simplify(const Fraction& frac);

// Функция для сравнения дробей
bool FractionEq(const Fraction& a, const Fraction& b);

// Функция для вывода дроби на экран
void display(const Fraction& frac);

// Функция для вычисления целой части дроби
int wholePart(const Fraction& frac);

// Арифметические операции
Fraction add(const Fraction& a, const Fraction& b);
Fraction subtract(const Fraction& a, const Fraction& b);
Fraction multiply(const Fraction& a, const Fraction& b);
Fraction divide(const Fraction& a, const Fraction& b);

// Функция для сложения дроби с целым числом
Fraction addInteger(const Fraction& frac, int integer);

#endif 
