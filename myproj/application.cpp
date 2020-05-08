#include "application.h"

void application::setid(int n) {
	id = n;

}
void application::setStatus(string st) {
	status = st;
}


void application::ChooseErasmusdestination() {
	system("cls");
	cout << "Where do you want to study?" << endl << endl;
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
		destination = "KOREA";

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

void application::chooseFaculty()
{
	system("cls");
	cout << "\nChoose your faculty." << endl;
	cout << "----------------------" << endl;
	cout << " (1)- Faculty of Environmental Engineering" << endl;
	cout << " (2)-Faculty of Architecture" << endl;
	cout << " (3)-Faculty of Business and Management" << endl;
	cout << " (4)-Faculty of Civil Engineering" << endl;
	cout << " (5)-Faculty of Electronics " << endl;
	cout << " (6)-Faculty of Fundamental Sciences " << endl;
	cout << " (7)-Faculty of Mechanics" << endl;
	cout << " (8)-Faculty of Medicine" << endl;
	cout << " (9)-Faculty of Law" << endl;
	cout << "(10)-Faculty of Philosophy" << endl;
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

void application::chooseSemester()
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