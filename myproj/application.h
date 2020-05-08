#pragma once
#include "applicant.h"
using namespace std;
class application : public applicant
{
protected:
	int FacultyChoice;
	int ErasmusChoice;
	int StudentChoice;
	int CountryChoice;
	int SemesterChoice;
	string destination;
	string status;
	string faculty;
	string semester;
public:
	application() {
		FacultyChoice = 0;
		ErasmusChoice = 0;
		StudentChoice = 0;
		CountryChoice = 0;
		SemesterChoice = 0;
		string destination = "not indicated";
		string status = "not indicated";;
		string faculty = "not indicated";;
		string semester = "not indicated";;
	}
	bool operator < (const application& app) const
	{
		return (firstname < app.firstname);
	}
	void setStatus(string);
	void  chooseCountriesOutside();
	void  chooseCountries();
	void  chooseSemester();
	void  chooseFaculty();
	void ChooseErasmusdestination();
	void setid(int);
};