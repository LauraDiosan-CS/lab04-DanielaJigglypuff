#include "UserInterface.h"
#include <iostream>
using namespace std;
void addUserInterface(Service& s) {
	char name[100];
	int grade;
	char date[100];
	cout << endl;
	cout << "Introduce the name :  ";
	cin >> name;
	cout << "Introduce the grade : ";
	cin >> grade;
	cout << endl;
	cout << "introduce the date :  ";
	cin >> date;
	cout << endl;
	Exam newExam(name,grade , date);
	s.addExam(newExam);
	cout << ".... Done ! PogChamp !" << endl;	
}
void deleteUserInterface(Service& s) {
	char name[100];
	int grade;
	char date[100];
	cout << endl;
	cout << "Intoduce the name :  ";
	cin >> name;
	cout << "Intoduce the gade :  ";
	cin >> grade;
	cout << endl;
	cout << "Intoduce the date :  ";
	cin >> date;
	cout << endl;
	Exam newExam(name, grade, date);
	s.deleteExam(newExam);
	cout << "Deleted!" << endl;
}
void updateExamUI(Service& s) {
	int index;
	char name[100];
	int grade;
	char date[100];
	cout << "Introduce the index: ";
	cin >> index;
	cout << endl;
	cout << "Intoduce the name :  ";
	cin >> name;
	cout << "Intoduce the gade :  ";
	cin >> grade;
	cout << endl;
	cout << "Intoduce the date :  ";
	cin >> date;
	cout << endl;
	Exam newExam(name ,grade , date);
	s.updateExam(newExam, index);
}
void findUserInterface(Service& s) {
	char name[100];
	int grade;
	char date[100];
	cout << "Intoduce the name :  ";
	cin >> name;
	cout << "Intoduce the gade :  ";
	cin >> grade;
	cout << endl;
	cout << "Intoduce the date :  ";
	cin >> date;
	cout << endl;
	Exam newExam(name, grade, date);
	int i = s.find(newExam);
	cout << " Index : " << i << endl;
}
void showUI(Service& s)
{
	cout << "The elements are:  " << endl;
	for (int i = 0; i < s.getSize(); i++) {
		cout << s.getAll()[i] << " ";
	}
	cout << endl;
}
char meniuUserInterface()
{
	char op;
	cout << " -------- < Menu > -----------"<< endl
		<< "1. Show all the exams :) ;" << endl
		<< "2. Add an exam  " << endl
		<< "3. Delete an exam  " << endl
		<< "4. Modify an exam   " << endl
		<< "5 .Identify an exam  " << endl
		<< "6. Alphabetically orders all the names " << endl
		<< "7. Close the application." << endl
		<< " My magic number is  ";
	cin >> op;
	cout << endl;
	return op;
}

Service s;
int uwu() {
	char op;
	do
	{
		op = meniuUserInterface();
		switch (op)
		{
		default:
		{
			cout << "there is no such command :/ " << endl;
			break;
		}
		case '1':
		{
			showUI(s);
			break;
		}
		case '2':
		{
			addUserInterface(s);
			break;
		}
		case '3':
		{
			deleteUserInterface(s);
			break;
		}
		case '4':
		{
			updateExamUI(s);
			break;
		}
		case'5':
		{
			findUserInterface(s);
			break;
		}
		case '6':
		{
			op = 0;
			break;
		}
		}


	} while (op);
	return 0;
}
