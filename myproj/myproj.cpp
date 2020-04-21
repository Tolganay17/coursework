#include<iostream>
#include<iomanip>
#include<windows.h>
#include<string>

using namespace std;


class Erasmus
{
public:
	void getInfo();
	

	int num;
	char firstname[60];
	char lastname[60];

	int GPA;

};


class booking : public Erasmus
{
public:
	void main_menu();
	void chooseTarget()
	{
	   chooseCountriesOutside();
	};

	void choosesecondTarget()
	{
	   chooseCountries();
	};

	void chooseCountries()
	{
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
		cin >> TargetChoice;
		cout << endl << endl;

		switch (TargetChoice)
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
			destination= "POLAND";
		
			break;
		case 0:
			system("cls");
			choosesecondTarget();
			break;
		default:
			cout << "\nInvalid Choice! Sorry, the program will exit now.\n\n";
			system("cls");
			exit(0);

		}

		chooseSemester();
	};

	void chooseCountriesOutside()
	{
		booking b;

		cout << "Here are the available coutries outside Europe:" << endl << endl;
		cout << "---------------" << endl;
		cout << "(1) - CANADA" << endl;
		cout << "(2) - BEIJING" << endl;
		cout << "(3) - USA" << endl;
		cout << "(4) - HONGKONG" << endl;
		cout << "(5) - SEOUL" << endl;
		cout << "(6) - AUSTRALIA" << endl;
		cout << "(7) - OSAKA" << endl;

		cout << "\n(0) - Go Back" << endl;
		cout << "---------------" << endl;
		cout << "\nEnter your choice: ";
		cin >> TargetChoice;

		switch (TargetChoice)
		{
		case 1:
			destination = "CANADA";
			
			break;
		case 2:
		destination = "BEIJING";
			
			break;
		case 3:
			destination = "USA";
			
			break;
		case 4:
			destination = "HONGKONG";
			
			break;
		case 5:
			destination= "SEOUL";
			
			break;
		case 6:
			destination = "AUSTRALIA";
			
			break;
		case 7:
			destination = "OSAKA";
			
			break;
		case 0:
			system("cls");
			chooseTarget();
			break;
		default:
			cout << "\nInvalid Choice! Sorry, the program will exit now.\n\n";
			system("cls");
			exit(0);


		}

		chooseSemester();


	};

	void chooseSemester()
	{
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
			semester = "FOR ONE SEMESTER ";
			break;
		case 2:
			semester = "FOR TWO SEMESTERS";
			
			break;
		case 0:

			system("cls");
			break;
		default:
			cout << "\nInvalid Choice! Sorry, the program will exit now.\n\n";
			system("cls");
			exit(0);

		}
		Erasmus::getInfo();
		cin.ignore();

	
	};


	
	void show()
	{
		system("cls");

		cout << setw(50) << "ERASMUS STUDENTS EXCHANGE" << endl;
		cout << setw(45) << "TARGET DETAILS" << endl << endl

			<< endl << "|_________________________________________________________________________"
			<< endl << " PASSENGER INFORMATION"
			<< endl << " Name: " << lastname << "/" << firstname

			<< endl << "GPA :" << GPA

			<< endl << "|_________________________________________________________________________"
			<< endl << " FLIGHT INFORMATION"
			<< endl << " Origin: LITHUANIA"
			<< endl << " Erasmus country: " << destination
			<< endl << " VILNIUS GEDIDIMNAS TECHNICAL UNIVERSITY"

			<< endl << endl << " " << semester;
			
		

		cout << "\n\nPLEASE DOUBLE CHECK";
		cout << "\n(1) - Confirm";
		cout << "\n(2) - Go Back";
		cout << "\n\nEnter choice: ";
		cin.ignore();
		main_menu();
	};



protected:
	int target;
	int TargetChoice;
	string destination;

	int SemesterChoice;
	string semester;




};

void  Erasmus::getInfo()
{
	system("CLS");
	cout << setw(60) << "\n\nPASSENGER INFORMATION";
	cout << "\n\n\nEnter FIRST NAME: ";
	cin.ignore();
	cin.getline(firstname, 60);

	cout << "\nEnter LAST NAME: ";
	cin.ignore();
	cin.getline(lastname, 60);
	cout << endl;



	cout << "Enter GPA: ";
	cin >> GPA;
	cout << endl << endl;

	
}
void booking::main_menu() {
	int menu_choice;

	cout << "NAIA 123 TICKETING";
	cout << "\n\n\n\n\n\n\n\n\n\n\t\t WELCOME TO ERASMUS STUDENTS EXCHANGE PROGRAM!";
	Sleep(1500);
	system("cls");

	cout << "\n\n\n\n\n\n";
	cout << setw(60) << "***************************************" << endl;
	cout << setw(60) << "*        Erasmus Students Exchange    *" << endl;
	cout << setw(60) << "*             MAIN MENU               *" << endl;
	cout << setw(60) << "*        ENTER YOUR CHOICE            *" << endl;
	cout << setw(60) << "*   PRESS 1 FOR STUDYING IN EUROPE    *" << endl;
	cout << setw(60) << "* PRESS 2 FOR STUDYING OUTSIDE EUROPE *" << endl;
	cout << setw(60) << "* PRESS 2 FOR APPLICATION STATUS      *" << endl;
	cout << setw(60) << "*************************************" << endl << endl << endl;
	cout << setw(60) << "    ENTER YOUR CHOICE: ";
	cin >> menu_choice;



	system("cls");

	switch (menu_choice)
	{
	case 1:
		choosesecondTarget();


		break;


	case 2:
		chooseTarget();
		break;

	}
}

int main()
{
	booking b;
	b.main_menu();
	b.show();
	return 0;

}



