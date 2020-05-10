
#include<windows.h>
#include<string>
#include<vector>
#include<algorithm>
#include "applicant.h"
#include "Administrator.h"
#include "application.h"
#include "Calculator.h"

using namespace std;
int counter = 0;
void showApplicant(vector<Administrator>& appl,int );
void admin(vector<Administrator>& appl, int );
void dean(vector<Administrator>& appl, int );
void student_menu(vector<Administrator>& appl, int);
void main_menu(vector<Administrator>&appl,int i) {
	int menu_choice;

	cout << "ERASMUS STUDENTS ExCHANGE";
	cout << "\n\n\n\n\n\n\n\n\n\n\t\t WELCOME TO ERASMUS STUDENTS EXCHANGE PROGRAM!";
	Sleep(1500);
	system("cls");

	cout << "\n\n\n\n\n\n";
	cout << setw(60) << "       Erasmus Students Exchange      \n";
	cout << setw(60) << "             MAIN MENU               \n ";
	cout << setw(60) << "         ENTER YOUR CHOICE            \n";
	cout << setw(60) << "         1 FOR STUDENTS               \n";
	cout << setw(60) << "         2 TO SIGN IN AS ADMIN        \n";
	cout << setw(60) << "         3 TO EVALUATE               \n\n";
	cout << setw(60) << "         ENTER YOUR CHOICE: ";
	cin >> menu_choice;



	system("cls");

	switch (menu_choice)
	{
	case 1:

		appl[i].setid(i);
		student_menu(appl,i);
		
		break;
	
	case 2:admin(appl,i); break;
	case 3:dean(appl, i); break;
	
	
	}
	
}

int main()
{ 
	vector<Administrator>appl;
	for (int i = 0; i < 100; i++) {
		Administrator a;
		appl.push_back(a); 
		main_menu(appl, i);
		appl[i].show();
		sort(appl.begin(),appl.end());
	}

	return 0;

}
void dean(vector<Administrator>& appl, int n) {
	cout << "\n";
	

	for (int i = counter; i < n; i++) {
		system("cls");
		appl[i].show2();
		cout << "\n\n| SELECT OPTION: \n1)APPROVE \n2)DISAPPROVE\n";
		int choice;
		cin >> choice;
		switch (choice) {
		case 1:appl[i].setStatus("Approved"); counter++; break;
		case 2:appl[i].setStatus("Disapproved");counter++; break;
		}


	}
	cout << "\nPress enter to go to main menu";
	_getch();

	main_menu(appl,n);
}
void admin(vector<Administrator>& appl, int n) {
	system("cls");
	cout << "\n";
	Administrator adm;
	string log, pass;
	cout << "\nEnter login: ";
	cin >> log;
	cout << "\nEnter password: ";
	cin >> pass;
	if (log == adm.rlog() && pass == adm.rpass()) {
		system("cls");
		for (int i = 0; i < n; i++) {
			appl[i].show2();

		}
	}
	else cout << "Incorrect password";
	cout << "\nPress enter to go to main menu";
	_getch();
	main_menu(appl,n);
}
void showApplicant(vector<Administrator>& appl,int n) {
	int id;
	cout << "\n\n\tENTER YOUR ID: ";
	cin >> id;
	appl[id].show2();
	cout << "\nPress enter to go to main menu";
	_getch();
	main_menu(appl,n);
}
void calculation(vector<Administrator>& appl, int n) {
	Calculator cal;
	Calculator c;
	double ielts_score, gpa;
	int exp, active;
	int activitychoice;
	int ExperienceChoice;
	cout << "\n\n What is your Ielts score?\n";
	cin >> ielts_score;
	cout << "\n\n What is your gpa?\n";
	cin >> gpa;
	cout << endl << endl;
	cout << "Are you an active student?";
	cout << "\n\n (1)-YES";
	cout << "\n (2)-NO\n";
	cout << "---------------" << endl;
	cout << "\nEnter your choice: ";
	cin >> activitychoice;
	switch (activitychoice) {
	case 1:
		active = 1;
		break;
	case 2:
		active = 0;
		break;
	default:
		cout << "\nInvalid Choice! Sorry, the program will exit now.\n\n";
		system("cls");
		exit(0);
	}
	cout << "\n\n Have you studied under Erasmus program before?";
	cout << "\n\n (1)-YES";
	cout << "\n (2)-NO\n\n";
	cout << "---------------" << endl;
	cout << "\nEnter your choice: \n";
	cin >> ExperienceChoice;
	switch (ExperienceChoice) {
	case 1:
		exp = 1;
		break;
	case 2:
		exp = 0;
		break;
	default:
		cout << "\nInvalid Choice! Sorry, the program will exit now.\n\n";
		system("cls");
		exit(0);
	}
	c=cal(ielts_score, gpa, active, exp);
	c.show();
	cout << "Press enter";
	_getch();
	main_menu(appl, n);
}
void student_menu(vector<Administrator>& appl, int n) {
	int StudentChoice;
	cout << "\n(1)-Start application" << endl << endl;
	cout << "\n(2)-See application status" << endl << endl;
	cout << "\n(3)-Calculate the possibillity of admission" << endl << endl;
	cout << "\n(0) - Go Back" << endl;
	cout << "---------------" << endl;
	cout << "\nEnter your choice:\n ";
	cin >> StudentChoice;
	switch (StudentChoice) {
	case 1:
		
		appl[n].ChooseErasmusdestination();
		break;
	case 2:
		system("cls");
		showApplicant(appl, n);
		break;
	case 3:
		
		system("cls");
		calculation(appl, n);
		break;
	
	default:
		cout << "\nInvalid Choice! Sorry, the program will exit now.\n\n";
		system("cls");
		exit(0);
	}
	
}


