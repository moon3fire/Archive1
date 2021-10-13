#include <iostream>
#include "Complex_Numbers.h"
int main()
{
Complex_Numbers obj1(10, 20);
Complex_Numbers obj2(obj1);
Complex_Numbers obj3(14, 42);
Complex_Numbers obj4(77, 142);
Complex_Numbers obj5(55, 66);
Complex_Numbers obj6(33, 44);
Complex_Numbers obj7(22, 44);
Complex_Numbers obj8(5, 30);
std::vector<Complex_Numbers> V;
V.push_back(obj1);
V.push_back(obj2);
V.push_back(obj3);
V.push_back(obj4);
V.push_back(obj5);
V.push_back(obj6);
V.push_back(obj7);
V.push_back(obj8);
for (int i = 0; i < V.size(); ++i)
{
std::cout << V[i].absolute_value() << " ";
}
std::cout << std::endl;
sort_complex_numbers(V);
for (int i = 0; i < V.size(); ++i)
{
std::cout << V[i].absolute_value() << " ";
}
std::cout << std::endl;
}
