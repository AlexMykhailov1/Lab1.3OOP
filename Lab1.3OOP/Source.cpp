// Source.cpp
// Об’єкти – параметри методів (дії над кількома об’єктами)
// Михайлов Олександр
// Варіант 19

#include <iostream>
#include "Fraction.h"

using namespace std;

int main() 
{
	Fraction f1, f2;

	f1.Read();
	f1.Display();

	f2.Read();
	f2.Display();

	f1.Compare(f1.GetI(), f1.GetF(), f2.GetI(), f2.GetF());
	f1.Substract(f1.GetI(), f1.GetF(), f2.GetI(), f2.GetF());

	f1.toString();
	f2.toString();

	return 0;
}