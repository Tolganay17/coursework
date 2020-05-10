#include "Calculator.h"
void Calculator::show()
{

	cout << fixed;
	cout << "Your possibility to admission is:" << setprecision(2) << possibility << '%';
	_getch();
}
