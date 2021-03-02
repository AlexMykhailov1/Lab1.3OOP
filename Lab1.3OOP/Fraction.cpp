// Fraction.cpp

#include "Fraction.h"
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

void Fraction::SetI(long int value) {
	i = value;
}

void Fraction::SetF(unsigned short value) {
	f = value;
}

void Fraction::Read() {
	cout << " Enter the integer part of the number: "; cin >> i;
	cout << " Enter the fractional part of the number: "; cin >> f;

	if (!Init(i, f)) {
		cout << " ERROR" << endl;
		exit(0);
	}
}

void Fraction::Display() {
	cout << endl << " " << GetI() << ",";
	CheckFractional();
	cout << endl;
}

bool Fraction::Init(long int i, unsigned short f) {
	if (i > 1000000 || i < -1000000 || f > 999 || f < 0)
		return false;
}

const char* Fraction::toString() {
	stringstream sout;
	sout << i << "," << f << endl;
	return sout.str().c_str();
}

void Fraction::CheckFractional() {
	if (f < 10) {
		cout << "00" << f;
	}
	else if (f > 9 && f < 100) {
		cout << "0" << f;
	}
	else
		cout << f;
	cout << endl;
}

void Fraction::Compare(long int i1, unsigned short f1, long int i2, unsigned short f2) {
	if (i1 > i2) { // якщо ц≥ла частина 1 б≥льше ц≥лоњ частини 2
		cout << " First number is bigger!" << endl;
	}
	else if (i2 > i1) { // якщо ц≥ла частина 2 б≥льше ц≥лоњ частини 1
		cout << " Second number is bigger!" << endl;
	}
	else { // якщо ц≥л≥ частини р≥вн≥
		if (f1 > f2) { // якщо дробова частина 1 б≥льше н≥ж 2
			cout << " First number is bigger!" << endl;
		}
		else if (f2 > f1) { // якщо дробова частина 2 б≥льше н≥ж 1
			cout << " Second number is bigger!" << endl;
		}
		else // якщо дробов≥ частини р≥вн≥
			cout << " Numbers are equal!" << endl;
	}
}

void Fraction::Substract(long int i1, int f1, long int i2, int f2) {
	long int i3;
	int f3;

	i3 = i1 - i2; // ÷≥ла частина

	// ƒробова частина

	if (i1 > 0 && i2 >= 0) {
		f3 = f1 - f2;
		if (f3 < 0) {
			i3--;
			f3 = 1000 + f3;
		}
		cout << endl << " " << i1 << "," << f1 << " - " << i2 << "," << f2 << " = " << i3 << ",";
		if (f3 < 10) {
			cout << "00" << f3;
		}
		else if (f3 > 9 && f3 < 100) {
			cout << "0" << f3;
		}
		else
			cout << f3;
		cout << endl;
	}
	else if (i1 > 0 && i2 < 0) {
		f3 = f1 + f2;
		if (f3 > 1000) {
			i3++;
			f3 = f3 - 1000;
		}
		else if (f3 == 1000) {
			i3++;
			f3 = 0;
		}
		else {
			cout << endl << " " << i1 << "," << f1 << " - " << i2 << "," << f2 << " = " << i3 << ",";
			if (f3 < 10) {
				cout << "00" << f3;
			}
			else if (f3 > 9 && f3 < 100) {
				cout << "0" << f3;
			}
			else
				cout << f3;
			cout << endl;
		}
	}
	else if (i1 < 0 && i2 >= 0) {
		f3 = f1 - f2;
		if (f3 < 0) {
			i3--;
			f3 = 1000 + f3;
		}
		cout << endl << " " << i1 << "," << f1 << " - " << i2 << "," << f2 << " = " << i3 << ",";
		if (f3 < 10) {
			cout << "00" << f3;
		}
		else if (f3 > 9 && f3 < 100) {
			cout << "0" << f3;
		}
		else
			cout << f3;
		cout << endl;
	}
	else if (i1 < 0 && i2 < 0) {
		f3 = f1 + f2;
		if (f3 > 1000) {
			i3++;
			f3 = f3 - 1000;
		}
		else if (f3 == 1000) {
			i3++;
			f3 = 0;
		}
		else {
			cout << endl << " " << i1 << "," << f1 << " - " << i2 << "," << f2 << " = " << i3 << ",";
			if (f3 < 10) {
				cout << "00" << f3;
			}
			else if (f3 > 9 && f3 < 100) {
				cout << "0" << f3;
			}
			else
				cout << f3;
			cout << endl;
		}
	}
	else if (i1 == 0 && i2 > 0) {
		f3 = f1 - f2;
		if (f3 < 0) {
			i3--;
			f3 = 1000 + f3;
		}
			cout << endl << " " << i1 << "," << f1 << " - " << i2 << "," << f2 << " = " << i3 << ",";
			if (f3 < 10) {
				cout << "00" << f3;
			}
			else if (f3 > 9 && f3 < 100) {
				cout << "0" << f3;
			}
			else
				cout << f3;
			cout << endl;
	}
	else if (i1 == 0 && i2 < 0) {
		f3 = f1 + f2;
		if (f3 > 1000) {
			i3++;
			f3 = f3 - 1000;
		}
		else if (f3 == 1000) {
			i3++;
			f3 = 0;
		}
		else {
			cout << endl << " " << i1 << "," << f1 << " - " << i2 << "," << f2 << " = " << i3 << ",";
			if (f3 < 10) {
				cout << "00" << f3;
			}
			else if (f3 > 9 && f3 < 100) {
				cout << "0" << f3;
			}
			else
				cout << f3;
			cout << endl;
		}
	}
	else if (i1 == 0 && i2 == 0) {
		f3 = f1 - f2;
		if (f3 < 0) {
			i3--;
			f3 = 1000 - f3;
		}
		cout << endl << " " << i1 << "," << f1 << " - " << i2 << "," << f2 << " = " << i3 << ",";
		if (f3 < 10) {
			cout << "00" << f3;
		}
		else if (f3 > 9 && f3 < 100) {
			cout << "0" << f3;
		}
		else
			cout << f3;
		cout << endl;
	}
}