#pragma once
#include "application.h"
class Administrator : public application {
	string login;
	string password;
public:

	Administrator() {
		login = "log1";
		password = "pass";
	}
	string rlog() {
		return login;
	}
	string rpass() {
		return password;
	}
	void show();
	void show2();

};

