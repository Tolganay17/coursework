#pragma once
using namespace std;
#include<iostream>
class applicant
{
protected:
	int id;
	double GPA;
	string firstname;
	string lastname;
public:
	applicant() {
		
		firstname = "not indicated";
		lastname = "not indicated";
		id = 0;
		GPA = 0;
	}
	void getInfo();
};