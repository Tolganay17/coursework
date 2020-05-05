#include<iostream>
#include<iomanip>
#include<windows.h>
#include<string>
#include<vector>
#include<conio.h>

using namespace std;

int c = 0;

class applicant
{
public:
	void getInfo();
	

	int num;
	string firstname;
	string lastname;
	int id;
	int GPA;

};


class application : public applicant
{
protected:


	int FacultyChoice;
	int ErasmusChoice;
	int StudentChoice;
	int CountryChoice;
	int SemesterChoice;

public:
	
	string destination;
	string status;
	string faculty;
	string semester;
	void setStatus(string);
	void  chooseCountriesOutside();
	void  chooseCountries();
	void  chooseSemester();
	void  chooseFaculty();
	void ChooseErasmusdestination();
	void choose();
	void setid(int);
};
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






void application::setid(int n) {
	id = n;
	
}
void application:: setStatus(string st) {
	status = st;
}

	
void application::ChooseErasmusdestination() {
	system("cls");
	cout << "Where do you want to study?"<<endl<<endl;
	cout << "\n(1)-In Europe" << endl;
	cout << "\n(2)-Outside Europe" << endl;
	cout << "\n(0) - Go Back" << endl;
	cout << "---------------" << endl;
	cout << "\nEnter your choice: ";
	cin >> ErasmusChoice;
	switch (ErasmusChoice) {
	case 1:
		
		chooseCountries();

		break;
	case 2:
		
		chooseCountriesOutside();
		break;
	case 0:
		system("cls");

		break;
	default:
		cout << "\nInvalid Choice! Sorry, the program will exit now.\n\n";
		system("cls");
		exit(0);
	}
	
}



	void application::chooseCountriesOutside()
	{
		system("cls");
		cout << "Here are the available coutries outside Europe:" << endl << endl;
		cout << "---------------" << endl;
		cout << "(1) - CANADA" << endl;
		cout << "(2) - CHINA" << endl;
		cout << "(3) - USA" << endl;
		cout << "(4) - HONGKONG" << endl;
		cout << "(5) - KOREA" << endl;
		cout << "(6) - AUSTRALIA" << endl;
		cout << "(7) - JAPAN" << endl;

		cout << "\n(0) - Go Back" << endl;
		cout << "---------------" << endl;
		cout << "\nEnter your choice: ";
		cin >> CountryChoice;

		switch (CountryChoice)
		{
		case 1:
			destination = "CANADA";
			
			break;
		case 2:
		destination = "CHINA";
			
			break;
		case 3:
			destination = "USA";
			
			break;
		case 4:
			destination = "HONGKONG";
			
			break;
		case 5:
			destination= "KOREA";
			
			break;
		case 6:
			destination = "AUSTRALIA";
			
			break;
		case 7:
			destination = "JAPAN";
			
			break;
		case 0:
			system("cls");
			chooseCountries();
			break;
		default:
			cout << "\nInvalid Choice! Sorry, the program will exit now.\n\n";
			system("cls");
			exit(0);


		}

		chooseFaculty();


	}
	
	void application:: chooseFaculty()
	{
		system("cls");
		cout << "\nChoose your faculty." << endl;
		cout << "----------------------" << endl;
		cout << " (1)- Faculty of Environmental Engineering" << endl;
		cout << " (2)-Faculty of Architecture" << endl;
		cout << " (3)-Faculty of Business and Management" << endl;
		cout << " (4)-Faculty of Civil Engineering" << endl;
		cout << " (5)-Faculty of Electronics "<< endl;
		cout << " (6)-Faculty of Fundamental Sciences "<< endl;
		cout << " (7)-Faculty of Mechanics" << endl;
		cout << " (8)-Faculty of Medicine" << endl;
		cout << " (9)-Faculty of Law" << endl;
		cout << "(10)-Faculty of Philosophy"<< endl;
		cout << "(11)-Faculty of History " << endl;
		cout << "(10)-Faculty of Communication" << endl;
		
		cout << "\nEnter your choice: ";
			
		cin >> FacultyChoice;

			switch (FacultyChoice)
			{
			case 1:
				faculty = "Faculty of Environmental Engineering";
				break;
			case 2:
				faculty = "Faculty of Architecture";
				break;
			case 3:
				faculty = "Faculty of Business and Management";
				break;
			case 4:
				faculty = "Faculty of Civil Engineering";
				break;
			case 5:
				faculty = "Faculty of Electronics";
				break;
			case 6:
				faculty = "Faculty of Fundamental Sciences";
				break;
			case 7:
				faculty = "Faculty of Mechanics";
				break;
			case 8:
				faculty = "Faculty of Medicine";
				break;
			case 9:
				faculty = "Faculty of Law";
				break;
			case 10:
				faculty = "Faculty of Philosophy";
				break;
			case 11:
				faculty = "Faculty of History";
				break;
			case 12:
				faculty = "Faculty of Communication­";
				break;
			case 0:

				system("cls");
				break;
			default:
				cout << "\nInvalid Choice! Sorry, the program will exit now.\n\n";
				system("cls");
				exit(0);

		}
			chooseSemester();


	}

	void application:: chooseSemester()
	{
		system("CLS");
		cout << "\nOne semester or two semesters?" << endl;
		cout << "----------------------" << endl;
		cout << "(1) - For One Semester " << endl;
		cout << "(2) - For Two Semesters" << endl;
		cout << "----------------------" << endl;
		cout << "\nEnter your choice: ";
		cin >> SemesterChoice;

		switch (SemesterChoice)
		{
		case 1:
			semester = "ONE ";
			break;
		case 2:
			semester = "TWO";

			break;
		case 0:

			system("cls");
			break;
		default:
			cout << "\nInvalid Choice! Sorry, the program will exit now.\n\n";
			system("cls");
			exit(0);

		}
		applicant::getInfo();
		cin.ignore();


	}


	
	void Administrator:: show()
	{
		system("cls");
		status = "not-cheked";
		cout << setw(50) << "ERASMUS STUDENTS EXCHANGE" <<endl
			<< endl << "|_________________________________________________________________________"
			<< endl << " STUDENT INFORMATION"
			<< endl << " Name: " << lastname << "/" << firstname

			<< endl << "GPA :" << GPA

			<< endl << "|_________________________________________________________________________"

			<< endl << " Origin: LITHUANIA"
			<< endl << " Erasmus country: " << destination
			<< endl << " Faculty: " << faculty
			<< endl << " VILNIUS GEDIDIMNAS TECHNICAL UNIVERSITY"

			<< endl << "SEMESTER"<< " " << semester
			<<endl<<endl<<"YOUR ID IS :"<<id<<"\n\nPRESS ENTER";
	
		cin.ignore();
		
	}
	void Administrator::show2()
	{	
		cout << "\nID :" << id;
		cout << "\nLASTNAME:" <<lastname ;
		cout <<"\nFIRSTNAME:"<< firstname ;
		cout <<"\nGPA:"<<GPA;
		cout <<"\nDESTINATION:"<< destination ;
		cout <<"\nFACULTY:"<<faculty ;
		cout <<"\nSEMESTER:"<<semester ;
		cout << "\nSTATUS:" << status;
		cout << "\n----------------------------------------------------------------------------------";

	}





void application::chooseCountries()
{
	system("cls");
	cout << "Here are the  available coutries in Europe:" << endl << endl;
	cout << "---------------" << endl;
	cout << "(1) - AUSTRIA" << endl;
	cout << "(2) - ITALY" << endl;
	cout << "(3) - SPAIN" << endl;
	cout << "(4) - ESTONIA" << endl;
	cout << "(5) - NORWAY" << endl;
	cout << "(6) - FRANCE" << endl;
	cout << "(7) - POLAND" << endl;
	cout << "\n(0) - Go Back" << endl;
	cout << "---------------" << endl;
	cout << "\nEnter your choice: ";
	cin >> CountryChoice;
	cout << endl << endl;

	switch (CountryChoice)
	{
	case 1:
		destination = "AUSTRIA";

		break;
	case 2:
		destination = "ITALY";

		break;
	case 3:
		destination = "SPAIN";

		break;
	case 4:
		destination = "ESTONIA";

		break;
	case 5:
		destination = "NORWAY";

		break;
	case 6:
		destination = "FRANCE";

		break;
	case 7:
		destination = "POLAND";

		break;
	case 0:
		system("cls");
		chooseCountries();
		break;
	default:
		cout << "\nInvalid Choice! Sorry, the program will exit now.\n\n";
		system("cls");
		exit(0);

	}

	chooseFaculty();
}

void  applicant::getInfo()
{
	system("CLS");
	cout << "\t\tPASSENGER INFORMATION";
	cout << "\nEnter FIRST NAME: ";
	cin >> firstname;
	cout << "\nEnter LAST NAME: ";
	cin >> lastname;
	cout << endl;



	cout << "Enter GPA: ";
	cin >> GPA;
	cout << endl << endl;

	
}
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
	}

	return 0;

}
void dean(vector<Administrator>& appl, int n) {
	cout << "\n";
	

	for (int i = c; i < n; i++) {
		system("cls");
		appl[i].show2();
		cout << "\n\n| SELECT OPTION: \n1)APPROVE \n2)DISAPPROVE\n";
		int choice;
		cin >> choice;
		switch (choice) {
		case 1:appl[i].setStatus("Approved"); c++; break;
		case 2:appl[i].setStatus("Disapproved");c++; break;
		}


	}
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
	_getch();
	main_menu(appl,n);
}
void showApplicant(vector<Administrator>& appl,int n) {
	int id;
	cout << "\n\n\tENTER YOUR ID: ";
	cin >> id;
	appl[id].show2();
	_getch();
	main_menu(appl,n);
}
void student_menu(vector<Administrator>& appl, int n) {
	int StudentChoice;
	cout << "\n(1)-Start application" << endl << endl;
	cout << "\n(2)-See application status" << endl << endl;
	cout << "\n(0) - Go Back" << endl;
	cout << "---------------" << endl;
	cout << "\nEnter your choice: ";
	cin >> StudentChoice;
	switch (StudentChoice) {
	case 1:
		
		appl[n].ChooseErasmusdestination();
		break;
	case 2:
		system("cls");
		showApplicant(appl, n);
		break;
	case 0:
		system("cls");

		break;
	default:
		cout << "\nInvalid Choice! Sorry, the program will exit now.\n\n";
		system("cls");
		exit(0);
	}

}


