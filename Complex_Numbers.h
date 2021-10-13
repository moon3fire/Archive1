#pragma once
#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
class Complex_Numbers {
public:
Complex_Numbers();
Complex_Numbers(int , int);
Complex_Numbers(const Complex_Numbers&);
int get_a() const;
int get_b() const;
void set_a(int);
void set_b(int);
double absolute_value() const;
private:
int a;
int b;
};
Complex_Numbers operator + (Complex_Numbers& obj1, const Complex_Numbers& obj2);
Complex_Numbers operator - (Complex_Numbers& obj1, const Complex_Numbers& obj2);
Complex_Numbers operator * (Complex_Numbers& obj1, const Complex_Numbers& obj2);
Complex_Numbers operator * (Complex_Numbers& obj, int value);
void sort_complex_numbers(std::vector<Complex_Numbers>& V);
void addition(Complex_Numbers& obj1, const Complex_Numbers& obj2);
void subtraction(Complex_Numbers& obj1, const Complex_Numbers& obj2);
void multiplication(Complex_Numbers& obj1, const Complex_Numbers& obj2);
void multiplication_by_constant(Complex_Numbers& obj, int value);
