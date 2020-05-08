#pragma once
#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;
class Calculator
{

	double possibility;
public:
	Calculator operator()(double iel, double gpa, int active, int exp) {
		Calculator c;
		c.possibility = (double)((iel + exp + gpa + active) / 21) * 100;
		return c;
	}
	void show();

};