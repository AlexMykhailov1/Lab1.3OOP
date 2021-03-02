// Fraction.h

#pragma once
#include <sstream>

class Fraction
{
private:
	long int i;
	unsigned short f;
public:
	long int GetI() const { return i; };
	unsigned short GetF() const { return f; };
	void SetI(long int);
	void SetF(unsigned short);

	void Read();
	void Display();
	bool Init(long int, unsigned short);
	const char* toString();

	void CheckFractional();
	void Compare(long int, unsigned short, long int, unsigned short);
	void Substract(long int, int, long int, int);
};

