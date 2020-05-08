#include "Administrator.h"
#include <iomanip>
void Administrator::show()
{
	system("cls");
	status = "not-cheked";
	cout << setw(50) << "ERASMUS STUDENTS EXCHANGE" << endl
		<< endl << "|_________________________________________________________________________"
		<< endl << " STUDENT INFORMATION"
		<< endl << " Name: " << lastname << "/" << firstname

		<< endl << "GPA :" << GPA

		<< endl << "|_________________________________________________________________________"

		<< endl << " Origin: LITHUANIA"
		<< endl << " Erasmus country: " << destination
		<< endl << " Faculty: " << faculty
		<< endl << " VILNIUS GEDIDIMNAS TECHNICAL UNIVERSITY"

		<< endl << "SEMESTER" << " " << semester
		<< endl << endl << "YOUR ID IS :" << id << "\n\nPRESS ENTER";

	cin.ignore();

}
void Administrator::show2()
{
	cout << "\nID :" << id;
	cout << "\nLASTNAME:" << lastname;
	cout << "\nFIRSTNAME:" << firstname;
	cout << "\nGPA:" << GPA;
	cout << "\nDESTINATION:" << destination;
	cout << "\nFACULTY:" << faculty;
	cout << "\nSEMESTER:" << semester;
	cout << "\nSTATUS:" << status;
	cout << "\n----------------------------------------------------------------------------------";

}
